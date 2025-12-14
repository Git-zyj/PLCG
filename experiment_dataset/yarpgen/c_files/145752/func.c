/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145752
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) max((arr_4 [i_0]), (((/* implicit */int) arr_2 [i_1] [i_0]))))), (7083801265019519975ULL)))));
                var_12 = ((/* implicit */unsigned short) ((((arr_4 [i_0]) & (min((((/* implicit */int) arr_0 [i_0])), (arr_4 [i_0]))))) & ((~(((/* implicit */int) var_1))))));
                var_13 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((4051431293U), (243535997U)))) & (((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_3 [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 4; i_2 < 19; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((var_3) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)127))))) & (((/* implicit */long long int) ((min((var_2), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])))) << (((((/* implicit */int) var_1)) + (34)))))))))));
                        var_15 |= ((/* implicit */unsigned long long int) var_1);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_12 [i_2 - 4] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */long long int) ((_Bool) 9223372036854775807LL));
                            arr_13 [i_3] = ((/* implicit */unsigned int) ((unsigned long long int) var_2));
                        }
                        var_16 ^= ((/* implicit */signed char) var_7);
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_1] [i_2 - 2] = ((arr_15 [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_2 - 1]) & (arr_15 [i_2 - 4] [i_2 - 1] [i_2 - 2] [i_2 - 3]));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [10U] [i_1] [15U] [i_2 - 4] [i_0] [i_0] [i_6]))));
                            var_18 = ((/* implicit */unsigned char) (((~(((/* implicit */int) var_0)))) & (((((/* implicit */int) var_0)) & (((/* implicit */int) var_5))))));
                        }
                        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_2 - 2] [i_1] [i_2] [i_5])) & (((/* implicit */int) (unsigned short)127))));
                        arr_20 [i_2 - 3] [i_1] = ((/* implicit */unsigned char) ((unsigned short) ((short) (signed char)33)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (arr_9 [i_7 + 2] [i_7] [i_7 - 1] [i_7 + 1] [i_2] [i_2 - 4])))), (min(((-(arr_21 [i_7] [i_2 + 2] [i_1] [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1)))))))));
                        var_21 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
                    }
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_1]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_2])))) : (((((/* implicit */int) (short)6411)) & (((/* implicit */int) (signed char)120))))));
                }
            }
        } 
    } 
}

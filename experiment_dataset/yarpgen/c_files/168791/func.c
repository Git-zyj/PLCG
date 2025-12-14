/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168791
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_1 [0ULL])))))))) ? (((((/* implicit */int) arr_3 [i_0 + 2] [i_0] [i_0 + 4])) / (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned char) arr_1 [i_1 + 2])))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 - 1])) ? (((/* implicit */int) (_Bool)0)) : ((+(((/* implicit */int) var_4))))));
                        var_19 = ((((/* implicit */int) arr_6 [i_0] [i_0 + 4] [i_2] [i_2])) << (((((/* implicit */int) arr_6 [i_1 - 1] [i_0 + 4] [i_0 + 2] [i_0 + 4])) - (129))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_20 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0]))));
                            arr_14 [i_4] [i_2] [i_1] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_1] [i_0])))))));
                        }
                        for (short i_5 = 2; i_5 < 16; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? ((~(5839141792369439367ULL))) : (((/* implicit */unsigned long long int) ((var_17) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17)))))));
                            arr_17 [i_5] [i_0] [i_2] [i_1] [i_0] = ((((/* implicit */int) arr_6 [i_0 - 2] [i_1] [(unsigned short)11] [i_3])) << (((((/* implicit */int) arr_6 [i_0 + 2] [i_1 + 3] [i_2] [i_2])) - (112))));
                        }
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_22 = ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                        }
                    }
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (3584ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0 + 4] [i_2])) ? (arr_4 [i_1 - 1] [i_0 + 4] [i_1 + 1]) : (arr_4 [i_1 - 1] [i_0 + 4] [i_1 - 1]))))));
                }
                var_24 = ((/* implicit */unsigned short) 5839141792369439367ULL);
                arr_23 [i_0 + 3] = ((/* implicit */short) (~((+(((/* implicit */int) (_Bool)1))))));
                arr_24 [i_1 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_1), ((unsigned char)53)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1108076091)) || (((/* implicit */_Bool) arr_12 [i_1 - 1] [i_0 + 4] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_0 + 4] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_0 + 4] [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_25 |= ((/* implicit */short) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_0))))) ? (((((/* implicit */int) var_17)) - (((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_13))))))));
    var_26 = ((((/* implicit */unsigned int) min((2147483630), (((/* implicit */int) (unsigned short)47617))))) > (2910018324U));
    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (var_9)))) + (min((var_5), (((/* implicit */unsigned int) var_6)))))))))));
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_3))));
}

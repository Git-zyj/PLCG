/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153244
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((arr_6 [i_1] [i_1 + 1] [16ULL]) >> (((((/* implicit */int) arr_1 [i_0])) - (152))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        var_11 = ((/* implicit */unsigned char) var_3);
                        var_12 = ((/* implicit */short) ((-1791397685) + (2147483647)));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 2; i_5 < 16; i_5 += 2) 
                        {
                            var_13 = ((/* implicit */short) ((((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7)))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_12 [i_4]))));
                            arr_15 [i_4] = ((/* implicit */long long int) arr_11 [i_0] [i_1 + 2] [i_1 + 2] [i_4]);
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) (~((~(((/* implicit */int) var_6)))))))));
                            arr_16 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) + (12184947762033300600ULL)));
                            arr_17 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) arr_4 [i_5 - 1]);
                        }
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) arr_14 [i_6] [i_4] [i_0 + 2] [i_0 + 2] [i_0 + 2]);
                            arr_20 [i_0] [i_0] [i_0] [(signed char)9] [i_2] [i_4] [i_6] = ((/* implicit */signed char) (~((-(var_8)))));
                        }
                        arr_21 [i_1 - 1] [i_2] [i_1 - 1] [i_0 + 2] = ((/* implicit */_Bool) ((unsigned char) arr_10 [i_0] [i_0] [i_0] [i_1 - 1] [i_0]));
                        var_16 = ((/* implicit */signed char) (((-(((/* implicit */int) var_9)))) ^ ((~(((/* implicit */int) arr_13 [i_2]))))));
                    }
                    arr_22 [i_0] &= ((/* implicit */long long int) (-(754280300U)));
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 16; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */short) arr_4 [i_0 + 2]);
                                arr_28 [i_0] [0ULL] [i_2] [0ULL] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_4)))) ? (((/* implicit */int) arr_25 [i_0] [i_7 + 1] [14U] [i_1])) : ((+(var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 *= ((/* implicit */unsigned char) var_4);
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13756
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_5))))))) ? (((((/* implicit */_Bool) (+(var_2)))) ? (((-7998776989546890656LL) / (((/* implicit */long long int) ((/* implicit */int) (short)4204))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-20221)) & (((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                arr_8 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) (signed char)123)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(var_13))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4] [i_2] [i_2] [i_0]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) var_0);
                    arr_18 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) var_7);
                }
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    arr_21 [i_0] [i_0] [(short)4] &= ((/* implicit */short) arr_16 [i_5] [i_5] [(unsigned char)16] [i_1 - 1] [i_0] [i_0] [i_0]);
                    var_19 *= ((/* implicit */unsigned short) ((unsigned char) 18446744073709551615ULL));
                }
            }
        } 
    } 
}

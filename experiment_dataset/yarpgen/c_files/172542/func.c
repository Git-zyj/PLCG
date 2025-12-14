/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172542
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
    var_19 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [(short)3] = ((/* implicit */unsigned short) 4611686018427387904LL);
                arr_5 [i_0] = ((/* implicit */unsigned char) (-(2408184686U)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18014261070528512LL))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_7))));
                        arr_14 [i_1] [(unsigned char)9] = ((/* implicit */unsigned char) ((2147483647) << (((((/* implicit */int) arr_2 [i_0] [6ULL])) - (11)))));
                        var_21 -= ((var_3) & (((/* implicit */unsigned int) 18828307)));
                        var_22 = ((/* implicit */long long int) (-2147483647 - 1));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((4611686018427387904LL) != (((/* implicit */long long int) 36808103))));
                            var_24 -= ((/* implicit */long long int) var_0);
                            arr_19 [i_5] [1ULL] [7LL] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [(short)1] [1]))));
                        }
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */int) 9223372036854775807LL);
                            arr_23 [i_0] [i_0] [5U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((-2147483647) & (((/* implicit */int) var_14)))) << (((((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) arr_8 [i_4])))) - (37)))));
                            arr_24 [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 1320502638U)) || (((/* implicit */_Bool) (short)-8192)))));
                        }
                        arr_25 [i_1] = ((/* implicit */unsigned int) ((short) ((short) (short)124)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned char) var_6);
                        arr_30 [i_0] [6ULL] [i_1] [i_2] [i_7] = ((/* implicit */unsigned short) arr_2 [i_0] [i_7]);
                        arr_31 [i_7] [i_2] [i_2] [0] [i_0] = ((/* implicit */unsigned int) -18828308);
                        arr_32 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0]);
                        arr_33 [i_7] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) arr_22 [2] [(unsigned char)5] [(unsigned char)9] [i_2] [i_7]);
                    }
                    var_27 = ((/* implicit */unsigned int) 4611686018427387896LL);
                    var_28 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_15 [5] [i_0] [i_1] [i_2] [i_2] [8])))));
                }
                var_29 = ((/* implicit */unsigned int) 9223372036854775807LL);
            }
        } 
    } 
}

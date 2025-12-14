/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, (min(((var_1 ? ((9223372036854775807 ? 2514411620384259957 : (arr_2 [i_0] [i_0]))) : 3309992142)), (((3 >> (3 && var_1))))))));
                            var_12 ^= (arr_3 [i_0] [2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_13 -= 3309992147;
                            var_14 = (max(var_14, ((((min((18446744073709551613 - var_9), 18446744073709551605)) - ((1077389098 ? (18446744073709551611 - 3217578208) : (arr_8 [i_0] [i_4] [i_4] [i_5]))))))));
                        }
                    }
                }
                arr_16 [i_1] = ((((arr_2 [i_1 - 1] [i_1 - 1]) ? 18446744073709551615 : -1444040396117227213)));
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_15 *= ((((((arr_7 [i_8]) * 3217578207))) + ((var_2 ? (arr_7 [i_8]) : 18446744073709551609))));
                                arr_26 [i_8] [i_0] [i_6] [i_1] [i_8] = ((((max(18446744073709551601, ((13189238792862209487 << (28158 - 28122)))))) ? -var_3 : (!3217578196)));
                                var_16 = (max(var_1, (min((!-8924955824822734488), (arr_12 [i_7 - 2] [i_1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

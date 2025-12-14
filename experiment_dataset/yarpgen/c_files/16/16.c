/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (~12);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 += (-(((!((((var_1 + 2147483647) << (((-10311 + 10338) - 27)))))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        var_16 = (127 <= var_2);
                        var_17 = (((63 * var_1) ? (arr_9 [10] [i_1] [i_2] [10]) : (((((arr_7 [i_0] [i_0] [i_0] [i_0]) < 1))))));
                        arr_11 [i_1] = ((arr_9 [i_3 + 1] [i_1 - 2] [i_2] [i_0 - 2]) ? (arr_7 [i_3 + 1] [i_1 - 2] [i_0] [i_0 - 2]) : 12);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_18 ^= var_10;
                                var_19 = ((+((1 ? (arr_9 [i_0] [i_2] [1] [i_5]) : 746818373))));
                                arr_16 [i_4] [i_4] = (!var_1);
                                arr_17 [i_0] [i_1] [i_2] = -5;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_20 &= (arr_4 [i_8] [6]);
                                var_21 *= ((((-((min((arr_21 [2] [i_6] [i_6] [i_1]), var_8))))) >= (((~var_7) & (((arr_27 [i_1]) & var_0))))));
                                arr_29 [i_8] [0] [i_6] [i_7] [i_8] = ((-26606 ? ((((max(105, var_1))) ? 2147483647 : ((2 ? 2147483616 : 4615)))) : ((((arr_1 [i_1 + 1] [i_1 + 2]) > (arr_1 [i_1 + 2] [i_1 + 3]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}

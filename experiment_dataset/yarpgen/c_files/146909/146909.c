/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = -103;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_11 = 4366003301433302226;
                                var_12 = -4366003301433302226;
                            }
                        }
                    }
                    var_13 = 31;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_14 = arr_8 [i_5] [8];
                                arr_17 [14] [i_1] [14] [i_5] [14] = ((-(arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_1 - 1] [12])));
                            }
                        }
                    }
                    arr_18 [11] [i_1] [i_2] = ((arr_6 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]) - 1669468851);
                }
            }
        }
        var_15 = var_1;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_21 [7] &= ((4366003301433302226 ? var_7 : -355734357));
        var_16 = (min(var_16, var_3));
    }
    var_17 = -8;
    var_18 = (min(5577192920759938100, ((var_3 ^ ((var_5 ? 18446744073709551597 : var_1))))));
    #pragma endscop
}

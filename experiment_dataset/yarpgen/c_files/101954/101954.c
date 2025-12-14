/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_11 = (((var_5 ? 2097151 : var_6)));
        arr_4 [i_0] = (var_10 >> (var_0 - 15529769052336389890));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_12 = ((-(((arr_8 [i_0] [i_2]) ? 3591818328 : var_5))));
                                var_13 = (((((-2097152 ? (arr_0 [i_1] [i_1]) : 2097151))) || 2097145));
                            }
                        }
                    }
                    var_14 = (((arr_11 [i_0 - 2] [i_0 - 2] [i_2] [i_2 + 1] [i_2]) <= var_5));
                }
            }
        }
    }
    var_15 = (((((var_8 ? (var_0 % 59) : var_4))) || ((((~var_1) - (((6729242995042745974 ? var_2 : var_5))))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                {
                    arr_23 [i_5] [8] [8] = ((((((arr_6 [i_7 + 2] [i_7 - 1] [i_7 + 3]) ? (arr_6 [i_7 - 1] [i_7 - 1] [i_7 - 1]) : var_3))) ? (arr_6 [i_7 + 2] [i_7 + 2] [i_7 + 3]) : (!var_4)));
                    var_16 = (948006179 >= -4999);
                }
            }
        }
    }
    var_17 = var_3;
    #pragma endscop
}

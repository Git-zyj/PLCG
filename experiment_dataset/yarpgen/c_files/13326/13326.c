/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -7;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0 - 1] = ((((-26 ? 93 : -12)) == (((var_7 <= (arr_1 [i_0 - 3]))))));

        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            arr_7 [i_0] [i_0 - 2] [i_0 - 2] = (((((((arr_1 [i_0]) <= 1)))) & 9912262920755167622));
            arr_8 [i_0] [i_0] = 8064;

            for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            arr_16 [i_2] [i_4] = -78;
                            arr_17 [i_4] [i_1 + 3] [i_2] [i_3] [i_4] = (((arr_3 [i_1 - 1] [i_1 - 2]) ? var_2 : (16 == 57485)));
                        }
                    }
                }
                arr_18 [i_0] = (arr_0 [i_0 - 3]);
                arr_19 [i_1] [12] = (arr_11 [i_0 - 3] [i_1 + 2] [1] [i_1 + 3]);
                arr_20 [5] [i_1] [i_2] = (((-10797 + 2147483647) << (42096 - 42096)));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                arr_23 [i_0 - 2] [i_0] [5] [5] = (arr_10 [i_0 - 1] [i_1 - 2] [6] [i_5]);
                arr_24 [4] [i_1 - 2] [i_5] = (arr_14 [i_5] [i_5] [i_5] [i_1 + 3] [i_0 + 1] [i_0 + 1]);
                arr_25 [i_5] [i_1] [i_1] [i_0] = (arr_22 [i_0] [i_0] [i_1 + 1] [i_1 - 2]);
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
            {
                arr_29 [i_0 - 1] [i_0 - 1] [i_0] = (arr_13 [i_0] [i_0] [i_1 + 2] [i_0 + 1] [i_0] [i_0]);
                arr_30 [i_1 - 3] [11] [i_1] = -108;
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                arr_33 [9] = 18334820778137756463;

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    arr_36 [13] [1] [i_1] [i_1] [i_0 - 1] [i_0 - 1] = (((arr_2 [i_0 - 2]) / (arr_34 [i_0 - 3] [i_1 - 1] [i_0 - 3] [i_1 - 1] [i_0 - 3] [i_8])));
                    arr_37 [i_0] [i_0 - 3] [14] [i_0] [i_7] [i_8] = (arr_11 [i_0] [i_0] [i_0] [i_8]);
                    arr_38 [i_1] [i_1] [i_7] [i_8] [i_7] = (((arr_13 [15] [i_1 + 2] [i_7] [i_8] [i_0 - 1] [i_7]) || (arr_13 [i_0 - 3] [i_1] [i_7] [i_8] [i_0 - 3] [i_8])));
                }
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    arr_41 [i_9] [9] [i_1] [i_0 - 1] = ((((((arr_34 [0] [i_7] [i_7] [i_9] [1] [i_1 + 2]) ? var_5 : (arr_11 [i_0] [i_1] [15] [i_9 + 3])))) ? 550732305 : (arr_11 [i_0] [i_0] [i_0] [i_0])));
                    arr_42 [i_0] &= ((28070 ? (arr_31 [i_0] [i_1 + 1] [i_7] [i_9 + 3]) : 1));
                    arr_43 [i_7] [i_7] [i_7] [i_7] = var_1;
                }
            }
        }
        arr_44 [i_0] [i_0] = (arr_40 [i_0] [i_0 - 1]);
        arr_45 [i_0] [i_0] &= ((var_9 >= (arr_32 [i_0 - 2])));
    }
    #pragma endscop
}

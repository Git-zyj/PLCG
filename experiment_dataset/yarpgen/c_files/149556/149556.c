/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!((max(((min(0, var_7))), -17832))));
    var_19 = var_14;
    var_20 = var_5;

    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (max(((min(var_13, 1))), (min((arr_1 [i_0 - 2] [i_0]), var_8))));
        arr_5 [i_0] = (((-(arr_2 [i_0] [i_0 + 1]))));
        arr_6 [i_0] = ((((((((3920848853 ? 729683189 : 3565284082)) == 1)))) >= (((((9223372036854775796 ? 3565284107 : -172895556))) ? (min(var_11, (arr_3 [i_0]))) : var_6))));
        var_21 = ((1 ? 3558400904 : 1));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] = ((-(arr_8 [i_1 - 3])));
        arr_12 [i_1] [i_1] = (arr_0 [i_1] [i_1]);
        var_22 = 0;
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_23 = 1;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_26 [12] [12] [12] [i_3] [1] = ((((((((arr_14 [i_2] [i_3]) ? (arr_7 [i_3]) : var_12)) * (arr_24 [i_3 + 1] [i_3 + 1] [i_3 + 1] [8] [i_3 + 1] [i_3])))) > (~var_8)));
                            var_24 = max(((((var_11 | (arr_18 [i_4] [i_4] [i_4]))) | 26730)), (((min(var_17, 214)))));
                            arr_27 [i_6] [i_3] [i_3] [i_2] = (min(var_16, (max(12667539187956221827, (!3085125462)))));
                            arr_28 [i_3] [i_3] = var_2;
                            var_25 = var_4;
                        }
                    }
                }
            }
            arr_29 [i_2] [i_3] [i_3] = ((2031221719 ? (1033084373 > var_13) : (max((min(729683209, 1)), 1))));
        }
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_37 [i_9] [6] [6] [i_2] |= 120;

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            var_26 -= (max((min((var_10 > var_9), (arr_38 [i_2 - 3] [i_2] [i_2] [i_9] [i_10]))), (arr_23 [i_9] [i_8 + 1] [i_8] [i_9] [i_8] [i_7 + 1])));
                            arr_40 [i_8] [i_8] = arr_14 [i_7] [i_7];
                            arr_41 [i_2 - 1] [i_2 - 1] [i_8] [i_8] [i_10] = (1 & 240201680);
                            arr_42 [i_8] = (((3565284086 & (arr_20 [1] [i_8 - 1] [i_10]))));
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 13;i_13 += 1)
                {
                    {
                        var_27 = ((+((1361395762 + (((arr_13 [i_12] [i_11]) - 3232986722))))));
                        var_28 = (min(7, 12667539187956221828));
                    }
                }
            }
        }
    }
    var_29 *= var_11;
    #pragma endscop
}

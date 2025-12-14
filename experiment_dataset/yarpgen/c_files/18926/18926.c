/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = ((~(arr_0 [i_0])));
        var_20 |= ((((((arr_1 [i_0]) * var_18))) ? (arr_0 [i_0]) : var_19));
        arr_3 [6] = ((162 ? (arr_0 [i_0]) : (arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_6 [5] [i_1] = var_12;
        var_21 = (min(var_21, var_17));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            var_22 = (max(var_22, ((max((!193), ((!(!var_19))))))));
                            var_23 = (min(var_23, (((-(-1015582869 ^ 0))))));
                            var_24 = (min(((min((arr_17 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 1]), (max(var_3, -11947))))), var_7));
                            arr_19 [i_4] [i_4] [i_3] [0] [0] [4] [i_4] = (max((min(var_2, 63)), (arr_7 [22])));
                            var_25 = (max(var_25, 193));
                        }

                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            arr_22 [i_1] [i_1 - 1] [i_2 + 3] [i_1 - 1] [6] [i_4] [i_6 - 1] = -11947;
                            arr_23 [i_3] [i_4] [i_3] [14] [1] [22] [22] = min(9565, ((((-1385355627 ? var_13 : var_13)))));
                            var_26 = (min(var_26, var_8));
                        }
                        arr_24 [i_1 + 1] [1] [i_4] [i_1 + 1] = (min((!var_14), ((((((arr_4 [i_1 - 2] [i_2]) ^ 9552))) ? (arr_15 [i_1] [i_4] [i_4] [i_4 + 1] [i_2]) : (~var_4)))));
                        arr_25 [i_1 + 2] [i_4] [i_3] [i_4 - 1] [i_2 + 3] = (((arr_21 [8] [i_2 - 1] [i_2 + 3] [i_2 + 1]) ? var_5 : (arr_15 [i_4 + 1] [i_4] [i_2] [i_4] [i_1])));
                    }
                }
            }
        }
        var_27 = (min(var_27, (arr_13 [i_1] [3] [3] [i_1] [9] [i_1])));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_28 [i_7] [i_7] = (arr_5 [i_7]);
        var_28 = (min(var_28, ((max(((var_16 ? (arr_5 [6]) : (arr_5 [i_7]))), (min(var_7, (~var_18))))))));
        var_29 = ((-(-9553 == var_14)));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 7;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_41 [i_7] [i_7] [i_7] [i_7] [i_7] = (arr_34 [1] [i_7] [i_9] [i_10 + 1]);
                            var_30 = (min(((~(arr_0 [i_9]))), ((min(-34, -30596)))));
                            var_31 = (min(((min(63, var_13))), -9552));
                            var_32 ^= max((arr_32 [i_7] [i_7]), (arr_12 [i_7] [i_8] [i_8]));
                        }
                        var_33 = 63;
                    }
                }
            }
        }
        arr_42 [i_7] [i_7] = (min((min((arr_35 [i_7] [i_7] [i_7] [5] [5]), var_7)), 9553));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        var_34 = -9553;
        var_35 = var_4;
        var_36 = (max(var_36, 7));
    }
    var_37 = var_8;
    var_38 = var_7;
    #pragma endscop
}

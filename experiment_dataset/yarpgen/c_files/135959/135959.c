/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((~(((var_9 >= (arr_1 [i_0]))))));
        var_15 = (((((!(~var_0)))) <= (((arr_1 [i_0]) ? var_3 : 1))));
        var_16 = (max(1, ((1 ? var_7 : var_11))));
        var_17 = ((!(arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_18 = ((~((max(-91, (arr_1 [i_1 - 1]))))));
                        var_19 = ((~(((arr_6 [i_1 - 1] [i_1 - 1] [i_3 + 1]) << ((((min(63118, var_5))) - 63117))))));
                        var_20 = ((((min(var_4, var_9))) ? ((max((arr_6 [i_3 + 1] [i_1] [i_1 - 1]), (arr_6 [i_3 + 1] [i_1 - 1] [i_1 - 1])))) : ((var_0 ? 0 : (arr_6 [i_3 + 1] [i_1] [i_1 - 1])))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_21 = (min(var_2, -3581453467));
                        arr_15 [2] = ((!(((~(arr_6 [i_1 - 1] [i_1] [i_1 - 1]))))));
                        var_22 = ((((max((max(1, -64)), (arr_0 [i_1 - 1])))) ? 1 : -30720));
                        arr_16 [i_0] [i_0] [i_1 - 1] [i_2] [i_2] [i_4] = (((arr_6 [i_0] [i_1 - 1] [i_1]) % ((1125897759358976 ? -108 : 1692615373))));
                        var_23 = (-21412 && 209);
                    }

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_24 = var_10;
                        var_25 = ((((var_1 ? 1125897759358976 : 21411)) | var_10));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_26 = ((!((min(var_12, -9007061815787520)))));

                        for (int i_7 = 1; i_7 < 22;i_7 += 1)
                        {
                            arr_24 [i_0] [i_6] [13] = var_11;
                            arr_25 [i_0] [i_0] [i_2] [i_0] [i_2] [i_6] [i_7 + 1] = (arr_1 [i_0]);
                            arr_26 [i_7 - 1] [i_6] [i_6] [i_2] [1] [i_0] = ((+(((arr_12 [i_0] [i_7 - 1] [i_2] [i_1 - 1] [i_7 - 1] [21]) ? (arr_23 [i_0] [i_7 + 1] [i_2] [i_1 - 1]) : (arr_23 [i_0] [i_7 - 1] [i_2] [i_1 - 1])))));
                            arr_27 [17] [i_1 - 1] [i_7] = (~var_0);
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_27 = -105;
                            var_28 = ((var_4 ? (arr_12 [i_1 - 1] [22] [i_2] [i_6] [i_8] [i_6]) : (((((arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_6] [i_6]) <= var_4))))));
                            var_29 = (((((arr_13 [i_2] [i_2] [i_2] [i_1 - 1] [i_1 - 1]) ? var_1 : var_6)) == var_10));
                            var_30 = (((min(var_9, (arr_17 [i_0] [i_1 - 1] [i_1 - 1] [0])))) - var_6);
                            var_31 = 90;
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_35 [i_0] [i_1 - 1] [i_2] [i_6] [i_9] [i_9] = (var_10 - var_7);
                            arr_36 [22] [i_9] [i_2] [i_9] [i_0] = var_5;
                            arr_37 [i_0] [i_9] [i_2] [i_9] [i_9] = (arr_33 [i_9] [i_1 - 1] [i_1 - 1] [2] [i_1 - 1] [i_1 - 1] [i_9]);
                        }
                    }
                }
            }
        }
    }
    var_32 = var_4;
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            {
                arr_46 [i_10] [i_10] [i_11] = (((~(arr_40 [i_11]))));
                arr_47 [i_11] = (((arr_33 [i_11] [i_10] [i_11] [i_11] [i_11] [i_11] [4]) > (arr_29 [i_10] [i_10] [i_10] [i_11] [i_11])));
                var_33 = (!64545);
                var_34 = (var_13 | var_11);
                var_35 = ((((max(-13461, (1401767925 > 8070450532247928832)))) && 5384));
            }
        }
    }
    #pragma endscop
}

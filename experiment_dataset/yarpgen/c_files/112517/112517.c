/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = (max(var_18, var_7));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = ((var_11 == (+-957491943)));
        var_20 = (min(var_20, ((min(var_10, (max((min(957491934, (arr_1 [2]))), (arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = ((((max(var_5, (~var_2)))) ? (((arr_5 [i_0] [i_1]) ? (arr_2 [i_1]) : var_4)) : (!1)));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_22 = (arr_7 [i_2]);
                        var_23 = ((!(((1856243952 ? 115288519 : -864284092)))));
                        var_24 = ((-957491943 ? 1 : var_13));
                        var_25 ^= ((((!(arr_3 [i_0]))) ? (min((arr_0 [i_0]), (arr_0 [i_2]))) : var_3));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_26 = ((!(!var_11)));
                                var_27 |= -1433751800;
                                var_28 = (max(var_28, var_12));
                                var_29 = (1 ? 233 : 0);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_30 = (255 || 1);

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 10;i_9 += 1)
                {
                    {
                        var_31 = var_9;
                        var_32 = (arr_10 [i_6] [i_6] [i_6] [4]);
                        var_33 = var_2;
                        var_34 = (arr_5 [i_6] [i_9 - 4]);
                    }
                }
            }
            var_35 = (((arr_19 [i_6] [i_6] [i_7]) ? 280886700 : 128));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_36 &= (!-1734078238);
            var_37 = ((var_14 & (arr_28 [i_6] [i_6])));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_38 -= (0 < var_14);
            var_39 = (((arr_22 [i_11]) - (arr_22 [i_11])));
            var_40 = (max(var_40, ((var_14 ? (((arr_30 [0] [0] [0]) ? (arr_25 [i_6] [i_6] [8] [i_6] [i_11]) : var_11)) : var_6))));
            var_41 ^= ((var_13 % (var_2 || -280886714)));
        }
    }
    var_42 = (((((min(18, var_0)))) ? (var_14 | var_4) : var_1));
    var_43 = var_10;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = 0;
        var_20 = (min(var_20, (arr_2 [i_0] [4])));
        var_21 = var_7;
        arr_4 [i_0] = ((var_10 && ((!(arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_8 [i_1] = min((max(var_3, var_9)), (~var_15));
        arr_9 [i_1] [i_1] = (((((((arr_2 [i_1] [i_1]) >= var_11))) ^ (!var_14))));
        var_22 = 21078;
        var_23 = ((!(!-1598638983)));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_24 = ((max(var_9, (arr_12 [i_1] [i_1]))));
            var_25 = ((var_1 ? ((-(((!(arr_10 [i_2])))))) : var_0));
            var_26 = ((26465 ? -21081 : 8127312747935187191));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_19 [9] [i_1] [i_3] [i_1] = 3297734429;

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_27 = (32767 == 25646);
                            arr_22 [i_1] [i_1] [i_3] = var_9;
                            var_28 = (min(var_28, (arr_6 [4])));
                            var_29 = ((arr_5 [i_1]) ? -21092 : (((((var_13 ? var_13 : var_0))) ^ ((var_10 ? (arr_0 [i_1] [i_5]) : 18446744073709551615)))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                        {
                            var_30 = arr_15 [i_1] [i_1] [i_1];
                            var_31 = (min(var_31, ((((((arr_6 [0]) != var_14)) ? var_4 : var_3)))));
                            var_32 = (var_6 ? (((arr_20 [i_1] [i_1] [i_3] [i_4] [i_6] [i_6]) + var_2)) : (arr_17 [8] [i_3] [i_3] [i_4]));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_33 *= (max((arr_1 [i_1]), (!0)));
                            var_34 = var_3;
                            arr_29 [i_1] [i_2] [i_1] [i_4] [i_7] = (max(268173312, 1598638983));
                        }
                    }
                }
            }
        }
    }
    var_35 = (max(var_35, var_2));
    #pragma endscop
}

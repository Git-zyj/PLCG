/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = 621892190;
        var_17 = var_13;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_18 = (max(var_18, var_5));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_10 [6] [i_2] [i_1] = (min((min(602119404, 16794966648688843953)), (!1)));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_19 = var_13;
                        var_20 = ((((min(1623451771, var_8))) & (max(var_7, (0 >= 1)))));
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            var_21 = var_14;
            var_22 = ((var_2 ? (min(var_15, var_10)) : ((max(var_4, -602119404)))));
            var_23 = (max((65535 / var_15), (((!((min(111431383, var_3))))))));
            var_24 = ((~((((max(var_10, 61087))) | 8802464597922524091))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_25 = ((var_6 ? var_10 : var_0));
            var_26 = (max(var_26, (var_8 ^ var_2)));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
        {
            var_27 = (~var_11);
            var_28 = var_8;
            var_29 = 927463581;
        }
    }
    var_30 = (max(var_30, ((min((((((3106629681 ? var_10 : var_8)) < var_6))), (max((1 == 1159427643), 4294967295)))))));
    var_31 = -var_12;
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_32 = (min(var_7, var_8));
                                var_33 = (min((max(var_5, -937976255)), var_15));
                            }
                        }
                    }
                    var_34 = (min(94, -1159427628));
                }
            }
        }
    }
    #pragma endscop
}

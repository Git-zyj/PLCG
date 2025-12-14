/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_10 = 0;
        arr_2 [i_0] [i_0] = ((!((((86 & var_1) | (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_11 *= (min((min(((max(15294, -115))), ((var_5 ? (arr_6 [i_1]) : var_9)))), ((~((var_5 ? var_4 : var_8))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        var_12 = (((arr_5 [i_2]) > (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_13 = (arr_10 [i_2] [i_2]);
                        var_14 -= (max((((arr_11 [i_4 - 3] [i_4 - 1]) ? (arr_10 [i_3] [i_2]) : (arr_10 [i_3] [18]))), (((((-20 ? (arr_0 [i_1]) : var_2))) ? var_4 : (arr_14 [i_1] [8] [i_4 - 2] [i_4 - 2] [i_4])))));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_15 = (min(var_15, (arr_10 [i_1] [i_2])));
                            var_16 = ((((((var_0 ? 1475183932 : (arr_13 [i_3] [20] [i_4]))))) ? 7420022520412022370 : ((max(((~(arr_9 [i_4] [i_3] [i_2]))), (((14336 ? 14340 : var_5))))))));
                            var_17 = ((arr_14 [i_1] [i_2] [i_3] [i_2] [i_5]) ? ((~(((-127 - 1) - (arr_16 [i_1] [i_2] [i_3] [i_5]))))) : var_4);
                        }
                    }
                }
            }
        }
        var_18 = ((50 ? (min((~var_4), ((max(var_5, (arr_6 [16])))))) : ((((min((arr_0 [i_1]), var_0))) ? var_3 : var_9))));
        var_19 = (((min(var_0, ((min(var_2, var_4))))) & ((((arr_8 [i_1] [i_1]) ? 1143612757 : (arr_8 [i_1] [i_1]))))));

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_20 -= ((((min((arr_10 [i_1] [i_1]), (arr_11 [i_6] [i_1])))) ? (arr_17 [i_1] [i_6] [i_6] [i_6]) : ((-(arr_17 [i_1] [i_6] [i_6] [i_1])))));

            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_21 = (max(var_21, 0));
                var_22 = (min((max((min(16380, -2674545213938509085)), 56670)), (min(var_7, var_1))));
            }
            /* vectorizable */
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                var_23 = (arr_17 [i_6] [i_8 - 2] [4] [i_8 - 1]);
                var_24 = arr_24 [i_1] [i_8];

                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                    {
                        var_25 += (arr_18 [i_10] [i_10] [i_9] [i_9] [15] [i_6] [i_1]);
                        arr_33 [i_6] [i_6] [i_1] = 619804905;
                        var_26 = ((arr_27 [i_8 - 2] [i_6] [i_6]) ? (arr_17 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_10]) : var_3);
                        var_27 = -1609076774;
                        arr_34 [i_1] [i_6] [i_8] [i_9] [i_10] = (((var_4 - -830450450) ? 12409493423057365415 : ((var_5 ? var_9 : var_6))));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_1] [i_6] [i_6] [i_1] [i_1] = (arr_19 [i_9]);
                        var_28 = var_7;
                        var_29 = -4796;
                        var_30 = (((arr_35 [i_6]) ? var_6 : (arr_35 [i_1])));
                    }
                    var_31 = (arr_0 [i_8 - 1]);
                }

                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_32 = ((-1193246270 ? (~var_4) : -5));
                    var_33 = var_9;
                    var_34 *= (!var_5);
                    arr_42 [i_1] [i_1] [i_6] [i_12] [i_8 + 1] [i_12] = 3637525160;
                }
                var_35 = 4366;
            }
            for (int i_13 = 3; i_13 < 20;i_13 += 1)
            {
                var_36 ^= (((~986) && ((max((((arr_18 [i_6] [i_6] [3] [i_6] [i_1] [i_1] [i_6]) << (((arr_6 [i_6]) + 23045)))), (max(-87464634, 175)))))));
                var_37 = ((max(((12805761192319552086 ? 0 : (arr_18 [i_1] [i_1] [i_1] [i_6] [i_6] [i_1] [i_13]))), var_6)));
            }
            var_38 = 2674545213938509084;

            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                var_39 = (arr_27 [i_1] [16] [i_14]);
                arr_50 [i_14] [i_6] [i_1] = (min(((min(14323, 198934950))), (min(7, 19))));
            }
        }
    }
    var_40 = (max(((((min(1193246279, var_2))) ? (~var_7) : var_2)), ((max((var_5 < var_3), var_8)))));
    #pragma endscop
}

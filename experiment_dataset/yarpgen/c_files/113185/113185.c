/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_14 -= (--18339);
                    arr_8 [15] [i_1] [i_1] [i_1] = 13682970563171578779;
                    arr_9 [i_0] [i_0] |= (min(-var_11, (min(-7469942902511487558, 13682970563171578779))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((19 == (-7469942902511487558 ^ 28067)));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_0] = (min((var_13 * -34), var_1));
                        arr_14 [i_0] [i_1] [i_0] [10] = (min((min(233, var_10)), 4763773510537972837));
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_15 += ((min((arr_5 [i_0] [i_2] [i_2 + 2]), -var_11)));
                        var_16 = var_2;
                        var_17 -= (max(((-(var_10 + 122))), 14705141065460488056));
                        var_18 = (arr_5 [i_0] [i_1] [i_2]);
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_5] [16] = ((arr_6 [i_1]) ? (min(var_11, (max(var_6, var_10)))) : (((min(27, var_5)))));
                        var_19 = 45409;

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            arr_23 [12] [10] [i_2 - 1] [10] [i_6] = (max(var_1, 18337));
                            var_20 = 2256483990464302481;
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_21 = 1;
                            var_22 = (arr_5 [i_0] [i_0] [i_2]);
                            var_23 = (min(var_23, -102));
                        }
                    }
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        var_24 += ((((((((arr_6 [i_0]) ? var_10 : var_4))) ? (~20452) : var_10)) ^ ((((var_2 < (7469942902511487571 / var_13)))))));
                        var_25 = ((((max(-84, 6262714269274252020))) ? (arr_5 [i_2 - 1] [i_1] [i_2 - 1]) : (arr_5 [i_0] [i_0] [i_8 + 1])));
                        arr_30 [i_8] [i_8] [i_2] [4] [i_1] [21] = (((var_3 + 2147483647) >> (!18321)));
                    }
                }
            }
        }
        arr_31 [i_0] = ((((min((arr_25 [i_0] [i_0] [i_0] [3] [i_0]), var_3))) >= var_11));
        var_26 = (((((((var_6 ? var_11 : 18378055687690497290)) + var_13))) ? (((max(var_3, (arr_20 [i_0] [i_0]))) - ((-20683 ? 7469942902511487571 : var_3)))) : 48));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            arr_37 [i_9] = ((-var_7 + (!var_10)));
            arr_38 [i_9] [i_9] [i_9] = -49;
        }
        var_27 = var_4;
        var_28 = -27884;
        var_29 -= ((((+(((arr_36 [i_9]) + (arr_24 [20] [i_9])))))) ? (min((max(var_7, (arr_5 [i_9] [3] [14]))), (arr_24 [i_9] [i_9]))) : (((-(arr_20 [i_9] [i_9])))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 18;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 20;i_13 += 1)
                {
                    {
                        arr_45 [4] [i_13] [i_12] [i_11] [i_13] [i_9] = var_11;

                        for (int i_14 = 2; i_14 < 20;i_14 += 1)
                        {
                            arr_49 [i_14] [i_13] [i_12] [i_13] [i_13] [i_9] = (((4763773510537972837 ? (min(13682970563171578779, (arr_25 [i_9] [i_11] [i_12 + 4] [i_13] [i_14])) : 85))));
                            var_30 ^= max((((((max(var_7, 5421))) >> (179 - 174)))), ((~(min(var_8, -4577415792044829119)))));
                        }
                    }
                }
            }
        }
    }
    var_31 = (~var_1);
    var_32 = var_8;
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 1; i_17 < 11;i_17 += 1)
            {
                {
                    var_33 &= ((-((~(((arr_16 [i_16]) ? (arr_7 [14] [i_16] [i_16]) : var_12))))));
                    var_34 = var_6;
                    arr_56 [10] [i_15] [6] [i_17] = (~-var_2);
                    var_35 = (min(var_35, ((((-16255 ? 0 : 575796139232306029))))));
                }
            }
        }
    }
    #pragma endscop
}

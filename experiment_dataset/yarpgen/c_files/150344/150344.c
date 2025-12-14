/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4563;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 -= var_8;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] [6] = (~1);
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_18 = (min(var_18, (17609060306287094881 * 17)));
                        arr_12 [1] [1] [i_1] [9] = (((arr_8 [1] [i_2 + 4]) - 0));
                        var_19 = (max(var_19, (((2112785448 ? (~15282) : ((17665627004506964075 ? -15292 : 254)))))));
                        var_20 = -7936;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_17 [i_0] [i_0] [4] [9] = (min(9058199822546048004, (arr_3 [i_0] [i_4] [i_5])));
                var_21 = 0;
                var_22 = (arr_10 [i_0] [i_0]);
                var_23 = (max(var_23, var_8));
            }
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_22 [2] = (arr_9 [i_4] [6] [i_6 - 1]);
                        var_24 = var_13;
                    }
                }
            }
            var_25 = ((15263 ? 1295220626 : 0));
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            arr_25 [4] [4] = (~-1);
            var_26 = (((((arr_15 [i_8]) ? 5888986009987374663 : 1)) > 7936));
            arr_26 [i_8] [5] = var_1;
        }
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_27 = (min(33696, -15292));
        var_28 += -38;
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        arr_35 [i_10] = ((((-849919178537056972 ? ((-1502807595 ? var_11 : 1)) : -616422149438530760)) * -5661415016528427893));
        arr_36 [i_10] [i_10] = var_9;
        var_29 = (87 | 7967538081367791504);
        arr_37 [i_10] = (1 ? 1 : -1);
        var_30 = (max(var_30, ((max((((!(((-616422149438530750 ? 1295220627 : -67)))))), -9282)))));
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                {
                    var_31 = var_4;
                    var_32 = (!-1640474025);
                    arr_44 [16] [1] [i_13] = var_11;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            {
                var_33 = (((min(-2, var_0))));

                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    var_34 = (~var_8);
                    arr_53 [i_14] [4] [1] = (101 - -716);
                    /* LoopNest 2 */
                    for (int i_17 = 1; i_17 < 18;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            {
                                arr_60 [19] [19] [0] [13] [i_18] = ((1295220626 ? 244 : 3944762388));
                                var_35 = var_9;
                                var_36 = -15283;
                                var_37 = (255 - 7049593100277553248);
                            }
                        }
                    }
                    var_38 = (-15282 / -1241684864596190561);
                }
            }
        }
    }
    #pragma endscop
}

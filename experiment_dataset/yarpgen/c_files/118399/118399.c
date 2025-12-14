/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (!var_13)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_15 = (max(var_15, var_0));
        arr_3 [i_0] [i_0] = ((((var_5 ? var_0 : 27113630)) >> (((~var_9) + 31210))));
        var_16 = (min(var_16, (((0 != (var_10 >= var_0))))));
        var_17 = ((((-(var_9 / var_0))) > ((-((2038865861 ? var_0 : -472444696))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (max(var_18, (~var_0)));
        var_19 = (max(var_19, (!-3515)));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    {
                        var_20 = ((2147483644 ? ((1 ? (((3514 ? var_5 : var_9))) : 18446744073709551615)) : (3508 & var_10)));
                        arr_16 [i_2] [i_4] [i_4] [i_2] = (((4294967295 != var_10) || (((3514 ? (var_8 ^ 1) : (var_8 ^ 1))))));
                        var_21 = (min(var_21, (--8455)));
                        arr_17 [i_2] [i_4] [i_2] [i_2] = (((!var_10) != (!0)));
                        var_22 = var_6;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                {
                    var_23 = ((((var_9 != (1 && var_10)))) != var_0);

                    for (int i_8 = 4; i_8 < 8;i_8 += 1)
                    {
                        var_24 = -8451;
                        arr_24 [i_2] [i_6 - 2] [i_2] [i_7] = (1344777282714228587 - var_12);
                    }
                    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_25 = ((947619172 ? 2750079845142609718 : ((((!(0 & var_8)))))));
                        var_26 = (((8 < var_6) && (((var_3 ? var_0 : var_5)))));
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                    {
                        var_27 = -8449;
                        var_28 = (!2292324688);
                        var_29 = ((var_8 ? var_0 : var_1));
                        var_30 = (min(var_30, ((((!var_11) / 1)))));
                    }
                    arr_33 [i_2] [i_6] [i_7] = (((((-102 + 2147483647) >> (var_5 - 4022))) | ((((var_5 ^ 482712186) != (!0))))));
                }
            }
        }
    }
    #pragma endscop
}

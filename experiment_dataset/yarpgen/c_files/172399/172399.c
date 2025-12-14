/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max(var_2, 1187161044))) ? ((max(var_0, var_8))) : (((var_10 ? 9263994741671420176 : var_12)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_16 = ((var_9 ? (max(var_11, ((var_11 ? (arr_5 [1] [i_2]) : var_14)))) : var_8));
                        arr_9 [i_2] [i_1] [i_1] [15] [14] [14] = (min(var_2, (max(var_5, (arr_5 [i_0] [6])))));
                        arr_10 [i_0] [i_0] [i_2] [i_1] = (max(((121 ? var_6 : var_10)), var_10));
                    }
                }
            }
            arr_11 [i_0] &= (((var_7 != var_14) == ((var_5 ? (arr_0 [i_1]) : 107))));

            /* vectorizable */
            for (int i_4 = 3; i_4 < 17;i_4 += 1)
            {
                arr_14 [i_0] = -1088565596;
                arr_15 [i_0] [i_1] [9] = ((4950279623775809574 ? (arr_3 [i_4 + 1]) : var_4));
            }
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_0] [i_5 + 1] = ((min(-122, 6408361238369132315)));
            arr_19 [i_5] [i_5] [i_5] = (((((1 ? var_1 : (arr_17 [i_0])))) ? var_0 : ((((max(var_6, 1796022472))) ? 104 : var_8))));
            arr_20 [8] [i_5] = (((((3265532505 ? var_3 : -994835500827255905))) ? ((-121 ? -3234 : (arr_16 [i_5 + 1]))) : (1 == 7531301573490462329)));
            var_17 = (min(var_17, var_5));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                var_18 *= (52 - 0);
                var_19 = (min(var_19, ((((~1) ? (~var_12) : var_13)))));
                var_20 = (var_1 > var_4);
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_32 [i_6] [i_6 + 1] [i_6] [i_8 - 3] [i_9] = var_13;
                            var_21 = (max(var_21, (arr_12 [i_0] [i_6] [i_6] [i_0])));
                        }
                    }
                }
                arr_33 [i_6] [16] [1] = (7531301573490462323 != var_13);
            }
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_22 = (min(var_22, var_1));
                            var_23 = (40497 * 2778866912);
                        }
                    }
                }
                arr_40 [i_0] [i_6] [i_6] [i_10] = (((var_12 & var_7) ? var_1 : var_12));
            }
            var_24 &= (arr_27 [1] [i_6] [i_0] [i_6]);
        }
        var_25 |= var_3;
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_26 = (min(var_26, var_4));
        arr_45 [i_13] = (3734240222873573485 || -104);
        var_27 = var_12;
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
    {
        arr_49 [i_14] = (((arr_48 [i_14] [i_14]) ? (arr_43 [24]) : var_0));
        arr_50 [i_14] = (((~var_10) == (arr_48 [i_14] [i_14])));
    }
    #pragma endscop
}

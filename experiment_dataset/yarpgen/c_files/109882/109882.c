/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 26200;
    var_11 = var_8;
    var_12 = (max((!-155), (~-102)));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = (1 / 127);
                    var_14 = ((((var_3 != 126) ? var_3 : (((min(1, 21)))))) != (min((-9223372036854775807 - 1), (129 | 1))));
                    var_15 = var_5;
                    var_16 = ((((((!((max(var_1, 25733))))))) * var_0));
                }
            }
        }
        arr_8 [i_0 + 1] = (max(-4294967295, (max(23, 16915744088071915980))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_13 [4] = ((((max(100, (var_7 / 1)))) / (max((-2289516128938052194 | 1), (~13)))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
            {
                arr_18 [i_3] [i_4] [8] = 97;
                arr_19 [i_3] [i_4] [i_4] [i_5] = (((~9223372036854775780) + 23));
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
            {
                arr_23 [i_6] [13] [i_6] = ((!(137 * 70)));
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        {
                            arr_29 [i_3] [i_4] [i_6] [i_6] [i_7] = (max(((-(!1))), 1));
                            var_17 = (((((10045 << (120 - 103)))) || 10045));
                            var_18 = ((var_3 / (~199)));
                            arr_30 [0] [7] [15] [8] [i_7] = (((((max(174, var_6)) ? ((var_3 ? 185 : 138)) : (var_8 % -26538)))));
                        }
                    }
                }
                arr_31 [9] [0] [16] = ((-((var_3 ? (((max(1, 127)))) : 255))));
                var_19 = var_5;
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 3; i_10 < 17;i_10 += 1)
                {
                    arr_37 [i_3] [i_4] [i_10] [i_4] [i_10] = (127 == 1);
                    arr_38 [i_10 + 2] [i_10] [i_10] [i_3] = (!2363549003628404395);
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    arr_42 [i_3] [i_4] [i_9] [i_3] [i_3] [i_3] = -6153916963727936880;
                    arr_43 [i_3] [i_3] [14] [i_11] = (2341970225718901975 / 116);
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 17;i_13 += 1)
                    {
                        {
                            arr_48 [7] [7] [7] [i_4] [i_4] [7] [10] = (((64586 | var_7) >> (6249227621155028734 - 6249227621155028730)));
                            arr_49 [i_3] [7] [i_9] [i_12] [7] = (~-16);
                            arr_50 [10] [10] [i_9] [i_12] [i_13 - 1] = 598340517;
                            arr_51 [5] [5] [5] [i_12] [i_13] = 4172591403;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 18;i_15 += 1)
                    {
                        {
                            var_20 = -64582;
                            var_21 = (!29);
                        }
                    }
                }
            }
            var_22 = ((28672 != ((((!(-127 - 1))) ? 236 : var_2))));
            arr_58 [i_4] = (((max(119, 129))));
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            arr_63 [i_16] [16] [i_3] = (-5010164013006318395 || 1);
            var_23 = ((((max(255, 60606))) ? (1 <= 2945666808) : (((8 < 3732840941) / -2453753505266725987))));
        }
        var_24 = 598340517;
    }
    #pragma endscop
}

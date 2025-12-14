/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_13 -= 0;
                            var_14 = -var_10;
                            arr_12 [i_1 + 1] [i_1] [i_1] [i_1] = ((((((((arr_8 [i_0 - 3] [4]) + 2147483647)) << (((arr_1 [i_3 - 1]) - 31))))) ? (arr_3 [i_0 - 3] [i_4]) : (~var_4)));
                            arr_13 [i_3] [i_1 + 1] [i_0 - 2] = (((((1691958269180168329 ? var_7 : 0))) ? (arr_8 [i_1 + 1] [i_0]) : (arr_10 [i_2 + 2] [i_1 + 1] [1] [9] [0] [i_0 - 1] [i_2 + 2])));
                        }
                    }
                }
            }
            var_15 += (arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]);
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_16 [i_0 - 1] [i_0 - 1] = 4153243329866309637;
            var_16 &= (0 ? (max((arr_7 [i_0 - 3] [i_0 - 3] [i_0 + 1] [i_0 - 3]), (arr_8 [i_0 - 3] [i_0 - 3]))) : var_12);
            var_17 = (max((max((min(var_10, (arr_14 [4] [4]))), (min(-1, var_10)))), 1048575));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_18 |= (((((arr_8 [i_7] [5]) + 2147483647)) << (var_6 - 7494442684881305408)));
                        var_19 ^= (((-(~var_8))));
                        var_20 = (min((min((arr_18 [i_0 + 1] [i_5 - 1] [i_0 + 1]), (arr_18 [i_0 - 3] [i_5 + 1] [i_6]))), ((var_6 ? (arr_18 [i_0 + 1] [i_5 - 1] [i_5 - 1]) : (arr_18 [i_0 - 2] [i_5 + 1] [i_0 - 2])))));
                        arr_22 [i_7] [i_6 - 2] [i_0 - 3] [i_0 - 3] = (max(7947294323540481085, 207));
                        arr_23 [i_0 - 2] [i_5 - 1] [i_6 - 1] [i_5] = (-1 ? var_2 : 1);
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_21 -= (arr_3 [i_5 + 1] [i_0 - 2]);
                arr_28 [13] = (~(arr_9 [i_0 - 3] [i_5 - 1] [i_0 - 3] [9] [i_5 - 1]));
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                var_22 ^= (arr_10 [i_0] [2] [2] [i_5 - 1] [i_5 - 1] [i_9] [i_9]);
                var_23 -= min((min((min(8, var_6)), ((max(-90, 0))))), ((-(max(-15, (arr_10 [i_0] [15] [i_5 + 1] [i_5] [i_5] [i_9] [i_5 + 1]))))));
                arr_33 [4] [i_5] = var_0;
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        {
                            var_24 = (min(((max(-1, -1568744359236764436))), (min((arr_34 [i_5 + 1] [i_5 + 1] [i_0 + 1] [i_10 - 2]), (arr_19 [i_5 + 1] [i_11] [i_0 + 1] [i_10 - 2])))));
                            arr_40 [i_11] [i_11] [i_11] = (+(min((arr_9 [i_0 + 1] [i_5 - 1] [11] [i_10 + 2] [i_10 + 3]), var_1)));
                            arr_41 [i_11] [i_10] [11] [i_9] [i_5 - 1] [i_0] = (min(((((~var_3) ? (!1) : -0))), (max((max(var_9, var_7)), (arr_24 [i_5 - 1] [i_0 - 2])))));
                            arr_42 [i_0 - 1] = var_7;
                            var_25 = (max(0, ((((((var_9 ? var_9 : var_3))) ? (arr_25 [i_10 - 2] [i_5 - 1] [i_5 - 1] [i_0 - 3]) : ((((arr_30 [i_5]) == var_1))))))));
                        }
                    }
                }
                var_26 *= (min((max((arr_7 [3] [1] [i_9] [i_5 + 1]), (arr_7 [i_0 - 2] [i_9] [i_9] [i_5 + 1]))), (max(var_6, var_3))));
            }
            for (int i_12 = 1; i_12 < 17;i_12 += 1)
            {
                var_27 ^= max((max(var_5, (min(4, 5344528597067167396)))), var_7);
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 18;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {
                        {
                            arr_54 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_13] [i_0 - 1] [i_5 - 1] [i_5 - 1] = var_4;
                            arr_55 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 2] [16] = (max(2, (min((((~(arr_4 [i_0 - 2])))), (max(var_11, var_3))))));
                            arr_56 [i_0] [i_5 + 1] [1] [i_13] [14] &= (var_9 != 25327);
                        }
                    }
                }
            }
        }
        for (int i_15 = 2; i_15 < 15;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 17;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 17;i_17 += 1)
                {
                    {
                        var_28 = min(-37, -4909621641424185957);
                        var_29 = arr_53 [i_0] [i_15 + 1] [i_15 + 1];
                        var_30 = (-(arr_14 [i_17] [i_17]));
                        var_31 = var_10;
                    }
                }
            }
            var_32 = 1203184960811013202;
        }
        var_33 = (min(var_33, ((((min(7875810251042907607, 32750))) ? (arr_30 [i_0]) : (((max(24, var_8))))))));
        arr_67 [i_0 + 1] [i_0 + 1] = max((!var_12), (((arr_45 [i_0 - 1] [i_0 + 1] [2] [i_0]) ? (arr_45 [i_0 + 1] [8] [i_0 + 1] [2]) : (arr_45 [i_0 - 2] [i_0 - 2] [i_0] [5]))));
    }
    var_34 = ((min(var_2, var_8)));
    #pragma endscop
}

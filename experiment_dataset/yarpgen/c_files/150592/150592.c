/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-34770392 ? ((max((64158 || var_4), var_7))) : (var_0 | var_8)));
    var_12 = (min(var_12, ((((((var_0 < (max(var_3, -1808184778))))) + (var_9 || var_6))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (max(var_13, ((max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [8]))))));
        var_14 = (min(var_10, (((4155 <= (((arr_0 [i_0] [i_0]) ? var_3 : (arr_1 [i_0] [i_0]))))))));
        var_15 &= min(-118, (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = 14;
        arr_3 [i_0] [i_0] &= ((((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? var_10 : (-1808184778 >= var_5)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1 - 1] [i_1] = ((1355398547 ? (arr_5 [i_1 - 1]) : 15052));

        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            var_16 = 3002502075;

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_1 + 2] [i_1] = ((var_10 ? var_1 : ((2777331616 ? 15 : (arr_5 [i_1])))));
                var_17 = 1627452111;
                arr_13 [i_1] = 118;
            }
            for (int i_4 = 4; i_4 < 20;i_4 += 1) /* same iter space */
            {
                var_18 = (((15760 ? 227 : 47565)));

                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_19 = 216;
                    arr_19 [i_1] [i_1] [i_4 - 1] [i_5] [i_1] = ((2147483643 % (arr_10 [i_2 - 1] [i_1] [i_2])));
                }
                for (int i_6 = 1; i_6 < 21;i_6 += 1)
                {

                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        var_20 = (((((-58 ? var_9 : 231))) ? (arr_8 [i_1] [i_2] [i_1]) : (arr_24 [i_1 + 2] [i_1] [i_1 + 2] [i_1] [i_1])));
                        arr_26 [i_1] [i_2] [i_4] [i_1] [i_6 + 1] [i_4] [i_7] = 47565;
                        arr_27 [i_1] [i_1] [i_2] [i_6] [i_2] = ((((8191 & (-2147483647 - 1))) < (((arr_4 [i_1]) ? var_2 : var_5))));
                        arr_28 [i_1] [i_7] = (var_8 / 1);
                        var_21 = ((((arr_14 [i_1] [i_1 + 2] [i_1]) != (arr_11 [i_4] [i_6] [4]))));
                    }
                    var_22 += 18446744073709551596;
                }
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    var_23 = ((231 ? -1118097409804690847 : var_6));
                    arr_31 [i_1] [i_1] [i_1] = (-2147483647 - 1);
                }
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    var_24 = (arr_15 [i_1] [i_1 - 1] [i_9 - 1] [i_9]);
                    var_25 += var_7;
                    arr_35 [i_2 + 1] [i_1] [i_4] [i_2 + 1] [i_1] [i_1] = (var_9 && var_10);
                    var_26 = var_9;
                }
                var_27 = (max(var_27, (arr_8 [i_2] [i_1] [i_2 - 1])));
                var_28 = (arr_14 [i_2 + 1] [i_2] [i_2]);
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_29 = (max(var_29, 1930997438));
                            var_30 ^= (((((var_9 ? (arr_5 [i_11]) : var_3))) ? ((((arr_33 [i_1 + 2] [i_4 - 4] [i_4] [i_4 - 2]) != -37))) : (arr_22 [i_2] [i_2] [i_2] [i_11] [i_2 - 2])));
                            var_31 = (((arr_20 [i_4 - 4] [i_10] [i_1] [i_4 - 4]) ? 8191 : (arr_40 [i_4 - 3] [i_10] [i_1])));
                            arr_43 [i_1] = (((arr_11 [i_1 + 1] [i_2 + 1] [i_4 - 2]) || (arr_11 [i_1 - 1] [i_2 + 1] [i_4 - 4])));
                        }
                    }
                }
            }
            for (int i_12 = 4; i_12 < 20;i_12 += 1) /* same iter space */
            {
                arr_46 [i_1] [i_2] [i_2] = 2777331589;
                arr_47 [i_1 - 1] [i_2] |= -1;
                var_32 = -25;
                arr_48 [i_1] [i_1] [i_1 + 2] = var_6;
            }

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_33 &= (arr_5 [i_1]);
                var_34 = (min(var_34, 0));
            }
            arr_51 [i_1] [i_1] [i_1] = (arr_15 [i_1] [i_1] [i_2 - 2] [i_2]);
        }
        arr_52 [14] &= ((var_3 ? 2777331610 : (arr_32 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1])));

        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_35 = (217 | 3);
            arr_56 [i_1] [i_1] = 2777331620;
            var_36 = 221;
        }
        var_37 &= ((var_10 > (arr_22 [i_1] [i_1 + 2] [i_1 + 2] [0] [i_1 + 2])));
    }
    #pragma endscop
}

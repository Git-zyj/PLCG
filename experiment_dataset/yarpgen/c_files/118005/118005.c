/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0 + 1] = ((-var_13 ? var_14 : ((~(arr_2 [i_0])))));
        var_18 = (min(var_18, (((1683437215 || ((!(arr_0 [i_0 - 3]))))))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_19 = (min(var_19, var_5));
            arr_8 [i_0] [10] = (arr_6 [i_0] [9]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {
                        var_20 *= (arr_7 [7] [7] [i_2]);
                        var_21 *= (((-2147483647 - 1) + 2147483647));
                        var_22 = arr_12 [i_1] [10];
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_23 = (~-2147483647);
                            var_24 = (max(var_24, ((((arr_19 [9] [i_1 - 2] [i_1] [i_1 + 1] [i_1]) >> (((((arr_1 [i_5]) * var_8)) - 2287110033109613514)))))));
                            var_25 = ((!(2147483647 >= var_1)));
                        }
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_26 = var_4;

            for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 9;i_10 += 1)
                    {
                        {
                            var_27 &= ((!(arr_30 [i_8] [i_8] [0] [i_10] [i_10])));
                            var_28 = ((-(!var_15)));
                        }
                    }
                }
                var_29 = (min(var_29, -3303463801057997904));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_30 = (((arr_2 [i_0 - 4]) != (arr_2 [i_0 - 2])));
                            var_31 = (((arr_27 [i_8 + 2] [i_8 + 3] [i_8 + 3] [i_8 - 1] [i_8 + 2]) ? var_17 : 2147483644));
                            var_32 = ((-(arr_9 [i_0 - 4])));
                        }
                    }
                }
            }
            for (int i_13 = 1; i_13 < 9;i_13 += 1) /* same iter space */
            {
                arr_41 [6] [i_7] [i_7] [i_7 + 1] = -3303463801057997893;
                var_33 = var_5;
            }
            arr_42 [i_7] = ((2147483646 ? (!var_15) : ((-57 ? var_15 : var_0))));
            var_34 = (arr_25 [i_7] [i_7] [i_7 - 2] [i_7 - 2]);
        }
        for (int i_14 = 2; i_14 < 11;i_14 += 1) /* same iter space */
        {
            var_35 = (min(var_35, (~var_17)));
            var_36 = (arr_18 [i_0 - 4] [i_0 - 4] [i_14 - 1] [i_14 - 2] [i_14]);
            var_37 = ((16545 ? -85 : 20393));
        }
        var_38 *= (!var_6);
    }
    for (int i_15 = 4; i_15 < 11;i_15 += 1) /* same iter space */
    {
        arr_51 [i_15 + 1] [i_15] = var_6;
        var_39 = ((72057594029539328 ? 2147483647 : 1));
        var_40 = (max(var_40, ((min(((((((!(arr_48 [i_15 + 1])))) * var_7))), ((((0 ? 16585914598711481852 : -1634373825)) >> ((((var_8 * (arr_40 [i_15] [i_15] [i_15]))) - 3595)))))))));
        var_41 = (min(var_41, ((max(((1 - (((var_8 + 2147483647) >> (3394712653 - 3394712643))))), -127)))));
    }
    /* vectorizable */
    for (int i_16 = 4; i_16 < 11;i_16 += 1) /* same iter space */
    {
        var_42 = -725447431;
        var_43 = 127;
        var_44 = ((~(arr_2 [i_16 - 1])));
    }
    for (int i_17 = 4; i_17 < 11;i_17 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 10;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {
                        var_45 ^= ((((-((var_3 ? (arr_50 [i_17] [i_17]) : var_6))))) ? (min((((arr_13 [9] [i_18] [i_19 + 2] [i_20]) ? var_0 : var_2)), 2118794917)) : ((((var_4 ? var_2 : -3303463801057997904)))));
                        var_46 = (min((((2147483647 && ((min(var_17, (arr_9 [i_19 + 1]))))))), (max(108, (((-32767 - 1) ? 14250599369039161914 : -72057594029539323))))));
                    }
                }
            }
        }
        var_47 = var_10;
        arr_65 [i_17] = ((-var_0 ? ((((arr_34 [i_17 + 1] [i_17 + 1] [i_17]) ? 2147483636 : var_5))) : (max(0, 6159491414228167659))));
    }
    /* LoopNest 2 */
    for (int i_21 = 0; i_21 < 25;i_21 += 1)
    {
        for (int i_22 = 0; i_22 < 25;i_22 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_23 = 1; i_23 < 24;i_23 += 1)
                {
                    for (int i_24 = 4; i_24 < 22;i_24 += 1)
                    {
                        for (int i_25 = 1; i_25 < 1;i_25 += 1)
                        {
                            {
                                var_48 = var_7;
                                arr_79 [1] [i_21] [i_21] [i_23 + 1] [i_24 + 1] [i_22] [22] = ((~(max(47, 2147483644))));
                                var_49 = (max(var_49, 34357));
                            }
                        }
                    }
                }
                arr_80 [i_21] [i_22] = (((max(-29, var_10)) * (arr_68 [i_21])));
                var_50 = (536870911 ? 2165702436 : 536870911);
            }
        }
    }
    #pragma endscop
}

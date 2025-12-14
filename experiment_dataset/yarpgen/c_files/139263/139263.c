/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (((32759 == (~var_0))));
                                var_16 = ((0 & var_0) - (max(-var_12, 1)));
                            }
                        }
                    }
                    arr_11 [7] = var_8;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_17 = (((~-1829274358) == var_1));
                        arr_21 [2] [2] [2] [i_5] = 21121;
                        arr_22 [i_5] [9] [1] = var_4;
                        var_18 = min((min((min(var_13, var_5)), -32760)), var_12);
                    }
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_19 = (max((((32730 - 2032) ? (((-32767 - 1) - 536870908)) : (var_14 < var_0))), ((min(((536870908 ? 1 : -32762)), ((min(var_2, 1))))))));
        arr_26 [i_8] = (min((min((arr_18 [i_8] [i_8] [2]), 496)), (~7)));
    }
    var_20 |= (min((max((min(var_5, 4294967266)), (var_5 ^ -210531853))), -32756));
    var_21 = (((-1 + 2147483647) << (((min((151421192 - 536870893), var_5)) - 16114))));
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    var_22 = ((0 ? (((min(var_0, (var_10 > 9699))))) : -5939369551844110068));
                    var_23 = (min(var_23, 1));

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        arr_38 [i_10] [i_10] [i_10] [i_10] [i_9] = var_14;
                        arr_39 [7] [i_9] [11] [i_9] [i_9] [i_9] = 35184363700224;
                        var_24 = (min(var_24, ((var_4 | (arr_37 [10] [10] [i_10 - 1] [10] [10])))));
                        arr_40 [i_9] [i_9] [i_9] [i_9] [13] [1] = (((arr_34 [i_10 - 1] [i_10 - 1] [i_10 - 1]) != var_4));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                    {
                        var_25 = (min((--1), var_10));
                        arr_44 [i_9] [i_9] [1] [i_9] = var_6;
                        var_26 = (max(var_26, (((112 % (max(((min(var_6, var_11))), (max((arr_34 [i_9] [i_9] [i_9]), 4828169185613402596)))))))));
                        var_27 = (((((((((((arr_35 [5]) + 2147483647)) << (5939369551844110068 - 5939369551844110068)))) ? 29902 : (((1 ? (arr_37 [i_9] [i_9] [i_9] [i_9] [i_9]) : 3602939749)))))) ? var_5 : (min((((arr_33 [i_9] [i_9] [14]) % var_1)), var_8))));
                        arr_45 [i_9] [13] [7] = ((((min(var_11, var_9))) - ((((min(var_1, var_13))) ? 1585154168891713730 : (var_13 < var_9)))));
                    }
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        var_28 = ((var_2 >> (((((arr_32 [8] [7] [i_9]) ? 2147483616 : var_8)) - 2147483595))));
                        arr_49 [6] &= ((arr_47 [i_9] [i_10 - 1] [i_11] [i_10 - 1]) == var_10);

                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            var_29 = (var_4 > var_5);
                            var_30 = (((((274877775872 ? 57077 : 22343))) ? -11101 : (~16861589904817837886)));
                        }
                        for (int i_16 = 0; i_16 < 19;i_16 += 1)
                        {
                            var_31 = (min(var_31, ((((var_11 != (arr_46 [i_9])))))));
                            var_32 &= var_11;
                            var_33 = var_13;
                            var_34 = (!(!536870886));
                            var_35 = (max(var_35, 151421213));
                        }
                        var_36 = (((((-(arr_42 [17] [17])))) <= (((arr_41 [i_9] [18] [12] [i_9] [i_9]) * var_0))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        var_37 = (~var_7);
                        var_38 = var_13;
                    }
                }
            }
        }
    }
    var_39 = var_7;
    #pragma endscop
}

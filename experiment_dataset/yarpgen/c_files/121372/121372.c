/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_1, (max(var_9, ((var_6 ? -361606318 : var_1))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0] [i_0]) ? ((((max(534773760, -1))) ? (~var_14) : -534773761)) : ((((arr_1 [i_0] [i_0]) ? var_12 : var_9)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_17 = var_6;
                arr_10 [i_0] [i_0] [i_0] = var_14;
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_18 = -1991286518;
                            var_19 += (!-175903662);
                        }
                    }
                }

                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_20 |= ((!var_4) ? 534773760 : var_3);

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_21 = (min(var_21, 199714197));
                        var_22 = 107854657;
                        var_23 = (max(var_23, (arr_9 [i_0] [i_3] [i_7])));
                        arr_23 [i_7] [i_0] [i_0] [i_1] [i_0] = arr_3 [i_0] [i_0] [i_3];
                        var_24 = ((-2120148959 ? -107854658 : var_11));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_25 = var_10;
                        var_26 = -534773761;
                        var_27 = (max(var_27, 175903662));
                    }
                    var_28 = (var_9 ? (!var_6) : 1);
                }
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    var_29 = 1991286518;
                    var_30 = arr_8 [i_0] [i_9 + 2] [i_9];
                    var_31 = 2120148981;
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    var_32 = var_13;
                    arr_31 [i_0] [i_1] [1] [i_10] [i_1] [i_1] = ((arr_29 [i_0] [i_1] [i_3] [i_10]) ? (arr_29 [i_0] [i_0] [i_3] [i_3]) : (arr_29 [i_0] [4] [i_3] [i_3]));
                    var_33 = -534773761;
                    var_34 = var_13;
                    var_35 = (!576369686);
                }
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
            {
                arr_34 [i_11] [i_0] = (!(arr_15 [i_1] [i_1] [i_1] [i_1] [i_0]));
                var_36 = ((1 ? 1991286508 : ((-(arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] = ((!((max((arr_0 [i_0]), (arr_0 [i_0]))))));
                            arr_41 [i_0] [i_1] [i_0] [i_11] [i_12] [i_12] [i_13] = (max(var_2, (arr_21 [i_1] [i_11] [i_0])));
                            arr_42 [i_0] = ((var_12 ? var_10 : (arr_28 [i_0] [2] [i_0] [i_0])));
                        }
                    }
                }
            }
            for (int i_14 = 0; i_14 < 21;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        {
                            arr_51 [i_0] [i_1] [i_1] [i_14] [i_14] [i_0] [i_16] = min((~-2120148959), (min(1, (min(var_1, (arr_28 [i_0] [i_0] [i_0] [i_15]))))));
                            arr_52 [i_0] [i_1] [i_0] [5] = ((~(((arr_36 [i_15] [i_0] [i_14] [i_15]) ? var_11 : var_13))));
                            arr_53 [i_0] = 1991286533;
                        }
                    }
                }
                arr_54 [i_0] = (((arr_7 [i_0] [i_1] [i_14] [i_14]) / (arr_19 [i_0] [i_0] [16] [i_0] [i_0] [0])));
                arr_55 [i_0] [i_0] [i_0] = var_11;
                var_37 *= (max(-2120148959, (((arr_14 [i_0]) ? 459631169 : -534773761))));
            }
            var_38 = ((min(576369686, (arr_0 [i_0]))));
            var_39 = arr_44 [i_0] [i_0] [i_0];
        }
    }
    var_40 = (~0);
    var_41 = (((!(((var_13 ? 0 : -134570395))))) ? var_2 : var_0);
    #pragma endscop
}

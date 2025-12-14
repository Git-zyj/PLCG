/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_12;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 ^= ((7 ? (249 / -1390073000) : 117));
                    var_22 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_23 ^= (min(((((1 - 118) < 6))), ((-1308221728 | (arr_7 [i_4 - 2] [i_3 + 1])))));
                                var_24 = (min(var_24, ((((((var_14 == (max((arr_7 [6] [i_3]), var_19))))) ^ (max(1629915738, 1)))))));
                                var_25 ^= (max(25391, 3081));
                            }
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_26 ^= (~-1308221714);
            var_27 ^= ((((var_19 > var_10) ? ((var_0 ? (arr_2 [i_0]) : (arr_16 [i_0] [i_5]))) : var_17)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_28 ^= ((((((var_4 ? var_16 : var_10)) > var_4)) ? (((238 < var_10) | ((85 ? var_15 : var_6)))) : var_6));
                        var_29 = (min(var_29, ((min((~var_17), var_15)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    {
                        var_30 += (max(((var_17 ? (arr_3 [i_8 + 2] [i_8 + 3]) : (arr_6 [i_0] [i_9]))), var_14));
                        var_31 ^= ((-22 ? -18668 : -4396));
                        var_32 ^= (max(((max(30027, 1040187392))), (~var_18)));
                    }
                }
            }
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            var_33 |= (var_9 == (((-var_10 < (max(var_5, (arr_3 [16] [i_10])))))));
            var_34 ^= var_9;

            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_35 = (max(var_35, ((((((var_15 ? var_16 : 171)) ^ (arr_1 [i_10])))))));
                            var_36 += (max((min((max(-18668, -1036383785)), 4071359479)), (((arr_28 [i_10 - 1] [i_10] [i_10] [i_12]) ? (arr_28 [i_10 - 1] [i_10] [i_12] [0]) : (arr_28 [i_10 - 1] [2] [i_11] [i_10 - 1])))));
                            var_37 += ((-7519597998973992498 ? (arr_38 [i_10 - 1] [i_10 - 1] [i_10] [i_0]) : var_9));
                        }
                    }
                }
                var_38 += -3227085347;
                var_39 ^= ((1 ? ((0 ? 1 : 291005023)) : (((~((max((arr_39 [i_11] [i_11] [i_11] [i_11] [i_10] [i_0]), 1))))))));
            }
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                var_40 += (min((((!(arr_16 [i_10 - 1] [i_10 - 1])))), ((((max(1, (arr_38 [i_0] [i_0] [i_0] [i_0])))) | (~0)))));
                var_41 = (min(var_41, (-32767 - 1)));
                var_42 |= 0;
                var_43 ^= (1036383785 <= 1);
                var_44 ^= ((-47460 - ((var_4 << (((~var_11) + 5))))));
            }
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                var_45 += (arr_43 [i_0] [i_15]);
                var_46 = (max(var_46, (((~((-((max(var_0, 0))))))))));
                var_47 ^= (((max(var_2, (arr_10 [i_15] [i_10 - 1] [i_10]))) ? var_17 : (min(-var_1, (max(var_0, var_18))))));

                /* vectorizable */
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    var_48 += 1007270543;
                    var_49 *= ((arr_39 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]) ? 2134033465 : var_12);
                }
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                var_50 = (max(var_50, (1162238084 | 7112)));

                /* vectorizable */
                for (int i_18 = 1; i_18 < 22;i_18 += 1)
                {
                    var_51 += (!1422086719);
                    var_52 ^= ((-18668 ? 4233809517 : (arr_27 [i_10 - 1] [i_18 - 1] [i_18 + 2] [i_18 + 2])));
                    var_53 = (max(var_53, -7112));

                    for (int i_19 = 1; i_19 < 1;i_19 += 1)
                    {
                        var_54 = (min(var_54, (!var_13)));
                        arr_59 [22] [i_18] [i_17] [i_10] [0] |= ((1 << (var_17 - 2904741561436515035)));
                        var_55 *= ((var_17 * (((var_12 ? 1 : var_2)))));
                    }
                    for (int i_20 = 0; i_20 < 25;i_20 += 1)
                    {
                        var_56 ^= 3818052326;
                        var_57 += ((var_8 << (((arr_28 [i_0] [i_0] [i_0] [i_0]) - 743063567))));
                        var_58 += (arr_17 [i_0] [i_0] [i_17] [i_18 + 3]);
                    }
                    var_59 ^= ((4102005451 << (3818052333 - 3818052320)));
                }
                var_60 ^= 17;
            }
            var_61 = (max(var_61, var_12));
        }
    }
    #pragma endscop
}

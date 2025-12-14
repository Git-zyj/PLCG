/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_10 ? var_12 : var_1)) - ((max(var_9, var_0))))));
    var_16 = ((var_2 != (((var_0 || var_7) + (!var_12)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = var_13;
        var_18 = (max(var_18, (((((((var_5 == var_4) ? (!var_12) : (!29)))) ? ((max(36, 233))) : ((var_9 ? -var_6 : (var_5 > var_14))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [1] [i_1] [16] = ((var_9 ? (var_8 && var_5) : ((var_1 ? var_4 : var_7))));

            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                arr_10 [i_1] = -224;
                var_19 = (((408853876 ? 3886113419 : 10488207495987433127)));
                arr_11 [i_2] [i_1] [i_0] = (((var_14 * var_14) % ((var_5 ? var_3 : var_7))));
            }
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_20 = var_12;
                            arr_19 [i_1] [10] [i_1] [0] [0] [6] [12] = var_1;
                        }
                    }
                }
                var_21 = ((var_9 ? ((var_7 ? var_2 : var_2)) : (408853871 && 4294967295)));
            }
            arr_20 [i_1] = (((~var_10) && (!var_12)));
            var_22 *= ((var_10 != ((var_9 ? var_1 : var_10))));
        }
        for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_23 ^= ((4 ? ((((var_4 - var_11) ? (((min(42, 224)))) : ((12 ? 224 : 4294967295))))) : ((var_1 ? (max(var_3, var_11)) : (var_9 + var_12)))));
            var_24 = (-13295 <= ((44398 ? ((1069656515 ? 216 : 12)) : 1)));
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            var_25 = var_10;
                            var_26 = (max(90, 1));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    {
                        var_27 = (((max(var_9, var_2))));
                        arr_37 [i_0] [i_10] [i_10] [i_11] = (((~224) == var_3));
                        arr_38 [i_10] [1] = (min(((-(var_0 - var_7))), var_6));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_28 = ((var_12 ? var_6 : var_1));
                            var_29 = var_14;
                            var_30 = (min(var_30, ((((((var_8 ? var_2 : var_6))) ? (var_0 / var_8) : (var_14 > var_7))))));
                            var_31 = (max(var_31, (!var_14)));
                            arr_41 [i_0] [i_6] [i_10] [15] [3] = ((var_7 ? var_12 : (var_8 - var_13)));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 2; i_13 < 17;i_13 += 1) /* same iter space */
        {
            arr_44 [7] [11] [5] = ((var_10 ? var_12 : var_10));
            var_32 = ((229523774 ? 75 : 0));
        }
        for (int i_14 = 2; i_14 < 17;i_14 += 1) /* same iter space */
        {
            var_33 = ((((((max(0, 32767))) ? (var_2 / var_5) : var_0)) / (max((243 / 227), -21545))));
            var_34 = (((((~((var_10 ? var_11 : var_4))))) ? var_10 : (min(var_9, (min(var_7, var_4))))));
            arr_48 [i_0] [i_14] = ((((((((3586911948082309306 ? 1949202001 : 1))) != (min(8, -13311))))) & (((((var_9 ? var_0 : var_1))) ? (var_4 && var_9) : ((var_11 ? var_13 : var_10))))));
        }
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 17;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 16;i_16 += 1)
            {
                {
                    var_35 = (((((-2038136004 ? -76 : 224))) ? ((min(var_2, var_2))) : (var_3 % var_14)));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 18;i_18 += 1)
                        {
                            {
                                var_36 = ((4294967290 ? 33488 : -2601));
                                arr_59 [i_0] [0] [i_15] [8] = (min((((29241 ? 48 : 4294967295))), (max(((var_5 ? var_14 : var_8)), ((min(var_13, var_2)))))));
                            }
                        }
                    }
                    var_37 = (((var_10 && var_4) ? var_3 : ((-(var_3 != var_1)))));
                }
            }
        }

        for (int i_19 = 3; i_19 < 15;i_19 += 1)
        {
            var_38 = ((!((!((min(376032266, var_13)))))));
            var_39 = ((((var_10 ? var_3 : var_4)) - -var_14));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
        {
            var_40 *= (!var_5);
            arr_65 [i_0] [i_20] = (((!var_6) ? var_12 : (-2147483647 - 1)));
            var_41 = (((var_2 ? var_7 : var_9)));
            /* LoopNest 2 */
            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 18;i_22 += 1)
                {
                    {
                        var_42 = (min(var_42, ((((var_2 ? var_3 : var_0))))));
                        var_43 &= ((-var_10 ? var_2 : ((var_2 ? var_2 : var_13))));
                        var_44 = ((((var_3 ? var_8 : var_3)) != (!62)));
                    }
                }
            }
        }
        for (int i_23 = 0; i_23 < 18;i_23 += 1) /* same iter space */
        {
            var_45 = ((var_3 ? ((4194303 ? 4294967277 : 224)) : (((((var_10 ? var_6 : var_1)) ^ ((min(var_6, var_4))))))));
            var_46 = var_12;
            var_47 += (max((((!((max(var_2, var_11)))))), ((var_14 ? (var_12 >= var_9) : (~var_12)))));
            var_48 = (max(var_7, -var_14));
        }
    }
    var_49 = (max((max(-3055, 1148333191)), (var_2 && var_5)));
    #pragma endscop
}

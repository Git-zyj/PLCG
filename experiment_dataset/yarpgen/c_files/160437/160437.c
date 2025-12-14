/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160437
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (240 || 255);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_16 = (((31 ? 84 : var_10)) >= ((var_10 << (((arr_2 [i_0]) - 76)))));
        var_17 = (min(var_17, var_3));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, ((((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 1]) : (arr_4 [i_0 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, -32080));
                                var_20 = (min(var_20, (((var_9 - (!1))))));
                                arr_15 [i_4] [i_2] [i_3] [1] [8] [i_2] [8] = ((-32080 ? (arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0]) : (arr_8 [15] [i_3] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1) /* same iter space */
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
        {
            arr_22 [12] [12] [i_5] = 84;
            arr_23 [i_5] [i_6] = var_4;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
        {
            var_21 = (min(var_21, ((((arr_8 [9] [17] [i_7] [i_7]) ? (arr_21 [i_5]) : ((var_0 ? 100 : (arr_25 [i_5] [i_7] [i_7]))))))));
            arr_27 [i_7] [i_5 + 2] = 13;
            var_22 = (((((3286370832 / (arr_9 [i_5] [i_5] [10] [10] [i_5])))) ? (!32) : var_1));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_23 *= 1749100601;
            arr_30 [i_8] [i_8] [i_8] = (((((3221982828 ? ((~(arr_25 [i_5] [i_8] [i_8]))) : 0))) ? ((-var_14 ? -var_14 : var_7)) : ((var_4 >> (255 - 250)))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_33 [i_5 + 1] [i_5] [i_5] = 1;
            arr_34 [i_5] = var_7;
        }

        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        arr_42 [i_11] = var_1;
                        arr_43 [i_5] [i_5] [i_11] [i_11] = (-2147483647 - 1);
                        arr_44 [i_10] [3] [i_11] [3] = ((873313856 >> ((((min(208, 176))) - 159))));
                        arr_45 [i_5] [i_5] [i_11] [23] = (((~(arr_25 [i_10 + 1] [i_5 - 1] [i_5]))));
                    }
                }
            }

            /* vectorizable */
            for (int i_13 = 2; i_13 < 23;i_13 += 1)
            {
                var_24 = (!(arr_31 [i_13 + 1]));
                var_25 *= arr_47 [i_5] [i_5] [i_5];
            }
            var_26 = (min(var_26, (0 % -19439)));
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 1;i_17 += 1)
                    {
                        {
                            arr_58 [i_15] [i_15] = ((~((((((min((arr_29 [0] [i_14]), (arr_2 [i_5 + 1]))))) == (arr_57 [i_15] [i_16] [i_5 - 2] [i_5 - 2] [i_15]))))));
                            arr_59 [i_5] [i_5] [i_15] [12] [i_5] [i_5] [1] = (!((!(((281474976694272 ? 0 : 822096940))))));
                            var_27 = (min(var_27, (((-var_11 + (((arr_8 [i_5] [i_5] [i_14] [i_5]) ? (arr_38 [i_5 + 2] [i_5 + 1]) : -19241)))))));
                        }
                    }
                }
            }
            var_28 = (max(var_28, ((((((((!153) <= ((min(0, 4))))))) * (~var_3))))));
            var_29 = (min(var_29, (((!((((arr_51 [i_5] [i_14]) >> (255 - 252)))))))));
            var_30 = (((((1008596464 ? 24315 : 0))) ? (arr_8 [7] [i_5] [i_14] [i_5 + 1]) : ((((arr_8 [i_5] [13] [i_5 - 2] [i_5 + 1]) | (arr_8 [i_5] [i_5] [i_5] [i_5 + 1]))))));

            /* vectorizable */
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                var_31 = var_4;
                arr_62 [i_14] [i_14] [i_5] = (arr_57 [2] [2] [i_5 - 1] [i_5 + 2] [i_14]);
                var_32 = (max(var_32, 1008596466));
            }
        }
        arr_63 [14] [14] = ((1 ? (((((min((arr_19 [i_5]), (arr_36 [i_5] [i_5])))) ? (!var_1) : (((!(arr_46 [i_5 - 2] [i_5] [i_5]))))))) : (min((arr_57 [i_5] [i_5] [i_5] [20] [i_5]), (arr_17 [1])))));
    }
    for (int i_19 = 2; i_19 < 22;i_19 += 1) /* same iter space */
    {
        arr_68 [i_19] = ((69 ? 0 : 5987184346297259091));
        var_33 = 1386452248;
        arr_69 [i_19] = (((((4238 ^ 0) & (max(822096923, -48)))) ^ (~var_12)));
    }
    #pragma endscop
}

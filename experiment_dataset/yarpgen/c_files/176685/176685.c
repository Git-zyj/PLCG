/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min(((min((max(var_2, -32741)), (!var_11)))), (min((~var_7), var_1))));
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_15 = (arr_1 [i_1]);

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_7 [i_2] [i_2] [i_2] = 38065;
                arr_8 [i_2] [i_2] [i_2] [i_2] = (var_4 * var_7);
                var_16 |= (!var_3);
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                var_17 ^= (((arr_12 [i_3] [i_1] [i_3]) - (arr_12 [i_0] [i_1] [i_3])));
                var_18 ^= (((var_9 + var_2) >= var_2));
            }
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                var_19 -= (((arr_5 [i_0] [i_1] [i_1] [i_1]) ? (arr_5 [i_0] [i_1] [i_4 + 2] [i_1]) : 24));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_21 [i_4] [i_5] [i_5] [i_4] [i_5] [i_0] = (27487 ^ 1);
                            arr_22 [i_0] [i_0] [i_5] [i_0] [i_0] [i_0] = (((((arr_20 [i_5] [i_0] [i_0] [i_0]) >= var_11))) != (((arr_9 [i_4] [i_1] [i_0]) ^ var_4)));
                            var_20 *= (arr_14 [i_4 + 2] [i_4 + 2] [i_4 - 1]);
                        }
                    }
                }
            }
            arr_23 [i_1] [i_1] &= var_12;

            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                arr_26 [i_1] [i_1] [i_7] = (arr_5 [i_0] [i_7] [i_7] [i_7]);

                for (int i_8 = 1; i_8 < 7;i_8 += 1)
                {
                    var_21 = 40;
                    var_22 = (max(var_22, ((((((1 ? var_11 : (arr_17 [i_0] [i_7] [i_0] [i_0])))) ? 38 : ((218 ? var_4 : -1)))))));
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    arr_31 [i_0] [i_0] [i_0] [i_9] [i_7] [i_9] = (7899535754319176843 + 81);
                    arr_32 [i_0] [i_1] [i_7] [i_1] [i_9] = 2;
                    arr_33 [i_7] = 37;
                    var_23 = 3;
                    arr_34 [i_1] = (arr_5 [i_0] [i_7] [i_7] [i_7]);
                }
                arr_35 [i_0] [i_0] [i_0] [i_7] = 215;
                arr_36 [i_0] [i_1] [i_7] = ((18446744073692774400 ? (arr_30 [i_7 - 2] [i_7 + 2] [i_7 - 1] [i_7 - 1]) : var_11));
            }
        }
        arr_37 [i_0] = ((+((min(727568484, ((((arr_14 [i_0] [i_0] [i_0]) || 1959612544))))))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 9;i_11 += 1)
            {
                {
                    var_24 = ((~(1 || var_4)));

                    for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                    {
                        arr_46 [i_0] [i_0] [i_12] = (min(((16 == (((62 == (arr_18 [i_0] [i_0] [i_10] [i_10] [i_12])))))), var_7));
                        var_25 = -1;
                        var_26 = (!((((min(var_10, var_9))) || ((max(var_2, var_11))))));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        arr_50 [i_10] [i_10] [i_13] [i_13] &= (var_6 * ((min((!900974571), var_0))));
                        var_27 ^= (arr_0 [i_11]);
                    }
                    var_28 = ((!(((16777215 ? (arr_45 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11] [i_11 - 1]) : var_5)))));

                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_29 ^= var_9;
                        var_30 ^= (!(((var_9 ? (arr_28 [i_0] [i_11 + 2] [i_11 + 2] [i_11 + 2]) : (arr_28 [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 2])))));
                        arr_54 [i_14] [i_11] [i_10] [i_0] = (max((arr_18 [i_0] [i_0] [i_10] [i_14] [i_10]), ((8184 ? 18446744073709551615 : 197))));
                        arr_55 [i_10] [i_10] [i_10] [i_10] = ((~((((min(var_11, 8307851322063439647)) >= ((((59527 != (arr_49 [i_10] [i_14] [i_11] [i_11] [i_10]))))))))));
                    }
                    for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                    {
                        var_31 = (!(~0));
                        arr_58 [i_0] [i_0] [i_10] [i_10] [i_11] [i_15] = ((var_3 ? 30360 : (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    arr_59 [i_10] = var_2;
                }
            }
        }
    }

    for (int i_16 = 0; i_16 < 10;i_16 += 1)
    {
        var_32 ^= (arr_18 [i_16] [i_16] [i_16] [i_16] [i_16]);
        /* LoopNest 3 */
        for (int i_17 = 1; i_17 < 7;i_17 += 1)
        {
            for (int i_18 = 3; i_18 < 7;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 7;i_19 += 1)
                {
                    {
                        arr_68 [i_19] = 11820;

                        for (int i_20 = 0; i_20 < 1;i_20 += 1)
                        {
                            arr_71 [i_16] [i_20] [i_20] [i_19] [i_19] [i_20] = ((-(((24509 && (arr_39 [i_16] [i_16] [i_16]))))));
                            arr_72 [i_19] [i_18] [i_18] [i_19] [i_20] = ((!((((arr_56 [i_20] [i_20] [i_20] [i_19]) ? ((~(arr_42 [i_18]))) : 8587145360721135274)))));
                            var_33 ^= arr_0 [i_16];
                        }
                        arr_73 [i_18] [i_18] = (arr_5 [i_16] [4] [i_18] [i_19]);
                        arr_74 [i_18] = 2071;
                    }
                }
            }
        }
        var_34 = ((-((-(((arr_51 [i_16] [i_16] [i_16] [i_16] [i_16]) + (arr_28 [i_16] [i_16] [i_16] [i_16])))))));
        arr_75 [i_16] &= (min(var_12, (arr_61 [i_16] [i_16])));
    }
    #pragma endscop
}

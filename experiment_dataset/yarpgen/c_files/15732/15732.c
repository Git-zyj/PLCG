/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (var_12 * var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0]);

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_9 [i_0] [i_0] = ((50 + (arr_7 [i_0] [i_1 + 1] [i_0])));
            arr_10 [i_0] = (arr_0 [i_1 - 2] [i_1 - 1]);
        }
        var_15 &= ((-1 ? (6379291750901668269 << var_3) : var_7));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_16 = ((((((max(255, 255))))) <= (min(((max(-989609863, 15))), (arr_5 [i_2])))));

        for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_17 += (arr_11 [i_2 - 1] [i_3 + 1]);
            arr_15 [i_2] [i_2] = (((-113 ? 12067452322807883346 : 105)) % (arr_8 [i_3] [i_3 - 1]));
            var_18 = (max(var_18, -3275360248381224734));

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                var_19 = (min(var_19, (((!((!(arr_17 [i_2 - 1] [7] [i_4]))))))));

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_20 = (((!var_13) ? (max(var_3, (arr_2 [i_2] [i_2]))) : ((((arr_17 [i_2] [i_2] [i_2]) % var_4)))));
                        arr_24 [i_5] [i_3] [14] [i_3] [i_6] |= ((max((arr_6 [i_2 - 1] [i_3 + 1]), (arr_6 [i_2 - 1] [i_3 + 1]))));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_29 [i_2] = (((((0 - (arr_1 [i_2])))) ? 48894 : 1));
                        arr_30 [i_2] [i_2] [i_4] [i_2] [i_5] [i_4] = (((max(((max(105, (arr_23 [10] [i_3 - 2] [0] [i_5] [7])))), var_4)) << (-1 + 13)));
                    }
                    var_21 = (((var_2 < 6379291750901668270) && ((max(-1, 0)))));
                    var_22 = (max(var_22, (((0 * ((-(arr_13 [i_2] [i_4] [i_3 + 1]))))))));
                    var_23 = 16;
                }

                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_24 = ((+(((arr_5 [i_2]) ? (arr_5 [i_2]) : (arr_5 [i_2])))));
                    var_25 = (((-((15 >> (2147483647 - 2147483646))))));
                    var_26 = (min((~var_3), (arr_28 [i_8] [15] [i_3] [i_3] [15])));
                    var_27 = 1;
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_28 = var_0;
                    arr_37 [i_2] [i_3] [i_4] [i_2] [i_9] = ((!(arr_1 [i_2])));
                    arr_38 [7] [14] [i_4] [i_2] = ((~(arr_7 [i_2 + 1] [i_3 + 1] [i_2])));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                {
                    var_29 = ((0 | (989609862 >= 0)));

                    for (int i_11 = 0; i_11 < 16;i_11 += 1)
                    {
                        arr_44 [i_2] [i_2] [i_2] [13] [i_2] [i_2] = (var_13 / 1008806316530991104);
                        var_30 = var_0;
                        var_31 = ((var_9 && (arr_12 [i_2])));
                        var_32 = (arr_35 [i_2] [i_3 + 1] [i_4] [i_10] [i_11] [i_4]);
                    }
                    var_33 = ((0 % (arr_12 [i_2])));
                    arr_45 [i_2] [i_3] [i_4] [i_10] = var_9;
                    var_34 = ((82 || (~var_8)));
                }
            }
        }
        for (int i_12 = 2; i_12 < 15;i_12 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_35 = ((!(arr_33 [i_2])));
                            var_36 = ((34 ? 232 : 1));
                            var_37 -= (max((arr_8 [i_14] [i_2]), var_6));
                        }
                    }
                }
            }
            arr_55 [i_2] [i_2] = arr_35 [9] [i_12] [6] [i_12] [1] [9];
        }

        for (int i_16 = 1; i_16 < 14;i_16 += 1) /* same iter space */
        {
            var_38 ^= 0;
            arr_58 [i_2] [i_2] = var_2;
        }
        /* vectorizable */
        for (int i_17 = 1; i_17 < 14;i_17 += 1) /* same iter space */
        {
            arr_61 [i_2] = -788171532;
            arr_62 [i_2] [i_2] = var_10;
        }
        var_39 += var_1;
        var_40 = 0;
    }
    for (int i_18 = 0; i_18 < 0;i_18 += 1)
    {
        arr_65 [10] = var_2;
        var_41 = (max(var_41, (((((((arr_1 [4]) ? 3 : (arr_1 [16])))) ? var_1 : (((46759 ? 0 : (arr_1 [6])))))))));

        /* vectorizable */
        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            arr_68 [i_18] [i_18] [i_18] = (((arr_8 [i_18 + 1] [i_18 + 1]) > (arr_8 [i_18 + 1] [i_18 + 1])));
            var_42 = 4294967295;
            arr_69 [i_18] [i_19] = (arr_67 [i_18]);
            var_43 = 1;
        }
    }
    var_44 += var_3;
    #pragma endscop
}

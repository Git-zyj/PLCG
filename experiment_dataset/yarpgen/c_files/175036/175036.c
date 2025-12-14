/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_17 = (max(var_17, (((var_8 ^ (((((var_6 + 9223372036854775807) >> (arr_3 [i_0] [i_0]))) >> (!1301639873))))))));
            var_18 = var_11;
        }
        for (int i_2 = 2; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2 - 1] [i_2 - 1] = (((arr_1 [i_2]) << (((((arr_5 [1]) >> (((arr_1 [i_0]) - 41757)))) - 7553))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_16 [i_0] [i_3] [i_3] [i_4] [i_5] = (((((1301639873 ^ (((min((arr_3 [i_0] [i_2 - 2]), (arr_9 [i_3])))))))) != (((arr_10 [1]) ? (((-(arr_1 [i_2])))) : (var_6 / var_13)))));
                            var_19 += 1301639893;
                        }
                    }
                }
            }
            var_20 &= ((((min((arr_11 [i_2] [i_2 - 1] [i_0] [i_0]), ((min((arr_15 [i_0] [i_0] [i_0] [i_2] [16] [16] [i_2]), 1301639873)))))) ? (~-6288011150773358109) : ((28 % ((max((arr_9 [4]), -4593888421399717548)))))));
        }
        arr_17 [17] = 1301639873;
        arr_18 [i_0] = 6288011150773358109;
        arr_19 [i_0] [i_0] = (arr_1 [i_0]);
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_22 [i_6] = (!var_12);
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_21 = (max(var_21, (!var_15)));
                    var_22 = var_6;
                }
            }
        }
        var_23 = (max(var_23, var_5));
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        arr_31 [i_9] = ((((min((arr_5 [i_9]), (arr_5 [i_9])))) ? ((max((arr_14 [i_9] [i_9] [i_9]), var_9))) : var_12));

        /* vectorizable */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            arr_36 [i_10] [i_9] [i_9] = ((((671 ? (arr_1 [i_9]) : (arr_6 [i_10] [i_10] [i_10])))) ? (arr_14 [i_9] [i_10] [i_10]) : ((var_3 & (arr_35 [i_9] [i_9] [i_10]))));

            for (int i_11 = 2; i_11 < 17;i_11 += 1)
            {
                arr_40 [4] [4] [i_10] [i_11] = ((!(arr_15 [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11] [i_11 - 2])));
                var_24 = ((var_2 - (arr_34 [i_11 - 2])));
            }
            arr_41 [i_9] [i_9] = (arr_10 [i_9]);
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            arr_45 [i_12] [i_12] [i_12] = ((var_3 + (((var_13 ? (max((arr_3 [i_9] [i_9]), (arr_13 [i_12] [7]))) : (((min(var_0, -682)))))))));
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            arr_54 [i_9] [i_9] [7] [i_12] [7] = ((((min(((max(var_9, var_1))), var_15))) ? var_1 : ((((max(-6288011150773358100, 102))) ? ((var_16 ? 4593888421399717536 : var_3)) : (arr_11 [i_9] [i_12] [i_13 + 2] [i_12])))));
                            arr_55 [i_9] [i_12] [i_13] [i_12] [0] = ((~((-(arr_10 [i_14])))));
                            arr_56 [i_9] [i_14] [i_12] = arr_8 [i_12] [i_12] [i_15];
                            var_25 = (max(((max(var_1, (arr_11 [i_9] [i_9] [i_9] [i_9])))), (max((min(var_15, var_5)), (~var_3)))));
                        }
                    }
                }
            }
            var_26 -= ((~(((-6288011150773358096 | -1135960159) ^ (max(var_9, var_3))))));
        }
        for (int i_16 = 2; i_16 < 17;i_16 += 1)
        {
            var_27 = var_16;
            var_28 = var_10;
            var_29 = (max(var_29, var_8));
            var_30 ^= var_5;
            arr_59 [i_9] [i_9] [i_16] = var_12;
        }
    }
    #pragma endscop
}

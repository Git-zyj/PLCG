/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [3] = ((-(~var_4)));
        var_20 = (min(var_20, (((((((arr_1 [i_0]) >> (((arr_0 [2]) - 10091))))) || (((var_7 + (((var_3 >= (arr_0 [2]))))))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, (((max((arr_0 [i_2]), var_0))))));
                        var_22 -= ((((~(arr_9 [i_0 - 3] [i_0] [i_0]))) <= ((((((arr_6 [i_1] [i_1] [i_2]) + 2147483647)) >> (((arr_7 [i_3 + 1] [i_2] [i_2] [i_0 - 3]) - 6909329940609259957)))))));
                    }
                }
            }
        }
        var_23 = (min((((~(arr_3 [i_0])))), (var_13 & var_6)));
        var_24 = ((-14 ? ((-(-85 / 21619))) : ((max(1008, 16168)))));
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 11;i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] = -1;

        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            arr_16 [i_4] [11] = (~var_15);
            arr_17 [i_4] [i_5] = (((arr_9 [i_4 - 3] [i_4 - 2] [i_4 - 2]) ? (arr_9 [i_4 - 3] [i_4 - 2] [i_4 - 2]) : var_2));
            arr_18 [i_4] [i_4] [i_5] = var_10;
        }
        for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_25 [4] [i_4] [i_7] = ((+((((arr_14 [i_4] [i_4]) != (arr_11 [i_4]))))));
                var_25 = (+((var_10 ? (arr_3 [i_7]) : -54)));
                arr_26 [i_4] [i_6] [i_4] = arr_8 [i_4] [i_4] [7] [i_6] [i_7] [i_7];

                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_4 + 1] [11] [i_7] [i_4] = ((~(arr_0 [i_4])));
                    arr_30 [i_7] [i_7] [i_4] [i_4] [i_4] [i_4] = var_17;
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    arr_34 [i_4] [i_6] [i_6] [i_6] [i_6] [i_6] = var_11;
                    var_26 = (max(var_26, var_8));
                }
            }
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                arr_37 [i_4] [i_6] [i_4] = (((arr_15 [i_4 - 2]) ? (arr_14 [i_4 + 1] [i_4]) : (arr_14 [i_4] [i_4])));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_45 [i_4] = var_4;
                            var_27 ^= (((arr_36 [i_4 - 2] [i_12 + 1] [i_12]) ? (arr_20 [i_11 + 1] [i_12 + 2]) : (arr_20 [i_11 - 1] [i_12 - 1])));
                            var_28 -= ((var_4 ? (((-1060329215 ? 22205 : 1))) : (arr_9 [i_12 - 1] [i_11 + 2] [i_4 - 2])));
                            arr_46 [i_4] [i_6] [i_6] [i_6] [i_4] = -1;
                        }
                    }
                }
                arr_47 [i_10] [i_4] [i_4] [i_4] = (((!(-32767 - 1))));
            }
            var_29 = (((((arr_8 [i_4] [i_6] [i_4] [i_6] [i_4 - 1] [i_4]) && (arr_3 [i_4]))) || ((var_8 && (arr_19 [i_4] [i_4])))));
            arr_48 [i_4] = var_8;
            var_30 = ((-(arr_42 [i_6] [i_6] [8] [i_6] [3] [i_6] [i_4 + 1])));
        }
        var_31 |= (-9223372036854775807 - 1);

        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_51 [i_4] [6] &= (((arr_27 [i_4 - 2] [i_4 - 3] [i_13] [i_13]) < (arr_35 [10] [i_4 - 3])));
            var_32 = ((+(((arr_39 [i_4] [i_4]) + (arr_6 [i_4] [8] [i_13])))));
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 9;i_14 += 1)
            {
                for (int i_15 = 3; i_15 < 10;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        {
                            arr_59 [i_16] [i_4] [i_14] = (i_4 % 2 == 0) ? ((((arr_7 [i_14 + 1] [i_4] [i_4] [i_4 - 1]) >> (52 >> 25)))) : ((((((arr_7 [i_14 + 1] [i_4] [i_4] [i_4 - 1]) + 9223372036854775807)) >> (52 >> 25))));
                            var_33 -= -213321252852066514;
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            var_34 = ((8987866677400053148 < (arr_61 [i_4] [i_17] [i_17])));
            var_35 = (((arr_22 [i_4 - 3] [i_4 - 3] [i_4 - 1]) <= var_15));
        }
    }
    var_36 ^= var_4;
    var_37 = (((((805306368 | (((min(var_12, 32755))))))) ? 90 : (5848 <= 8681)));
    #pragma endscop
}

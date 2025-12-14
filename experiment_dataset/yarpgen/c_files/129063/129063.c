/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_17 = 7029332167498046410;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_18 = (min((((arr_5 [i_1] [i_1]) | (arr_5 [i_1] [i_1]))), (arr_5 [i_1] [i_1])));
        var_19 = var_2;
        var_20 = (min(var_20, ((min((max(18446744073709551615, 7029332167498046410)), ((((((var_3 ? 22299 : 7029332167498046410))) ? (((var_16 ? var_14 : 58623))) : ((var_7 ? 242 : 3716384966))))))))));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_21 = (max(var_21, (((22299 <= (((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((((arr_7 [i_2]) + 1881235313)) - 13)))) << (var_1 - 196))))))));
        arr_8 [i_2] = var_5;

        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            var_22 *= ((max((arr_7 [i_2]), ((max(2, var_8))))));
            var_23 = (~-8543);

            /* vectorizable */
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_24 += (arr_18 [i_4] [i_3 - 1] [i_4] [i_4] [i_6] [i_2]);
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] &= (((arr_13 [i_2] [i_2] [i_3] [i_2] [i_5] [i_6]) ? (arr_12 [1] [1]) : ((var_4 ? -18338 : var_9))));
                            var_25 &= ((((arr_9 [4] [i_4] [i_5]) * (arr_15 [i_5] [i_5] [i_2]))));
                        }
                    }
                }
                arr_21 [i_2] [i_3 - 1] [i_4] |= (arr_9 [i_3] [i_3] [i_3 - 3]);
                var_26 = (min(var_26, (var_9 * 2538534483)));
            }
            for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
            {
                var_27 = arr_17 [i_7] [i_7] [i_3] [i_3 - 2] [i_2] [i_2] [i_2];
                var_28 ^= (max((((arr_14 [i_2] [i_2] [i_2] [i_7]) << (58623 - 58623))), ((((arr_19 [i_3 - 1] [i_3 + 2] [i_3 + 2]) ? ((max((arr_10 [i_2]), var_13))) : (arr_15 [i_2] [i_3] [i_2]))))));
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                var_29 = (((arr_16 [i_2] [i_3 - 1] [i_8] [i_2] [i_8]) ? (~-2379954863333398402) : (((((arr_24 [i_8] [i_3 + 1] [i_2]) < (arr_16 [i_3] [i_2] [i_3] [i_2] [i_2])))))));
                var_30 = (((((-877107226107531493 ? 4130702370 : (arr_6 [i_2])))) ? 16931 : ((var_16 & (3247011723 * var_1)))));
                var_31 = 717723109851825271;
                var_32 = (min(var_32, ((((((((arr_12 [i_2] [i_2]) << (var_13 + 1060)))) ? (arr_7 [i_3]) : var_0))))));
            }
        }
        arr_27 [i_2] [i_2] = (arr_7 [i_2]);
    }
    var_33 = ((80 ? ((var_0 << (((max(var_6, var_4)) - 18446744073709551544)))) : var_13));
    #pragma endscop
}

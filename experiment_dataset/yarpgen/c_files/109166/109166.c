/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_17 = ((var_9 ? 1360751446 : 123));
        var_18 = 112;

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_8 [5] [i_1] [5] = ((!(((var_0 ^ (arr_0 [i_1]))))));
                var_19 = (min(var_19, -126));
                var_20 = (arr_6 [9] [i_0] [i_1] [i_2]);
                var_21 = ((!(-123 == -123)));
            }
            for (int i_3 = 2; i_3 < 9;i_3 += 1)
            {
                arr_11 [i_1] = (((arr_4 [i_1]) + var_5));
                var_22 = (((((-(arr_10 [4] [i_1] [i_3])))) ? 122 : (arr_9 [i_3 - 1] [i_1] [i_0])));
                arr_12 [i_1] [i_1] [4] = (((123 ^ -103) + (arr_10 [i_0] [i_1] [i_3])));
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_23 = (var_3 / 72);
                arr_16 [i_0] [i_1] [i_1] [i_4] = ((-(arr_3 [i_0] [i_1])));
                var_24 = ((arr_2 [i_1] [i_0 + 1] [i_1 - 3]) ^ var_14);
                var_25 = var_4;
            }
            arr_17 [i_1] = -123;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_26 = (min(var_26, (arr_6 [i_0] [i_0] [i_0 - 3] [i_5])));
            var_27 = (((((((arr_19 [i_5]) + 2147483647)) << (((var_6 + 2632044865250055036) - 7)))) - ((~(arr_2 [i_5] [i_0] [i_5])))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_28 = (((arr_14 [i_0] [i_0] [i_0 - 1]) ? 72 : (215 ^ var_11)));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 7;i_8 += 1)
                {
                    {
                        var_29 = var_14;
                        var_30 = (((arr_9 [i_0 - 1] [3] [i_0 - 2]) != (-3095629051292191073 | 114)));
                    }
                }
            }
            var_31 = (~123);
            arr_28 [i_6] [8] [7] = (((arr_7 [6] [6] [i_0] [i_0 - 2]) ? var_4 : var_4));
        }
        for (int i_9 = 4; i_9 < 8;i_9 += 1)
        {
            arr_31 [i_9] = -25273;
            var_32 = 3591868522498012524;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    {
                        var_33 = ((-(3095629051292191073 / 63)));
                        var_34 = (min(var_34, (((-(((arr_19 [10]) ? 2970052495 : var_3)))))));
                        arr_38 [i_11] [i_9] [i_10] [i_9] [i_0] = ((arr_34 [10] [i_10] [4] [i_9] [i_0] [1]) ? -3095629051292191073 : (!-34));
                        var_35 = ((arr_32 [i_0] [1] [i_10] [i_11]) ? (arr_35 [7] [i_11 + 1] [i_11 - 2] [i_11 - 1]) : (arr_21 [2] [i_0]));
                        arr_39 [i_9] [i_9] [1] = var_12;
                    }
                }
            }
            var_36 = 40262;
        }
        var_37 = (((arr_21 [i_0] [i_0]) ? ((-3095629051292191073 * (arr_2 [6] [i_0] [i_0]))) : var_3));
    }
    var_38 = (min(var_38, (((-123 ? 123 : ((-var_4 >> ((((1 ? var_15 : 110)) + 1046665074798071377)))))))));
    var_39 -= (+-1);
    #pragma endscop
}

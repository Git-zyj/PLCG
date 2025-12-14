/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [21] [i_0 - 2] = (max(var_6, var_4));
        arr_3 [i_0] = (((-(((0 != (arr_0 [i_0 - 1])))))));
        arr_4 [i_0] = 5150840727451993115;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    {
                        var_14 = ((0 ? var_10 : (max((-127 - 1), 9223372036854775807))));
                        var_15 = min(((-(arr_17 [i_1 + 1] [i_2] [i_3] [i_4 - 1]))), (((-(min(var_4, 525060781))))));
                        var_16 = 7;
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 1; i_5 < 8;i_5 += 1)
        {
            var_17 |= (-1 + 4176746154103673259);

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_18 = 1;
                var_19 = (min(var_19, (((((((arr_11 [4] [i_5] [i_1]) + 2147483647)) << (((arr_9 [4]) - 1566584941))))))));
            }
            var_20 = (((6484 - 0) ? ((var_8 ? (arr_19 [i_1] [i_5] [i_5]) : 0)) : (arr_8 [i_1] [i_5 + 1])));
            arr_23 [i_5] = var_0;
            var_21 = (min(var_21, 0));
        }
        var_22 = (min(var_22, (max(((((arr_15 [1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1]) ? 28948 : -var_1))), ((((min((arr_16 [i_1] [5] [i_1] [i_1]), -94))) * (min((arr_22 [i_1] [0] [i_1]), (arr_12 [i_1 - 1] [i_1] [i_1] [i_1 - 1])))))))));
        var_23 = ((var_7 << ((min((21 == -14), (0 || var_10))))));
    }
    for (int i_7 = 2; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 21;i_9 += 1)
            {
                {
                    var_24 = (max(var_24, (((var_10 ? -324818126 : ((min(240, 10))))))));
                    arr_31 [6] [i_8] [i_9] = ((((max(0, -20661)) << (-6359973110199658348 + 6359973110199658350))));
                    arr_32 [15] [i_8] [i_7 - 1] [i_7] |= min((((2915155402 ? ((6028092913778039345 ? (arr_28 [i_9] [i_9] [i_8] [i_7 - 1]) : (arr_0 [i_7 + 1]))) : 1))), ((-(min(32, var_6)))));
                }
            }
        }
        arr_33 [i_7 + 1] [i_7] = ((((max(4322287394515991454, -5340967277867825285))) ? ((min((arr_29 [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7 + 1]), (arr_29 [i_7 - 2] [i_7 + 1] [i_7] [i_7])))) : ((min((arr_29 [i_7 - 2] [i_7 - 2] [i_7] [i_7 + 1]), (arr_29 [i_7 - 1] [i_7 + 1] [i_7 - 2] [i_7]))))));
        var_25 = var_6;
    }
    var_26 = var_3;
    var_27 = ((((((min(var_12, var_0))) != ((0 ? 20657 : 15999074074555127866)))) ? 324818112 : ((var_7 | ((var_2 ? var_10 : var_6))))));
    #pragma endscop
}

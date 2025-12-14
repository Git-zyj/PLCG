/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [7] [i_0] = (arr_0 [13]);
        var_20 *= -var_16;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_21 = (236 >= var_4);
            arr_7 [i_1] [i_2 + 1] [i_2 + 1] = (((((var_6 ? 1221747904906243419 : var_4))) ? (arr_0 [i_2 + 2]) : (var_14 / var_0)));
            var_22 *= (!var_11);
            arr_8 [16] [i_2 + 3] = ((-(arr_6 [16] [i_2 + 2] [i_2 + 1])));
            arr_9 [i_2 - 1] &= (((arr_6 [i_2 + 2] [i_2 + 1] [i_2 + 1]) << (((arr_6 [i_2 - 2] [i_2 + 3] [i_2 + 3]) - 189))));
        }
        var_23 = ((+(((((arr_6 [i_1] [i_1] [i_1]) ? var_17 : -1432676748)) << (((1432676748 / -1432676748) + 22))))));

        /* vectorizable */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            var_24 |= ((((arr_10 [5]) ? (arr_1 [i_3]) : var_2)));
            var_25 *= ((-var_6 >= (arr_6 [i_3] [i_3 - 3] [i_3 + 1])));
            arr_12 [20] [1] [i_3 - 3] = (((arr_6 [i_1] [i_1] [i_3 + 2]) ? (arr_5 [i_3 + 2] [i_3 - 2]) : ((var_3 ? (arr_6 [i_3 + 2] [i_3] [i_3]) : var_4))));
            var_26 = (min(var_26, (16003296687432992816 >= 96)));
            var_27 = (min(var_27, (arr_10 [i_3 + 1])));
        }
        arr_13 [i_1] = -6;
        arr_14 [i_1] [i_1] = (arr_10 [i_1]);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_28 = ((var_8 / (min(((-263 ? (arr_3 [i_4]) : (arr_5 [i_4] [i_4]))), (max((arr_16 [i_4] [i_4]), (arr_5 [i_4] [i_4])))))));
        var_29 = (((((-((-562532705 / (arr_15 [i_4])))))) ? (min(2443447386276558799, (-1432676748 + -647155124))) : (((arr_10 [i_4]) | (-23025 / var_18)))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_30 = (max(((max((arr_1 [i_5]), (((arr_3 [i_5 - 1]) ? var_2 : (arr_11 [i_6] [i_6])))))), (arr_3 [i_6])));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_29 [i_7] [i_7] [i_8] [i_7] [i_7] [4] = (max((arr_10 [i_5]), ((-((-1432676736 ? 96 : (arr_23 [i_5 + 1])))))));
                            arr_30 [i_7] [i_7] [i_7] = (((arr_26 [i_5] [i_5 - 1] [i_7] [i_8 + 2]) ? ((10052 ? ((((arr_4 [9] [12]) ? 6664643618711948187 : (arr_10 [i_5])))) : ((var_12 ? var_4 : (arr_15 [i_6]))))) : (arr_20 [i_5 - 1])));
                            var_31 *= ((((((max((arr_24 [i_5] [i_8 + 1] [i_7] [i_5 - 1]), (arr_24 [i_8] [i_8 + 1] [i_6] [i_5 - 1])))) + 2147483647)) << ((((min((arr_24 [i_5] [i_8 + 1] [i_7] [i_5 - 1]), 96))) + 5642))));
                            var_32 = 4356;
                            var_33 = (min(var_33, (max(((var_3 ? (arr_18 [i_8 + 1]) : (arr_18 [i_8 - 1]))), 6664643618711948174))));
                        }
                    }
                }
            }
        }
    }
    var_34 = (max(var_34, (((var_15 << (var_17 - 25))))));
    #pragma endscop
}

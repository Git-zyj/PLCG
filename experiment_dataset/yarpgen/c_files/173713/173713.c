/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 = -8348616586667317982;
            var_19 = ((-(max(1399326054258747597, 1157728639))));
        }

        for (int i_2 = 4; i_2 < 9;i_2 += 1)
        {
            var_20 = (((((((2147483647 ? var_11 : (arr_3 [i_0])))) && (((-8348616586667317967 ? var_0 : var_4))))) ? (((!500613449) ? (((arr_4 [i_0]) ? 500613447 : (arr_2 [i_0] [i_2] [i_0]))) : (((!(arr_1 [i_0])))))) : (((((arr_5 [i_0] [i_2]) || var_9)) ? ((var_14 ? 2147483638 : 1140977369)) : (!-24267)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    {
                        var_21 = (~1788862957934058662);
                        var_22 = (arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]);
                    }
                }
            }
        }
        var_23 = var_14;
        var_24 = (min(var_24, var_5));
    }
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        arr_14 [i_5] = (-var_16 <= var_11);
        arr_15 [i_5 - 2] = (arr_13 [i_5 + 1]);

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_25 = (min(var_25, ((((((-(arr_17 [i_5 - 1] [i_5] [i_5 - 1])))) ? (arr_17 [i_5 - 2] [i_5] [i_6]) : -8348616586667317975)))));
            var_26 = (max(var_26, (!3620331821)));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_27 -= max(((((arr_20 [i_5 + 1] [i_5 + 1] [i_5 + 2]) && (arr_20 [i_5 + 1] [i_5 + 1] [i_5 + 2])))), ((max(18446744073709551615, -3431452323942673544))));
            var_28 *= (max((arr_21 [i_5 + 1] [i_7] [i_7]), ((~(arr_20 [i_5] [i_7] [i_7])))));

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                var_29 = (min(var_29, (arr_22 [8] [8] [20])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_31 [i_5 + 1] [i_7] [i_8] = (((max(var_1, 3431452323942673538)) & -101));
                            var_30 = 125;
                            var_31 = (max(var_31, (((+(((((var_6 ? (arr_23 [i_5 - 1]) : var_4))) ? (max((arr_12 [i_5 + 1]), (arr_12 [i_5 + 1]))) : (((arr_22 [i_5] [i_8 - 1] [i_9]) ? (arr_22 [i_5 - 2] [i_7] [i_8]) : (arr_18 [20]))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_32 = (min(var_32, ((((arr_21 [i_5] [i_12 + 2] [i_12]) ? (max(((max(1887069979, 9979))), var_13)) : (arr_18 [i_7]))))));
                            var_33 ^= (((((arr_24 [i_5 - 2] [i_11 + 1] [i_5 + 2] [i_12 + 1]) ? (arr_24 [i_5 - 2] [i_11 + 1] [3] [i_12 - 1]) : (arr_24 [i_5 - 1] [i_11 - 1] [i_8] [i_12 - 1]))) - ((var_11 ? (arr_24 [i_5 + 1] [i_11 + 1] [i_8 - 1] [i_12 - 1]) : (arr_24 [i_5 - 1] [i_11 + 1] [i_11] [i_12 + 1])))));
                        }
                    }
                }
            }
            for (int i_13 = 2; i_13 < 21;i_13 += 1)
            {
                var_34 *= (((((arr_30 [i_5 + 1] [i_7] [i_13 + 1] [i_7] [8]) & 46)) + var_12));

                for (int i_14 = 2; i_14 < 20;i_14 += 1)
                {
                    var_35 = (3620331828 * -1179453036828077934);
                    var_36 = (((((max((arr_29 [i_5 - 2] [i_7] [i_13] [i_14 - 2] [i_7] [i_14]), (arr_41 [i_5 + 2]))) ^ (((~(arr_18 [i_5 - 1])))))) / (arr_12 [i_5])));
                }
            }
        }
    }
    var_37 += var_12;
    #pragma endscop
}

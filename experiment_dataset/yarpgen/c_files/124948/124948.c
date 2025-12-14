/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = (((((arr_1 [i_0]) / (arr_1 [i_0]))) <= (arr_1 [i_0])));
        var_13 = 49813;
        var_14 = (min(((((max(var_6, var_0))) ? (15723 & var_4) : var_11)), (((-(var_8 ^ -12061))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    {
                        var_15 = var_6;
                        var_16 = (((((var_0 ? -12049 : var_1) - (arr_3 [i_1 - 1] [i_4 + 2])))));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_17 = (((((var_5 ? (max(-800605465, (arr_15 [i_1]))) : (arr_0 [i_1 - 1] [i_5])))) ? ((((!(var_6 > 1946182808))))) : (((~var_6) ? (((arr_14 [i_1] [i_1] [i_5]) ? (arr_14 [i_1] [i_5] [i_5]) : (arr_13 [i_1] [i_5] [i_5]))) : (~12070)))));
            arr_16 [0] [i_1] = var_8;
            arr_17 [i_1] = var_7;
            arr_18 [i_1] [i_1 + 2] [i_1] = (((max((arr_9 [1] [i_1 - 1]), (arr_9 [i_1] [i_1 + 2]))) % ((((arr_13 [i_1] [i_1] [i_1 - 1]) ? (arr_3 [i_1 + 1] [i_1 + 2]) : (arr_3 [i_1 + 1] [i_1 + 1]))))));
            var_18 = (min(((max(((-12061 ? var_9 : var_0)), (arr_7 [i_1])))), 1857509946865330651));
        }
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            var_19 |= (((-(arr_13 [i_1 + 1] [i_6 + 3] [i_6 + 3]))));
            var_20 = (max((~var_5), (((arr_6 [i_6 + 3] [i_6 + 3]) ? (max(1359882742, (arr_2 [i_6]))) : ((((arr_10 [i_1] [i_1 + 1] [i_1 + 1]) & 12061)))))));
        }
        arr_21 [i_1] = ((-(((arr_6 [i_1 + 2] [i_1]) ? (var_11 + -1967215323) : -11496))));

        for (int i_7 = 3; i_7 < 11;i_7 += 1)
        {
            arr_25 [i_1] [i_1] [i_7] = arr_6 [2] [9];
            var_21 = (max(var_21, 1359882742));
            var_22 ^= (arr_15 [2]);
            var_23 = (min(var_23, (((((max((arr_7 [0]), var_1))) + ((-(arr_7 [0]))))))));
        }
    }
    var_24 *= (!((((((var_7 ? var_6 : var_3))) ? var_6 : var_5))));
    #pragma endscop
}

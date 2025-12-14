/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = (min(var_11, ((min((+-511431953462937670), (((-var_2 + ((-104 ? 97 : 0))))))))));
    var_12 = ((+(((~0) ? (3118 % 255) : var_2))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_13 = ((~((19806 ? (var_8 - var_3) : (arr_0 [i_0 + 1])))));
        var_14 *= (((((arr_1 [i_0 + 2]) || (arr_0 [i_0 + 1]))) ? ((min((arr_0 [i_0 - 2]), var_8))) : (((arr_1 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : var_3))));
        arr_2 [i_0] = ((((max(((max((arr_0 [20]), var_1))), ((var_4 ? var_5 : 2849244725))))) ? ((((!(!var_9))))) : (max((26020 && 15), var_9))));
        var_15 = (arr_0 [4]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_4 [i_1]);
        arr_6 [i_1] = var_4;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 = ((((((arr_8 [i_2]) - (arr_3 [i_1] [i_2])))) - ((var_4 ? (arr_8 [i_2]) : var_0))));
            arr_9 [i_1] [i_2] = (((arr_3 [i_1] [i_2]) ? var_4 : (arr_3 [i_2] [i_2])));
        }
        var_17 = (arr_0 [i_1]);

        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            var_18 = ((-var_6 ? ((23502 ? (arr_3 [i_1] [i_3 + 1]) : (max((arr_12 [9]), (arr_3 [i_1] [i_3]))))) : var_9));
            arr_13 [i_1] [i_3] = var_6;
            arr_14 [i_1] = ((+((((-1 ? (arr_7 [i_3]) : (arr_10 [i_1] [1] [i_1])))))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_1] [i_4] |= ((((max(1, 0))) ? (((arr_12 [i_1]) - var_0)) : (max(var_1, (((arr_15 [7] [i_1]) ? (arr_15 [i_1] [i_1]) : var_3))))));
            var_19 = (min(var_19, (((!(((~(arr_8 [i_1])))))))));
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (max((min(((((arr_11 [i_5] [i_5] [16]) || var_1))), (arr_3 [i_5] [i_5]))), (((!((max((arr_3 [8] [i_5]), 229))))))));
        var_20 = (max(var_20, (((var_4 >= ((-(arr_11 [i_5] [i_5] [i_5]))))))));
    }
    #pragma endscop
}

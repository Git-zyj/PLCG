/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_2, ((((0 < var_3) ? var_11 : (!var_15))))));
    var_18 = (max(var_18, 5542007487147969524));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_19 = (((((+(max((arr_1 [i_0] [i_0 + 1]), (arr_2 [i_0] [i_0])))))) ? ((-2743 ? (((arr_0 [i_0]) ? 2743 : (arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))) : (((arr_1 [i_0 + 3] [i_0 + 2]) ? (arr_1 [i_0 - 2] [i_0 + 2]) : (arr_1 [i_0] [i_0 + 1])))));
        arr_4 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 = ((~(((arr_2 [i_1] [i_1]) / (arr_3 [16])))));
        var_21 = (min(((((arr_5 [i_1] [i_1]) ? ((2736 ? (arr_2 [i_1] [i_1]) : (arr_3 [6]))) : (~65535)))), (arr_6 [i_1] [i_1])));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            var_22 += 2728;
            arr_10 [i_1] [i_1] [i_2] = ((((((arr_9 [i_1] [i_1] [i_1]) || (arr_3 [18])))) * (arr_8 [i_1] [i_2] [i_2])));
        }
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            var_23 = (min(var_23, (arr_11 [i_1] [i_1])));
            var_24 = (min((arr_14 [i_1] [i_3] [3]), (((~(arr_11 [i_1] [i_1]))))));
        }

        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            arr_17 [i_1] [i_4 - 1] = (arr_14 [i_1] [i_1] [i_4 + 1]);
            arr_18 [i_1] [i_4] [i_4] &= (min(((!((min((arr_1 [i_1] [15]), (arr_13 [i_1] [i_4])))))), (arr_8 [i_1] [i_4 - 1] [i_4])));
            arr_19 [i_1] [i_1] = ((((((arr_6 [i_4] [i_1]) ? -2743 : (((arr_1 [i_1] [i_4 - 1]) ? (arr_3 [6]) : (arr_1 [i_1] [i_1])))))) + (arr_14 [i_1] [i_1] [i_4])));
            var_25 = (arr_9 [10] [i_4] [i_4]);
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_24 [i_1] [i_5 + 1] = (((((min((arr_11 [i_1] [i_5 + 1]), (arr_5 [i_1] [i_5 - 1])))) || (((arr_22 [i_1] [i_5 - 1]) == (arr_3 [18]))))) ? ((((((arr_21 [i_1] [i_1] [i_5]) ? (arr_1 [i_1] [i_5 - 1]) : -2743))) ? 2722 : 1)) : ((max(-2746, 2746))));
            var_26 = (min(var_26, (((2742 ? ((((max(4546690425623036012, (arr_12 [i_1])))) ? (arr_16 [i_1] [i_1]) : (((arr_2 [i_1] [i_1]) ? (arr_15 [i_1] [i_1] [i_1]) : -2746)))) : (((-2722 + (((arr_6 [i_1] [i_5 - 1]) ? 2745 : (arr_16 [i_1] [i_5])))))))))));
        }
        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
        {
            var_27 |= -2721;
            var_28 |= (((((((!(arr_15 [i_6] [i_6 - 1] [i_1]))) ? ((min(2732, -2743))) : (arr_27 [i_1])))) > (min(((((arr_28 [i_1] [i_6] [i_1]) ? (arr_7 [i_1]) : (arr_0 [1])))), (((arr_3 [4]) ? (arr_1 [i_6] [i_1]) : (arr_28 [i_1] [i_1] [i_1])))))));
        }
        var_29 ^= (((((arr_25 [16] [16]) + 2147483647)) << (((-2743 + 2767) - 24))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_32 [i_7] [i_7] = (!(arr_2 [i_7] [i_7]));
        var_30 = (arr_11 [i_7] [i_7]);
        var_31 ^= 2746;
        var_32 = (min(((-(arr_26 [i_7] [i_7] [i_7]))), (min((arr_26 [i_7] [i_7] [i_7]), (arr_26 [i_7] [i_7] [9])))));
    }
    var_33 = var_10;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(3589965360, 705001916))) ? var_6 : (((var_15 | 7536432389594091438) + 51))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = ((-93 ? (26 && var_8) : ((11988358929582803214 ? (arr_2 [i_0]) : (arr_0 [i_0])))));
        var_18 = var_3;
        var_19 = (min(var_19, (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_20 = (((((arr_5 [i_1 - 1] [i_1 + 4]) + (arr_5 [i_1 + 1] [i_1 - 1])))) ? -var_10 : var_0);
        arr_7 [i_1 - 1] = ((!((max(17599, 3589965360)))));
        var_21 = max((max(((max((arr_6 [i_1 - 1] [i_1 + 4]), (arr_6 [i_1] [1])))), 10910311684115460153)), ((((max((arr_6 [i_1] [i_1]), (arr_6 [12] [16])))) ? (7760489509681516609 + 141) : ((54 ? var_2 : var_7)))));
    }
    var_22 = (var_0 <= var_9);
    #pragma endscop
}

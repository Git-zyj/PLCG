/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (max(var_5, ((var_4 + (max(var_8, var_9))))));
    var_12 = (max(var_12, ((((max(-var_0, var_5))) ? ((var_4 ? var_5 : -var_4)) : var_7))));

    for (int i_0 = 4; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_13 = ((var_10 ? var_9 : ((((!var_7) + -var_8)))));
        var_14 = var_10;
        var_15 = (min((max((arr_1 [16] [i_0]), ((((arr_0 [i_0]) && var_3))))), (max(((var_8 - (arr_0 [i_0]))), ((((arr_0 [i_0]) || var_6)))))));
        arr_2 [i_0] [1] = ((((max((var_0 % var_3), ((var_7 ? var_8 : var_7))))) ? (arr_0 [i_0]) : (((arr_1 [i_0 - 3] [i_0 + 1]) - ((min(var_10, var_2)))))));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 - 3] = max(((var_8 ? (((arr_1 [i_1] [i_1]) ? (arr_1 [13] [i_1]) : var_0)) : (((max(var_5, var_0)))))), (~var_1));
        var_16 = (max(var_10, (min(((var_0 ? var_6 : (arr_1 [3] [10]))), (max(var_0, (arr_1 [12] [i_1])))))));
        arr_7 [i_1] &= (min((((((var_1 ? var_6 : var_2)) <= var_3))), var_2));
        var_17 = var_8;
    }
    for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_18 = var_9;
        arr_10 [i_2 - 2] [i_2 - 2] |= ((((1 << ((((1023 ? 3432085748 : 1)) - 3432085730)))) - (1 || 1)));
        var_19 = (((max((arr_1 [2] [i_2]), -var_2)) <= (arr_0 [i_2])));
        arr_11 [12] = ((-(((arr_3 [i_2 - 4]) + (min(var_7, var_3))))));
    }
    var_20 = var_1;
    #pragma endscop
}

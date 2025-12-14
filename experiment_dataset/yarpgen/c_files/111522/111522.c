/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((max(var_10, var_14))) ? (max(16741127060754547900, 124)) : ((var_17 ? 43896 : 16629186980074751914)))), (((!(((var_19 ? var_14 : var_2))))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_21 = ((((var_9 ? ((((arr_0 [i_0 + 1]) ? (arr_0 [i_0]) : var_4))) : (max(13421024851261339338, var_14))))) ? ((-(arr_1 [i_0 + 1]))) : (((-((max(var_8, -125)))))));
        var_22 *= (+((((((arr_0 [i_0]) ? 22708 : (arr_1 [i_0])))) ? (max(23, (arr_1 [i_0]))) : ((var_2 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        var_23 = (min((((((min((arr_1 [i_0 + 1]), 124))) ? 7 : var_10))), (~1)));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (((((var_9 ? 121 : (arr_1 [i_1 + 1])))) ? ((var_14 ? (arr_1 [i_1 - 1]) : var_6)) : (~var_9)));
        arr_5 [i_1 - 1] [i_1] = (min((max(var_12, (arr_2 [i_1 - 1] [i_1]))), ((((((var_10 ? var_17 : (arr_3 [i_1 + 1])))) ? (((var_15 ? var_16 : var_14))) : (arr_3 [i_1]))))));
        var_24 = ((((arr_2 [i_1 + 1] [i_1 - 1]) ? (arr_1 [i_1 + 1]) : var_17)));
        arr_6 [i_1 + 1] &= (max(((min((arr_0 [i_1 + 1]), (~var_3)))), (min(((max(124, var_2))), 18446744073709551615))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        arr_10 [i_2 + 1] = (((arr_7 [i_2]) ? ((var_6 ? var_14 : (arr_9 [i_2 + 1] [i_2]))) : (((var_10 ? (arr_8 [i_2] [i_2]) : var_7)))));
        arr_11 [i_2] [i_2] = ((~((var_11 ? 124 : (arr_9 [14] [i_2])))));
        arr_12 [5] [1] = (((((3416982000 ? var_11 : (arr_8 [i_2] [i_2 - 1])))) ? (arr_9 [i_2 - 1] [i_2]) : 8547248109351757607));
    }
    #pragma endscop
}

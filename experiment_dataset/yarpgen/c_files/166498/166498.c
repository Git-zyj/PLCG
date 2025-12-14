/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = 512;
        arr_3 [i_0] = ((~((var_2 ? 8037 : 65022))));
        var_12 = ((var_9 < ((var_9 ? var_9 : 13481))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_13 = ((~(-32412 & var_9)));
        arr_8 [i_1] [i_1] = 36491;
        var_14 = ((((((arr_0 [i_1]) ? var_0 : var_3))) && 36491));
        var_15 = ((((-13481 ? var_2 : var_9))) ? 15280422208028342854 : 29045);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_16 = (max(var_16, ((min(((-(arr_4 [10] [i_2]))), ((((arr_4 [i_2] [i_2]) ? (arr_2 [i_2]) : 65045))))))));
        var_17 = arr_9 [13];
    }
    var_18 = (((((!var_3) ? var_7 : 36485)) != ((-(min(var_9, var_0))))));
    #pragma endscop
}

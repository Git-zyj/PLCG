/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((min(((var_0 ? var_6 : var_2)), ((max(var_10, var_3))))), (max(((var_8 ? var_9 : var_8)), var_9))));
    var_12 = (min(9919481089783003496, 0));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (arr_0 [1]);
        var_14 -= ((~(!1)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_15 = (max(var_15, (((((arr_0 [i_1]) <= var_9)) ? (~var_5) : ((var_9 ? (arr_5 [i_1]) : (arr_3 [2])))))));
        var_16 = ((!((((arr_1 [11] [11]) ? (arr_4 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))))));
    }
    var_17 = (min(var_17, var_3));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~((-4120344882295805207 ? var_10 : var_6))))) ? var_2 : (((((var_3 ? var_1 : var_3))) ? var_6 : ((var_17 ? var_16 : var_6))))));
    var_19 = (min(var_19, -var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~((((13537 >= (arr_1 [i_0])))))));
        arr_3 [i_0] = (((((-var_15 ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? ((((min((arr_0 [i_0]), 1321938223564725285))) ? (arr_1 [i_0]) : ((-(arr_0 [i_0]))))) : var_9));
        var_20 ^= ((!((!((230 || (arr_0 [11])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_21 ^= ((((max((((arr_5 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_1 [i_1]))), ((-(arr_0 [i_1])))))) ? (arr_5 [18] [18]) : ((~((136 ? (arr_0 [i_1]) : var_12))))));
        var_22 = (min(var_22, ((min(var_13, (((+(((arr_1 [i_1]) ? (arr_0 [18]) : (arr_1 [i_1])))))))))));
    }
    var_23 ^= (!var_10);
    var_24 = (!-var_1);
    #pragma endscop
}

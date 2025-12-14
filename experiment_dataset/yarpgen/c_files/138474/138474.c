/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((max(((var_4 ^ (arr_1 [i_0] [1]))), ((max((arr_1 [i_0] [i_0]), 152))))) ^ (((((var_10 <= var_8) && (arr_0 [i_0 - 1])))))));
        var_17 = (((((1 ? 27822 : 247165765))) > (max(var_13, -var_14))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((((104 >= 1) ? -4294967295 : (((min((arr_0 [12]), (arr_5 [i_1]))) / (((((arr_4 [i_1 + 1] [7]) && 1)))))))))));
        var_19 = ((((((((arr_1 [1] [1]) + var_1))) ? (3856567947639776191 << var_5) : (((max((arr_5 [i_1]), var_11)))))) / (max(var_9, (arr_3 [0])))));
        var_20 = (max(var_20, (arr_1 [15] [i_1 + 1])));
    }
    var_21 = var_7;
    #pragma endscop
}

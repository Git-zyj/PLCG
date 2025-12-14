/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_3;
    var_15 = var_9;
    var_16 = ((-var_10 >= (min((var_11 + -1729653958), ((var_13 ? var_5 : var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = ((172 ? -2 : ((((min((arr_1 [i_1]), 1))) ? (((arr_1 [12]) ? 1 : (arr_0 [i_0]))) : ((((arr_0 [i_1 - 1]) ? (arr_1 [i_1]) : 89)))))));
                var_18 = (((((arr_2 [i_1]) ? var_2 : (arr_0 [i_0 - 1]))) / ((min((arr_3 [i_1 - 1]), (arr_1 [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}

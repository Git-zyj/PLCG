/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((max((arr_4 [12] [i_1] [i_1]), 0))))));
                var_20 = (((arr_6 [i_0] [i_0] [i_1]) ? (arr_6 [i_0] [i_0] [i_0]) : (min(461349548, 1))));
                var_21 = (min(var_21, ((((arr_0 [i_0]) ? (max(var_13, (arr_5 [i_1] [i_0]))) : 241308495)))));
            }
        }
    }
    var_22 = ((-(!var_5)));
    var_23 -= var_15;
    var_24 = (min(var_4, ((max(-2147483645, var_14)))));
    #pragma endscop
}

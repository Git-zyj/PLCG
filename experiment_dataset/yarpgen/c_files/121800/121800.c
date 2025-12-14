/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(((var_17 ? var_12 : var_4)), var_0)) << (((min(var_0, -39)) + 100))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_20 = (arr_3 [i_0] [i_0 + 1] [i_0]);
                arr_5 [i_0] [i_1] = (~16);
                arr_6 [i_0] [i_0] = (min(((max(-var_14, (((arr_1 [i_0 + 2]) - var_15))))), (((min(var_6, var_18)) - (((min((arr_4 [i_0]), var_11))))))));
            }
        }
    }
    var_21 |= var_7;
    #pragma endscop
}

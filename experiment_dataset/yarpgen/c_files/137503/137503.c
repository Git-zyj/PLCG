/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 10;
    var_17 = ((-((~((var_7 ? -32762 : var_12))))));
    var_18 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = var_0;
                    var_20 = (((((var_5 ? var_10 : (max((arr_4 [i_0 - 1] [i_1] [i_0 - 1]), (arr_3 [i_1] [i_0])))))) ? (((((arr_1 [i_0]) == (arr_7 [1]))))) : (((var_6 ? 0 : (arr_4 [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_21 = ((var_12 || ((min(4294967295, (max(1, var_13)))))));
    #pragma endscop
}

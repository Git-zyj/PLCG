/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_10));
    var_17 &= var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 *= ((((((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_0])))) ? ((var_1 ? var_10 : ((max(var_7, var_8))))) : ((min((min((arr_1 [9] [i_0]), var_10)), var_10)))));
                arr_6 [i_1] = (arr_1 [i_0] [i_1]);
                var_19 = (((arr_2 [i_0] [i_0]) ? (((arr_2 [1] [i_1]) / (arr_2 [i_0] [i_0]))) : (arr_5 [i_0] [i_1])));
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}

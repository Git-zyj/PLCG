/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (((((arr_1 [i_0]) == 57902)) ? (arr_3 [i_0]) : (((arr_1 [i_0]) ? (arr_1 [i_1]) : (min((arr_2 [i_0] [i_1]), var_6))))));
                var_17 = (max(var_17, (arr_1 [i_0])));
            }
        }
    }
    var_18 = (min(((max(-var_10, (max(var_15, 53092))))), ((var_7 ? (max(var_7, 4294967295)) : var_12))));
    var_19 = var_1;
    var_20 = 3510;
    #pragma endscop
}

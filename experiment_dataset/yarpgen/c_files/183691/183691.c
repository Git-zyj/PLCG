/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = 5611982687162226163;
                arr_6 [i_1] = (((~5611982687162226163) - (arr_1 [i_1])));
            }
        }
    }
    var_19 = ((var_2 ? var_0 : var_9));
    var_20 = (!var_1);
    #pragma endscop
}

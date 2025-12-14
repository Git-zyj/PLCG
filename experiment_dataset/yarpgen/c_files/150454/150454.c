/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = -var_9;
                var_14 = (max((min(((min((arr_1 [i_0]), 127))), var_9)), var_8));
                var_15 |= (arr_2 [i_0]);
                var_16 = ((max((min((arr_0 [1]), 8957802417981188933)), ((((arr_7 [i_0]) / 1169470940076879726))))));
            }
        }
    }
    #pragma endscop
}

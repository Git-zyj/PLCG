/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(var_20, (((var_9 > (!var_12))))));
                var_21 = (min(var_21, ((max(18282, ((((((1 ? 18268 : -3386259350822959858))) && (((var_2 ? 15 : 43)))))))))));
            }
        }
    }
    var_22 = (min(var_22, ((-1 ? 8603182621573610141 : 240))));
    #pragma endscop
}

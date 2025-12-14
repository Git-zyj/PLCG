/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (arr_0 [i_0]);
                arr_4 [i_0] [i_1] = (((((var_11 ^ var_12) % var_19)) % var_1));
            }
        }
    }
    var_21 = (max(var_21, (!var_13)));
    var_22 = (!var_13);
    #pragma endscop
}

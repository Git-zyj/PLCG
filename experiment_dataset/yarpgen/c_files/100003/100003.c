/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = ((~((((arr_2 [i_1 - 3] [i_1 + 3] [i_0 + 1]) == (~-1549753707))))));
                arr_4 [i_0] [i_1] = (((min(var_1, (!var_10)))));
            }
        }
    }
    var_22 = (min(var_22, (((((min(var_4, (min(var_11, 17))))) < (!var_5))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_2, ((max(104, var_17)))));
    var_19 = min((max(((max(var_15, -1))), 281474976710655)), var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = 7600262524958665701;
                var_21 = (max(var_14, (max(var_1, var_15))));
            }
        }
    }
    var_22 = ((((max((!var_15), (10846481548750885921 / var_10)))) ? (max((min(var_14, 281474976710645)), ((min(1, 4200770892))))) : var_9));
    #pragma endscop
}

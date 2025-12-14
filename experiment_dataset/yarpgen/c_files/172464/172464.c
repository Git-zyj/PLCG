/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_5 ? ((25829 ? 32736 : 1099736762)) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((!((min((max(var_9, -1099736763)), (arr_0 [i_0])))))))));
                var_12 = ((((-(arr_2 [i_1] [3]))) >= (((1 ? ((max(1, 1))) : 65535)))));
            }
        }
    }
    #pragma endscop
}

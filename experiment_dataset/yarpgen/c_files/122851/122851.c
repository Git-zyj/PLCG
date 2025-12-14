/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((!((max(var_3, var_9)))));
                var_16 = (max(2414118380248106530, ((((arr_2 [i_1 - 2] [i_1 - 1] [i_1]) || var_9)))));
            }
        }
    }
    var_17 *= var_4;
    var_18 = (max(2080374784, 2080374769));
    #pragma endscop
}

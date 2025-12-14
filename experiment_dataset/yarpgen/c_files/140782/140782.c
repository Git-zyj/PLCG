/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 ? ((((-32767 - 1) ? var_15 : var_15))) : 191));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = 37910;
                    arr_10 [i_0 + 4] [i_1 - 1] [i_0] [i_2] = ((!(((1 ? (32759 && 1746343592) : -8542703042525682255)))));
                }
            }
        }
    }
    #pragma endscop
}

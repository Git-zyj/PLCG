/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (arr_2 [i_2 - 2] [i_1] [i_0])));
                    var_20 = (-9223372036854775807 - 1);
                }
            }
        }
    }
    var_21 = (min(var_21, (var_17 && 1)));
    #pragma endscop
}

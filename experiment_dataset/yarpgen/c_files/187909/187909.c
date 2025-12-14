/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_9;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 = (max(var_3, -1355614120));
                    var_22 = (arr_2 [i_0 - 2]);
                }
            }
        }
    }
    #pragma endscop
}

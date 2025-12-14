/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_0);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (-2147483647 - 1)));
                    var_19 = ((!(arr_0 [i_1])));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(var_1, (((var_5 <= (arr_2 [i_0 + 1] [i_1 + 1] [i_1 - 1]))))));
                    var_19 = var_4;
                }
            }
        }
    }
    #pragma endscop
}

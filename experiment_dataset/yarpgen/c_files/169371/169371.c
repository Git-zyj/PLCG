/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (((0 < 0) > (-127 - 1)));
                    var_12 = 0;
                }
            }
        }
    }
    var_13 = (((((var_1 ? 0 : var_8))) * var_5));
    var_14 = (max((~var_7), ((((((var_0 ? var_8 : var_8))) || (~16383))))));
    #pragma endscop
}

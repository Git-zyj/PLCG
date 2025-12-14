/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_8));
                    var_21 = 255;
                    var_22 = (arr_6 [i_2 + 1] [i_2 + 4]);
                }
            }
        }
    }
    var_23 = (!var_3);
    #pragma endscop
}

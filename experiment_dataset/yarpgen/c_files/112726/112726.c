/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = 0;
                var_18 = ((-((var_8 ? var_11 : (((arr_0 [i_0] [i_1]) % 1))))));
                var_19 = (max(-5668770946397196400, -5668770946397196400));
            }
        }
    }
    var_20 = ((var_2 << (max((var_3 ^ var_3), var_16))));
    #pragma endscop
}

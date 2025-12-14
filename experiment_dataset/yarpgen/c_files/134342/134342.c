/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [1] [i_0] [1] = (max((var_4 || -1321982974), ((2119647967 ? -1321982970 : 248))));
                var_12 = (min(var_12, 2299416196));
                arr_6 [i_0] = ((32754 < (((arr_4 [i_0]) ? 2902111423 : ((1298227639 ? -4665426656040112069 : -1072074498))))));
            }
        }
    }
    var_13 = var_6;
    #pragma endscop
}

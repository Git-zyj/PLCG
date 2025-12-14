/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = (max(var_20, (((var_17 << ((((1684168433538415916 ? var_8 : var_14)) - 29)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (((-6 ? 133 : 1684168433538415916)))));
                    var_22 = (max(1684168433538415916, -8359));
                    arr_9 [i_0] = (arr_3 [10] [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}

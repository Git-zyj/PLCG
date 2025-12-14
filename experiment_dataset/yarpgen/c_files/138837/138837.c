/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (-137438953471 < 57451);
                arr_6 [i_1] = (!24079);
                arr_7 [0] [0] = ((!((max(-406909155, var_3)))));
                arr_8 [i_0 - 2] [i_0 - 2] [i_1] |= var_4;
                var_12 += (min(((max(-406909155, 4294967295))), (max(var_5, -24085))));
            }
        }
    }
    var_13 = (max(var_13, ((max((-3910556473 >= var_8), var_5)))));
    var_14 |= -406909145;
    #pragma endscop
}

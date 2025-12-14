/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0 - 3] = 47053847;
                arr_6 [22] = (~var_7);
                arr_7 [i_0 - 4] [i_1 - 1] [18] = var_0;
            }
        }
    }
    var_10 = ((!((max(var_0, (-32767 - 1))))));
    var_11 = (min(var_11, var_6));
    #pragma endscop
}

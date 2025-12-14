/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_0;
    var_13 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = 242;
                arr_5 [i_1] [i_0] = (max(var_3, (min((39 / 216), (var_9 | 65535)))));
            }
        }
    }
    var_14 = (max(var_2, 242));
    #pragma endscop
}

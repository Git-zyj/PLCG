/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((max(var_0, var_2))), (((38799 < var_12) + var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_0] = (arr_4 [3] [i_0]);
                var_16 ^= var_9;
                var_17 = (max(((12534 ? 65535 : 0)), ((min(6, 885)))));
            }
        }
    }
    #pragma endscop
}

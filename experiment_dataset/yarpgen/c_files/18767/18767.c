/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (max(var_11, (-2147483643 || 2147483643)));
                arr_4 [12] [i_1] = var_7;
            }
        }
    }
    var_12 = var_5;
    var_13 = (((((-(min(-2147483646, 4294967276))))) * var_9));
    var_14 = 13881;
    #pragma endscop
}

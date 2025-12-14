/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, 8409));
    var_21 = (min(var_21, -3));
    var_22 = (min(var_22, -2514));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = var_13;
                    var_23 = (max(var_23, 1));
                }
            }
        }
    }
    #pragma endscop
}

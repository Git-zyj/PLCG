/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_9 ? 10174812609735318351 : (((~(!-975572829))))));
    var_14 &= (min((~0), ((-(min(var_3, var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((!(((var_12 - (arr_6 [i_0 - 2]))))));
                    var_15 = (max(var_15, (arr_4 [i_2])));
                }
            }
        }
    }
    #pragma endscop
}

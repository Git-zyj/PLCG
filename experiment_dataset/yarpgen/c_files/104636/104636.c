/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = (((arr_2 [11] [i_0]) ? (var_6 * var_8) : var_1));
                    arr_6 [i_0] [i_0] = (arr_1 [i_2] [i_0]);
                }
            }
        }
    }
    var_15 = var_6;
    var_16 = var_5;
    #pragma endscop
}

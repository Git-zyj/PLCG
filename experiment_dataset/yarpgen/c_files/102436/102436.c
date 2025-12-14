/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_2 != 4503595332403200);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_11 -= (arr_1 [i_0]);
                arr_5 [i_0] [i_0] &= (min(2243003720663040, (((var_2 != (~20590))))));
            }
        }
    }
    #pragma endscop
}

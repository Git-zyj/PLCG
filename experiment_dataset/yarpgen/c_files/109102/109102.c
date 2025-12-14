/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3486204503;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 *= (~0);
                var_19 = (arr_3 [7]);
                arr_7 [i_0] = (max((((!(arr_0 [i_0])))), (arr_1 [i_0])));
            }
        }
    }
    #pragma endscop
}

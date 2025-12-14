/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148599
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(((1 ? (arr_1 [i_1 - 1] [i_0 + 1]) : 1)), ((((arr_1 [i_1 + 1] [i_0 + 1]) | (arr_1 [i_1 - 1] [i_0 - 1]))))));
                arr_6 [i_0] &= min((min(2025973621, 1)), (max(1, ((117440512 ? 162 : 1)))));
                arr_7 [i_0] [i_0] [i_0] &= -610994374;
            }
        }
    }
    var_13 = -77;
    #pragma endscop
}

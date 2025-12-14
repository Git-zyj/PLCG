/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((var_5 | -112), -1891967201597849234));
    var_18 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_19 |= ((0 == (((1891967201597849226 ? (arr_5 [i_0]) : (arr_0 [i_0] [i_0]))))));
                var_20 = (arr_1 [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}

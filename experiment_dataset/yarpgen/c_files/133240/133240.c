/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max((min(((((-2147483647 - 1) || -2147483619))), (-2147483647 - 1))), -2147483617);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] = ((-(((((var_6 ? (arr_6 [i_1] [i_2]) : 1884440896))) ? (var_1 - var_0) : (var_0 / var_5)))));
                    var_12 = ((!((var_4 || ((max(0, 0)))))));
                }
            }
        }
    }
    #pragma endscop
}

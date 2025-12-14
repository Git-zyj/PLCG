/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((-46 + 2147483647) << (var_3 - 864862334)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max(var_12, 22));
                var_13 = (max(var_13, (((!((((arr_2 [i_1] [i_0]) ? (arr_5 [i_0]) : (min((arr_5 [i_0]), 38))))))))));
            }
        }
    }
    #pragma endscop
}

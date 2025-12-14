/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (min((max(var_14, ((var_2 - (arr_0 [i_0] [i_0]))))), (-127 - 1)));
        var_20 = (max(65529, (min(5, 6))));
        var_21 = (arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                var_22 &= max(((((-1 > var_11) >= -64))), ((-49 ? 1544765728171782823 : 48)));
                var_23 = (min(var_23, var_16));
            }
        }
    }
    var_24 = (max((max(11412516818928274803, -48)), 1));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (((min(var_5, 3))) ? (max(var_0, 183)) : (!var_6));
    var_11 = ((~(((~var_1) ? var_1 : var_4))));
    var_12 = (((((((max(86, 62)))) ^ var_2)) - -183));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 ^= (arr_5 [i_1]);
                arr_7 [3] = ((((((((arr_2 [i_0]) == -1254043855885260725)) ? (max(var_5, var_6)) : ((((arr_4 [i_0]) ? 24 : 0)))))) ? ((((min(0, 30494))) ? (max(2097144, 10948)) : var_0)) : 37));
            }
        }
    }
    #pragma endscop
}

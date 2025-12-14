/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_6, var_8));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = ((((max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 1])))) ? ((-21092659 ? 4 : 27629)) : var_3));
                var_12 = (((~var_4) & ((~(max((arr_4 [i_0 + 1]), 11772))))));
            }
        }
    }
    #pragma endscop
}

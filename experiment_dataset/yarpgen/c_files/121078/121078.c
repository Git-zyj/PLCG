/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((-23096 ? -22569 : 512152298));
    var_16 = (max(var_11, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (~512152304);
                    var_18 |= (((arr_5 [i_0] [i_0]) || ((((arr_5 [i_1 - 1] [i_1]) ? (arr_5 [i_1 + 2] [i_1 + 2]) : (arr_5 [i_1 + 3] [i_1 + 3]))))));
                    arr_7 [i_0] [i_1] [i_1] [9] |= var_0;
                }
            }
        }
    }
    var_19 = (max(var_19, (((var_11 - (((((var_10 ? var_4 : var_10))) ? (var_13 - var_11) : -512152295)))))));
    #pragma endscop
}

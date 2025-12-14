/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = ((26 ? -1653357350 : 1));
                var_16 = (var_10 ? 4425792022380033699 : (((((32239 ? 1 : 64680))) - (max((arr_1 [i_0]), (arr_1 [i_0]))))));
            }
        }
    }
    var_17 = (max(var_17, ((((max(var_5, ((var_14 ? var_13 : var_7))))) ? (var_11 ^ var_11) : ((var_8 | ((var_11 ? var_7 : var_3))))))));
    #pragma endscop
}

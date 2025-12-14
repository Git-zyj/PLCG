/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = 19670;
                var_11 = (min(var_11, (((~((max(var_2, (arr_2 [i_0] [i_1] [i_1 - 1])))))))));
            }
        }
    }
    var_12 = (!var_2);
    var_13 = (~var_2);
    var_14 = ((var_3 ? (((var_1 <= (min(var_4, var_5))))) : var_4));
    var_15 = (((1 + 1) & (((var_3 < (min(var_5, var_7)))))));
    #pragma endscop
}

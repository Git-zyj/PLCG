/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (arr_4 [i_0]);
                    var_18 = (max(var_18, (max((((0 ? 1 : 1))), ((min(((110 > (arr_6 [1]))), 1)))))));
                }
            }
        }
    }
    var_19 = (var_4 ? ((var_14 ? 4060053965 : ((max(var_8, var_12))))) : var_6);
    #pragma endscop
}

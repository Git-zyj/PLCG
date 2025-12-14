/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (-1 || -19450)));
    var_16 = var_2;
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = (1073733632 < var_14);
                    arr_7 [i_0] = (max((max((~3786565929), (var_11 || -85))), ((((arr_6 [i_2 - 1] [i_2 + 1]) ? (max(-1073733643, var_14)) : (max((arr_1 [i_0]), (arr_4 [i_0] [i_1]))))))));
                }
            }
        }
    }
    #pragma endscop
}

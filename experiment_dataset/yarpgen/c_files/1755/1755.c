/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, 0));
                    arr_7 [i_2] [i_1] [i_2] = (max((((max(var_0, (arr_2 [i_0 - 1]))) ? (((arr_3 [i_0 - 1] [i_1]) ? var_6 : 1)) : (~1))), (((max((arr_4 [i_1]), (arr_1 [i_1 - 1] [i_2])))))));
                    arr_8 [i_0] [i_1] [i_2] [i_1] = (~1);
                }
            }
        }
    }
    var_17 = var_11;
    var_18 = (((min((var_6 | var_9), ((min(var_3, 1))))) & ((min(1, (min(1, 1)))))));
    #pragma endscop
}

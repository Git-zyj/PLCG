/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((min((min(var_3, var_0)), (max(123, var_14)))), (((-(var_8 != var_10))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0] = var_4;
        var_16 = (((arr_0 [i_0 + 2]) ? (arr_0 [i_0 + 2]) : (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = ((-(arr_5 [i_1] [i_0 + 1] [i_0 + 2])));
                    var_18 = (arr_3 [i_2 - 1] [i_1 - 1] [i_0 + 2]);
                }
            }
        }
    }
    #pragma endscop
}

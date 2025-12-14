/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((max((arr_1 [i_1] [i_1]), 0)))));
                    var_21 = (max(var_21, (((127 ? (arr_4 [i_1 - 1]) : 562949949227008)))));
                    arr_9 [i_2] [i_1] [i_0] = (min((arr_7 [i_1 + 1] [i_1] [i_2]), (((-(var_15 ^ -20933))))));
                    var_22 = 126;
                    arr_10 [i_0] = 0;
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = (-9223372036854775807 - 1);
    var_21 = (max(var_1, 144115188075331584));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_22 = -1347635748;
                    var_23 = (((max((arr_7 [i_1 - 1] [i_1 + 3] [i_2]), -1347635747)) / (arr_7 [i_1 + 3] [i_1] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}

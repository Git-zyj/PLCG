/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (min((max((arr_1 [i_0]), 18446744073709551606)), (arr_4 [i_1])));
                arr_6 [1] = var_9;
            }
        }
    }
    var_19 = var_10;
    var_20 = var_1;
    var_21 = var_10;
    #pragma endscop
}

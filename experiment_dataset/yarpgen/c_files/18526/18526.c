/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18526
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [13] = (((var_15 >= 111) ? ((((arr_5 [i_0 + 1] [11] [i_0]) || 145))) : (arr_2 [i_1])));
                var_17 = (((arr_4 [i_0] [i_0]) != (max(var_16, (arr_6 [7] [4])))));
            }
        }
    }
    var_18 = (max(var_18, (!var_3)));
    #pragma endscop
}

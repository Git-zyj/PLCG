/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((-((max(115, 1))))), ((~(3474628696 || 140)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 1] [i_0] = (arr_1 [i_0]);
                var_21 = ((arr_2 [i_0 + 1]) ? ((max(749109577, 142))) : (max((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))));
            }
        }
    }
    #pragma endscop
}

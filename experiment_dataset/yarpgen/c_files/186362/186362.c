/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -118832819412122834;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_11 += ((~((~(arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                    arr_9 [i_0] [i_0] [10] [i_0] = ((!((max(var_1, (arr_5 [i_1 - 1]))))));
                    arr_10 [i_0] = ((~(((-127 - 1) ? 56348 : 56361))));
                }
            }
        }
    }
    #pragma endscop
}

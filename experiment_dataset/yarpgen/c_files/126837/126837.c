/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -167599816;
    var_11 = var_4;
    var_12 = (min(var_12, (((!(((var_9 + var_8) > var_6)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = ((!(((((((~(arr_2 [i_0] [i_1] [i_2]))) + 2147483647)) << (((arr_0 [i_0]) - 6773931547431747093)))))));
                    var_14 = (arr_0 [i_0]);
                    arr_7 [6] [i_1] [i_0] [i_1] = ((~((~(arr_0 [i_0])))));
                }
            }
        }
    }
    #pragma endscop
}

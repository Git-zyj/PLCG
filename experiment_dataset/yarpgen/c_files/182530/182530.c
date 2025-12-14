/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (!((((101 & 36028797018963967) & (((max(var_15, 250))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (min(((((arr_4 [i_0]) == var_1))), (max(var_5, (arr_7 [i_0] [i_2 + 1] [i_0] [i_2])))));
                    arr_10 [i_0] [i_0] [i_0] &= ((((max(((((arr_8 [i_2] [i_1] [i_0]) > (arr_6 [i_0] [i_0] [i_2])))), (max(12549214249093322003, var_6))))) ? ((min((((arr_5 [i_2] [i_2] [i_2]) ? (arr_2 [i_0] [i_1]) : 255)), ((~(arr_1 [i_2] [i_1])))))) : var_16));
                }
            }
        }
    }
    #pragma endscop
}

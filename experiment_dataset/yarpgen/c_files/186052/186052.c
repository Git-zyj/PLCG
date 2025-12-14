/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((var_4 ? (max(1, var_8)) : var_11)) * var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_16 ^= ((var_11 ? 25752 : (var_12 * -32751)));
                    var_17 = ((9068070681430974931 * (!var_1)));
                    arr_8 [i_0] [12] [21] [10] = 551105052;
                }
                arr_9 [i_0] = (min((((arr_4 [i_0 - 1] [i_1 - 1] [i_1 - 1]) ? 2552100679503743599 : (arr_3 [i_0 - 1] [i_1 - 1]))), 4));
            }
        }
    }
    #pragma endscop
}

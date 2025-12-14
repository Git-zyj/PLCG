/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_4;
    var_12 = ((((((var_2 ? 2002402262107728500 : var_9))) ? var_8 : ((max(var_4, var_1))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((((+(max((-32767 - 1), 1642899356))))) ? -7679204413569250771 : (arr_3 [i_0 - 3] [i_1])));
                var_14 -= arr_4 [i_0 - 2];
                var_15 = ((((((arr_1 [i_0 + 1]) | (arr_2 [i_0]))))) ? (min(((2048921390012510863 << (1642899354 - 1642899353))), (arr_3 [i_0 - 2] [i_1]))) : (arr_2 [i_0]));
                var_16 = (((((-(arr_1 [i_0 + 1])))) ? (arr_3 [i_0 - 3] [i_0 - 3]) : (max(var_10, (var_3 != 969380351)))));
                arr_5 [i_0] = ((((((((var_8 - (arr_1 [i_0 + 1])))) < (arr_4 [i_1])))) > (max(var_0, -var_6))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((-((min(var_4, var_9)))))), ((var_17 ? ((var_2 ? 0 : 8888051685590787704)) : -1710721619))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((min((arr_5 [i_1] [i_0]), (max((arr_0 [i_0]), 0))))) ? (((5 - 255) ? (arr_4 [i_1 + 1] [i_1 - 2] [i_1 + 1]) : (((arr_3 [i_0]) ? 1966080 : (arr_4 [i_0] [i_0] [i_0]))))) : ((~(~1966080)))));
                var_20 = (max((max((arr_5 [i_1] [i_1 - 1]), (arr_5 [i_0] [i_0]))), ((((arr_4 [i_0] [i_1 - 2] [i_0]) > ((-(arr_0 [8]))))))));
            }
        }
    }
    #pragma endscop
}

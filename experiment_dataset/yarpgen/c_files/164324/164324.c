/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max((0 ^ var_11), (var_1 - var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((!(max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 2]))))))));
                var_15 = (max(var_15, ((min((((arr_2 [i_1 - 1] [i_1 - 2] [i_1 - 1]) ? (arr_2 [i_1 - 3] [i_1 - 3] [i_1 - 4]) : (arr_2 [i_1 - 4] [i_1 - 4] [i_1 - 4]))), (arr_0 [i_1]))))));
            }
        }
    }
    #pragma endscop
}

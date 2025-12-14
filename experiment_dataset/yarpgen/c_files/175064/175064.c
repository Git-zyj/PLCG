/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] = ((((((((arr_2 [i_0] [6]) ? -1402485347 : 2613))) - ((204404680 - (arr_4 [3]))))) / (((((6816080831250013321 ? (arr_1 [i_0]) : 11630663242459538295)))))));
                var_15 = (min((arr_0 [i_0]), (((!(arr_1 [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}

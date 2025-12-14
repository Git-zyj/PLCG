/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (((((((arr_7 [i_2] [i_1] [i_1] [i_0]) ? (arr_6 [i_0] [i_0] [i_2] [i_0]) : (max(-124, (arr_2 [i_0])))))) ? (arr_6 [i_0] [22] [i_1] [i_2]) : (arr_5 [i_0] [i_1] [i_0]))))));
                    arr_8 [i_0] |= (((arr_2 [i_0]) ? (arr_2 [i_0]) : (14912539045121557296 + 94)));
                }
            }
        }
    }
    var_19 = (max(var_19, (((min((max(-8490235572510919338, 14912539045121557296)), (!-124)))))));
    var_20 *= var_7;
    #pragma endscop
}

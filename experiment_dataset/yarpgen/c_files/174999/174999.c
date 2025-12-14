/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-520636021 - -1);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1 + 1] [7] [i_2] = (max((min((max((arr_3 [i_0]), 27)), ((255 ? 26736450 : 133)))), (((arr_6 [i_0 - 1] [i_1]) - (arr_6 [i_0 - 3] [i_0 - 2])))));
                    var_18 = ((arr_3 [i_0 + 1]) - (min((arr_1 [i_0 - 1] [i_0 - 3]), (((arr_0 [3]) ? (arr_8 [i_0] [i_1 - 1] [5]) : (arr_2 [i_2]))))));
                }
            }
        }
    }
    var_19 = ((var_16 - (((min(var_7, var_16)) - var_14))));
    var_20 = (max(-4, ((var_1 - (~var_16)))));
    #pragma endscop
}

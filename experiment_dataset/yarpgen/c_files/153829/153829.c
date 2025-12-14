/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max(((min(-124, 31))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = arr_2 [i_0] [i_0] [i_1];
                var_11 |= min((arr_2 [1] [i_1] [i_1]), (min(var_0, -93)));
                var_12 = ((1 ? var_1 : (arr_2 [i_0] [i_1] [i_1])));
                arr_7 [i_0] [3] [i_1] = (min((((max(128, 7370472930659881043)) - (((max(24576, (arr_1 [12]))))))), var_4));
            }
        }
    }
    #pragma endscop
}

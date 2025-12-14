/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(-36, -var_7));
    var_13 = var_11;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_1] = 39;
                var_15 = (min((max(11033286147382867376, (61 + 250))), (arr_5 [i_0] [i_1 - 1])));
                arr_8 [i_1] = (max(((max(1, (arr_5 [14] [i_1 - 1])))), ((1683277384 >> (((arr_1 [i_0] [i_1 - 1]) - 4998))))));
                var_16 = 8191;
            }
        }
    }
    var_17 = ((((max(27, var_6))) != (min(var_11, var_3))));
    #pragma endscop
}

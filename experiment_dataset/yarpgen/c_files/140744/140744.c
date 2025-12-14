/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((-76 && ((!(arr_0 [i_0 + 4]))))))));
                var_19 = ((-(((min(var_6, (arr_1 [i_0] [i_1]))) / -76))));
                var_20 = (((((arr_4 [i_1] [i_0 + 1] [i_0 - 1]) ? (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_4 [i_1] [i_0 + 4] [14]))) + (arr_5 [i_0 + 4] [i_0 + 1] [i_0 + 1])));
                var_21 = ((var_16 >> (((arr_5 [i_0] [i_1] [6]) - 10429074240209024555))));
            }
        }
    }
    var_22 &= var_9;
    #pragma endscop
}

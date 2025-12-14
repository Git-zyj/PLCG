/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = ((var_2 & (((~8) ^ 202))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (((arr_4 [i_0] [i_0] [i_0]) - 134184960));
                var_17 = (127 / 3);
                var_18 = ((((30 ? ((37 ? var_13 : -23742)) : (12 == var_8))) * var_9));
            }
        }
    }
    var_19 = (max(var_19, (((var_13 / (((var_12 - var_8) ^ (((max(var_11, var_11)))))))))));
    var_20 = ((~((max(var_9, var_10)))));
    #pragma endscop
}

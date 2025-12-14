/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (((((((max(var_13, 122))) - ((0 ? 1 : 308915433))))) - ((var_6 + (var_5 - var_13)))));
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((var_12 ? (arr_0 [i_1 - 2] [i_2 + 1]) : (((var_7 ? (arr_7 [i_0] [15]) : var_10)))));
                    var_18 = (34847774755372775 ? 8082 : 24);
                    var_19 -= min((((arr_6 [i_0]) / (1 * 57452))), ((((arr_8 [i_2 + 1] [i_2 + 2]) < (arr_8 [i_2 - 2] [i_2 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}

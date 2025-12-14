/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 63669;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = (!-var_1);
                    arr_9 [i_0] [i_2] [i_0] [i_0] = -10972;
                    var_19 = (max(var_19, (((-(((arr_0 [i_0] [i_1]) ? var_3 : (arr_3 [i_0] [i_1 - 2]))))))));
                }
            }
        }
    }
    var_20 = (~var_12);
    var_21 = var_2;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [3] [14] = ((var_8 <= (arr_2 [i_0] [i_2 + 1] [i_2])));
                    arr_9 [i_0] [i_0] [i_0] = (~804);
                    var_16 = ((((((arr_3 [i_0] [i_1]) ^ var_0)) * (arr_2 [i_2] [i_1] [i_0]))));
                }
            }
        }
    }
    var_17 = var_0;
    var_18 = (max(var_18, ((((var_15 ? var_7 : ((max(var_6, var_10)))))))));
    #pragma endscop
}

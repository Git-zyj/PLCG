/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!-237799853073137273);
    var_20 = -8331;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = 1269922745;
                    var_22 = (!1269922744);
                    var_23 = ((~((((arr_5 [i_0] [i_1]) >= -3706084596258715658)))));
                    arr_7 [i_0] [i_1] [9] [i_0] = (arr_2 [22] [i_2]);
                }
            }
        }
    }
    var_24 = var_14;
    #pragma endscop
}

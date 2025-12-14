/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [13] [0] [0] = (max((((var_10 ? -var_11 : -var_5))), -4294967295));
                    arr_9 [i_0 + 1] [13] [13] [i_2 + 2] = var_13;
                    var_15 = (max(var_15, (((var_14 >= ((-((((arr_5 [i_1]) >= 2385315209))))))))));
                }
            }
        }
    }
    var_16 = 2385315216;
    var_17 |= (min((max(var_5, ((var_14 ? 1909652099 : 2385315178)))), var_2));
    #pragma endscop
}

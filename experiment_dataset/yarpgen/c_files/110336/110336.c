/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((var_16 + (~var_17))))));
    var_19 ^= (288230376151711680 % var_15);
    var_20 = (min(((~(min(2424049508873359638, var_14)))), var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((min((((min(384, 30339)))), var_4)))));
                    arr_6 [i_0] [12] = var_1;
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((+(max((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [5])))));
                }
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}

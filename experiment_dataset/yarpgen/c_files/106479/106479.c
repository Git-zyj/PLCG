/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_4);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [9] [i_0] = 3168039804325985872;
        arr_3 [i_0 + 2] [i_0] = ((239 ? -3168039804325985872 : -4028));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_13 = ((!((max((arr_1 [i_0]), 22029)))));
                        var_14 = 4027;
                        var_15 = ((arr_0 [i_0]) * (((!(arr_10 [i_3])))));
                    }
                }
            }
        }
        arr_12 [i_0] = ((((max((arr_6 [i_0 - 1] [i_0]), var_11))) ? var_8 : 7169680533111779194));
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_17 [i_4] = (var_3 / var_6);
        var_16 = ((!((min((arr_6 [i_4] [i_4]), 1)))));
    }
    var_17 = var_3;
    #pragma endscop
}

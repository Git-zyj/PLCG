/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = (((min(((var_12 ? 49 : var_13)), var_9)) << (var_2 - 3131595848)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((((max(((min((arr_5 [i_0]), 1610612736))), var_8))) ? ((-1610612730 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : 1631008751));
                    var_18 = (min(var_18, ((((arr_6 [i_2] [i_1] [i_2]) ? ((-(arr_6 [i_2] [i_1] [i_2]))) : (((((arr_6 [i_2] [i_1] [i_2]) > (arr_6 [i_2] [i_1] [i_2]))))))))));
                }
            }
        }
    }
    #pragma endscop
}

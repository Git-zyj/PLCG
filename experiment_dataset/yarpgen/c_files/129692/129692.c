/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((((arr_5 [i_2] [i_2] [i_1 + 1] [i_1 + 1]) ? var_2 : var_11)) > ((var_6 ? (129 != 127) : (arr_4 [i_0] [i_0]))));
                    var_16 = (max(var_16, var_1));
                }
            }
        }
    }
    var_17 = ((var_2 ? (896 + var_3) : ((((var_3 << (var_10 - 3599555109251474956))) >> (((max(var_5, var_14)) - 7948073930585302317))))));
    var_18 = 127;
    #pragma endscop
}

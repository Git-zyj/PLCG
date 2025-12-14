/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((((((62804 ? var_18 : 4095))) | (((arr_5 [i_0]) ? var_14 : var_11)))))));
                    arr_10 [i_0 - 2] [i_1] [i_1] [i_0] = (max((((arr_6 [i_2] [i_1] [i_1] [i_0 - 1]) > (arr_6 [i_0] [i_1] [i_2] [i_2]))), (4095 < var_18)));
                }
            }
        }
    }
    var_20 = var_15;
    var_21 = (min(var_1, ((65535 ? var_16 : (((61440 ? var_17 : 102)))))));
    #pragma endscop
}

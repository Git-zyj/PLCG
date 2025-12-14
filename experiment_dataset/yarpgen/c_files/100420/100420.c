/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 2711114061;
        arr_4 [i_0] |= (arr_1 [i_0] [i_0]);
        var_15 &= (min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))), ((var_7 ? (arr_1 [i_0] [i_0]) : 108))));
        arr_5 [i_0] [i_0] = 65535;
        var_16 = var_3;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] = 1306540641;
        arr_9 [i_1] = (max((arr_0 [i_1]), (((arr_6 [i_1]) >> (((30 + -44) + 37))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_17 -= ((!((!(!2147483647)))));
                        arr_18 [i_1] [i_1] = ((~((var_3 / (min(var_13, (arr_11 [i_1] [i_2] [i_3])))))));
                    }
                }
            }
        }
        arr_19 [i_1] = (127 / var_0);
    }
    #pragma endscop
}

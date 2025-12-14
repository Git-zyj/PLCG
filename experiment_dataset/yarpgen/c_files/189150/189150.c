/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 |= (max(((min(0, 30281))), (min(((var_8 ? (arr_1 [12]) : 1)), ((1905374800 ? 42 : 601640971742390885))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_11 = (min(var_11, (((-((((((arr_7 [i_0] [i_1]) > 65535))) * 0)))))));
                        var_12 = (max(var_12, (arr_5 [12] [i_3] [i_2])));
                        var_13 |= ((var_4 <= (arr_8 [i_0] [i_1])));
                        var_14 = 65535;
                        var_15 = (arr_4 [i_0] [i_0] [i_3]);
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_12 [i_4] [2] = (min((min((arr_11 [i_4]), 255)), 255));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_16 = (max(var_16, 65535));
            var_17 = (!var_7);
        }
        var_18 = 65535;
        var_19 = ((var_0 | ((min((min(1, (arr_13 [i_4]))), 1)))));
    }
    var_20 |= -851648053;
    #pragma endscop
}

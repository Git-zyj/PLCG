/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(var_0, -var_16)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = arr_1 [6] [i_0];
        var_22 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = (((-(arr_2 [i_1] [i_1]))));
        var_24 = ((((((var_2 ? -9223372036854775795 : 84)))) ? (((arr_3 [i_1]) ? var_16 : (arr_0 [1]))) : (((((min(1, var_13))) ? ((var_3 << (var_3 - 8009))) : (arr_1 [i_1] [i_1]))))));
        arr_4 [i_1] [0] &= 1;
        var_25 -= ((var_9 & ((~(((arr_3 [i_1]) >> (var_7 + 1073307104)))))));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_26 = var_18;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 11;i_5 += 1)
                {
                    {
                        var_27 = (var_12 || var_6);
                        arr_15 [i_2] [i_3] [i_2] = min((arr_3 [i_2 - 1]), (arr_14 [i_3] [i_3] [3]));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_18 [16] = (max((max((arr_16 [i_6]), (arr_16 [i_6]))), 0));
        arr_19 [i_6] = ((var_13 || (~248)));
        arr_20 [i_6] = (max(((9841047421167325026 ? (((arr_17 [i_6] [i_6]) ? (arr_17 [i_6] [i_6]) : -7254636623993862305)) : (arr_17 [9] [i_6]))), (((~(!var_19))))));
    }
    #pragma endscop
}

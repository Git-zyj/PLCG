/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_14 |= ((max(((arr_5 [i_0] [i_1 + 1]), (((var_0 - (arr_7 [i_0]))))))));
                        var_15 = (min((((~(arr_9 [i_1 + 1] [i_2])))), -var_7));
                        var_16 = min(((-(min(63, var_6)))), ((((arr_6 [i_0] [i_2] [9]) ? 63 : 765512891))));
                    }
                }
            }
        }
        var_17 = (-var_9 ? (max((arr_5 [i_0] [i_0]), -1866882916)) : (((var_1 >> (((arr_4 [i_0] [i_0]) + 21786))))));
        arr_10 [i_0] = 60;
    }
    var_18 = ((((max(-98, 765512866))) / var_5));
    var_19 = (min(((var_1 ? 2146435072 : (min(var_8, var_11)))), (var_10 & -var_1)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((var_9 ? (((((var_7 ? var_5 : var_8))) ? ((var_14 ? var_15 : var_4)) : (((var_13 ? var_4 : var_0))))) : var_0));
    var_20 = (min(var_20, (((((((((var_2 ? var_12 : var_18))) ? ((var_9 ? var_13 : var_10)) : var_6))) ? var_18 : (((((var_16 ? var_3 : var_4))) ? ((var_6 ? var_4 : var_16)) : (((var_0 ? var_17 : var_12))))))))));
    var_21 = (((((4396212155233309195 ? -53 : ((64118 ? -79 : var_17))))) ? 246 : var_9));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_22 = (max(var_22, (arr_7 [i_0] [i_1] [1] [1])));
                        arr_8 [i_0] [i_2] [i_2] [i_2] [i_0] = (arr_1 [i_0]);
                        var_23 = (((arr_3 [i_0] [i_1]) ? ((((((arr_4 [i_1] [i_2]) ? (arr_0 [i_1]) : (arr_4 [i_0] [i_0])))) ? (arr_0 [i_2]) : (arr_2 [i_0] [i_0]))) : ((((((arr_7 [i_3] [i_2] [19] [i_0]) ? (arr_1 [9]) : (arr_6 [i_0] [i_0] [19] [i_3])))) ? (arr_2 [i_0] [i_1]) : ((((arr_3 [i_0] [i_0]) ? (arr_4 [i_3] [i_0]) : (arr_4 [i_1] [i_2 - 1]))))))));
                        var_24 ^= (((arr_4 [i_0] [i_0]) ? (((arr_2 [i_0] [i_0]) ? ((((arr_3 [i_0] [i_0]) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (arr_1 [i_1])))) : ((53 ? 962072674304 : (arr_7 [i_0] [i_0] [i_0] [i_0]))))) : (arr_1 [i_1])));
                    }
                }
            }
        }
        var_25 = (min(var_25, (arr_3 [i_0] [i_0])));
        var_26 = (arr_1 [i_0]);
        var_27 += (arr_7 [i_0] [i_0] [i_0] [i_0]);
        arr_9 [i_0] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}

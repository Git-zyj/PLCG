/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187694
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((+(((var_7 || var_3) ? (var_2 && var_11) : (var_7 || var_6)))));
    var_14 -= var_11;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_15 = (max(var_15, (((((((arr_1 [i_0]) | 127))) ? ((-(arr_0 [i_0] [i_0]))) : (((arr_1 [i_0]) ? (arr_1 [i_0]) : 54874)))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_7 [i_0] [i_1] [10] [10])));
                    var_17 = (min(var_17, (((-(min(((max(var_4, (arr_5 [i_1] [10] [i_1])))), (~-3779245963568411806))))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        var_18 += var_12;
        var_19 += (-108 > 161646998);
    }
    var_20 += ((~((19 ? (var_12 ^ -1118328978) : var_9))));
    #pragma endscop
}

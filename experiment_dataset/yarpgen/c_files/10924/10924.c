/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_5, (((((var_11 ? var_4 : var_11)) > (((var_15 << (var_3 - 1263110874983575549)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [4] = (((arr_2 [i_0]) ^ (arr_2 [i_0])));
        arr_4 [i_0] = ((((((arr_1 [i_0]) && (arr_2 [i_0])))) / var_16));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 += var_13;
                    var_20 = (((arr_2 [i_0]) - (arr_1 [i_1])));
                    var_21 = var_7;
                }
            }
        }
        var_22 = (arr_0 [i_0] [1]);
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        arr_13 [11] [i_3] = (((((-((max(var_15, var_14)))))) ? ((var_14 - (arr_11 [i_3 + 2]))) : (((((var_13 >= (arr_10 [i_3] [i_3] [i_3] [i_3]))) && var_17)))));
        var_23 = (((((-((((arr_11 [i_3]) || var_5)))))) + ((var_7 ? (arr_6 [i_3 - 2] [i_3]) : ((var_9 ? var_3 : (arr_5 [i_3])))))));
        var_24 = (-((((arr_2 [i_3 - 3]) != (arr_2 [i_3 - 2])))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_25 -= var_4;
        var_26 &= (arr_14 [i_4]);
    }
    var_27 *= (((((~var_6) == (var_14 | var_13))) && var_9));
    var_28 = var_13;
    #pragma endscop
}

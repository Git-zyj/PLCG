/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_10 ? var_17 : var_9)) * (((var_16 ? var_8 : var_4)))))) ? (((((var_15 ? var_16 : var_2))) ? var_9 : (var_4 ^ var_15))) : var_5));
    var_19 = (var_5 | var_17);
    var_20 = ((((((var_16 && var_11) >> (((var_9 % var_13) - 117))))) == ((((var_6 ? var_13 : var_10)) >> ((var_8 ? var_4 : var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_1] = (((arr_3 [i_1]) ? (arr_1 [i_2]) : (((arr_6 [i_1] [1] [i_1]) * (arr_5 [i_2])))));
                    arr_9 [i_1] [i_1] [i_1] [i_2] = (((arr_1 [i_0]) ? (((arr_5 [13]) ^ (arr_4 [7] [i_1] [i_2]))) : (arr_4 [17] [i_1] [i_0])));
                }
            }
        }
        arr_10 [i_0] = ((1270971832443894522 ? 1184450380 : 60));
        arr_11 [i_0] = ((((((arr_3 [i_0]) ? (arr_4 [1] [i_0] [6]) : (arr_2 [7] [7] [i_0])))) ? ((((arr_5 [i_0]) ? (arr_1 [i_0]) : (arr_4 [i_0] [i_0] [i_0])))) : (arr_2 [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}

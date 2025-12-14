/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((var_6 && (((var_7 ? var_12 : var_10))))) ? ((var_19 ? ((131071 ? var_2 : var_7)) : var_5)) : -1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (((((-((-(arr_0 [i_1 - 2])))))) ? ((((arr_4 [i_0] [i_1 - 2]) | (arr_5 [i_0 + 1] [i_0] [i_1 - 1])))) : (min(127, (arr_1 [i_0 - 1])))));
                var_22 = (arr_0 [7]);
            }
        }
    }
    var_23 = (min(var_23, ((((((((var_5 ? var_14 : -1)) & var_2))) * (((((var_2 ? var_3 : var_17))) ? -2147483647 : (var_15 & -16))))))));

    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2 - 2] [i_2] = (((((max((arr_8 [i_2]), (arr_7 [i_2])))) ? (arr_9 [i_2]) : (arr_8 [i_2]))));
        var_24 = (min(var_24, (arr_7 [6])));
        arr_11 [i_2 - 1] [i_2] = ((((((arr_9 [i_2 + 1]) ? (arr_9 [i_2 + 1]) : (arr_8 [i_2 - 1])))) ? (((!(arr_7 [i_2])))) : (((arr_8 [i_2 - 1]) ? (arr_9 [i_2 - 2]) : (arr_9 [i_2 + 1])))));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_25 = (max(var_25, -var_17));
        var_26 = (((arr_8 [i_3]) ? (max((arr_1 [i_3]), (((arr_13 [i_3] [i_3 + 1]) ? -1 : var_7)))) : (((-18 ? var_19 : (arr_5 [i_3 + 1] [i_3] [i_3 - 1]))))));
        var_27 = (9223372036854775807 ? (((arr_6 [i_3 - 1] [i_3]) ? (arr_1 [i_3 + 1]) : (arr_5 [i_3 + 1] [19] [i_3 + 1]))) : (((((max(-28, 128))) ? (-2147483647 - 1) : (arr_12 [i_3] [i_3])))));
        var_28 = (arr_12 [i_3] [i_3]);
        arr_14 [i_3] = (arr_6 [i_3 + 1] [i_3 + 1]);
    }
    #pragma endscop
}

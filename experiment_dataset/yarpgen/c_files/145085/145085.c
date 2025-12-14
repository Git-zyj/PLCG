/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_15 ? ((1174831426 ? 10677280691202196712 : 0)) : (127 - var_0))) >> (var_15 - 6227056978083403071)));
    var_20 = (min(var_20, var_15));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_21 += ((var_11 ? -602875520 : (max(923529315492737181, var_10))));
        var_22 = (arr_2 [i_0]);
        var_23 |= (max((max((arr_2 [i_0 - 3]), 16777215)), ((max(-605733280, (var_3 - 106))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((var_0 * (arr_5 [i_1 + 1])));
        arr_8 [i_1] = (((((!(arr_1 [i_1 - 1])))) >= ((var_13 ? var_10 : 0))));
        arr_9 [i_1] = ((~(arr_2 [i_1])));
    }
    var_24 = (min(var_24, (((!((max(var_18, (max(var_2, -8063155837269335829))))))))));
    var_25 = ((-((-var_5 ? var_17 : var_6))));
    #pragma endscop
}

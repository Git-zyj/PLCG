/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(2147483647, ((((min(var_1, var_11))) - (0 || 18446744073709551615)))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [10] = var_1;
        var_13 = ((((min((arr_1 [23]), (((arr_1 [i_0]) ? 8973 : (arr_0 [i_0])))))) ? -7181 : (((1768399100 ? 8973 : 8973)))));
        var_14 = (min(56562, ((-(min(-2147483626, (arr_0 [i_0])))))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = var_8;
            arr_6 [i_1] [i_1] = (min((arr_0 [i_0]), (arr_4 [i_0])));
            arr_7 [i_1] = (min(((((max(8985, 56563))) ? 14 : 14)), 56590));
        }
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            arr_10 [24] [17] = -32764;
            arr_11 [i_0] [i_0] = ((~(arr_1 [i_0])));
        }
        arr_12 [i_0] = (((((17728478 & (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? var_10 : (arr_9 [i_0] [i_0]))) : (((arr_0 [i_0]) / (arr_3 [i_0] [i_0])))));
    }
    var_15 = var_6;
    #pragma endscop
}

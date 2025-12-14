/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((-(~0)));
        var_20 = (max(1, 114688));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [17] [i_1] = (3035006674 <= 18446744073709551615);
        var_21 = min((max(23, 1)), (arr_0 [i_1]));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        var_22 = (((!((((arr_8 [1]) ? (arr_4 [i_2] [i_2]) : var_6))))));
        var_23 = (arr_7 [i_2] [i_2]);
        arr_10 [i_2] = ((!(arr_9 [i_2])));
        arr_11 [i_2] = var_5;
        var_24 = (arr_7 [i_2] [i_2]);
    }
    var_25 = var_16;
    var_26 = (min(((-10803 ? -1 : 18446744073709551615)), (((!(~var_0))))));
    #pragma endscop
}

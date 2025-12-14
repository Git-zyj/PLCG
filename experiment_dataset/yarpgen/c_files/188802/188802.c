/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [8] |= (max((var_8 == var_4), (arr_3 [6])));
        arr_5 [i_0] [i_0] = (min(var_11, ((((arr_2 [i_0 - 1] [i_0 + 1]) ? ((max((arr_3 [i_0]), var_2))) : (arr_1 [i_0 - 1]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = ((!11369486685240293531) == (arr_7 [i_1]));
        var_18 = arr_7 [15];
        var_19 = (min(var_19, (((~((((arr_8 [i_1]) < (((!(arr_6 [i_1] [i_1]))))))))))));
    }
    var_20 ^= var_6;
    var_21 = -7077257388469258074;
    #pragma endscop
}

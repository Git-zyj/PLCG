/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(var_19, (arr_1 [i_0])));
        var_20 = (((arr_0 [i_0]) ? (((max(2, 1)))) : (max((arr_0 [i_0]), (arr_1 [i_0])))));
        var_21 += (max((arr_1 [i_0]), (max((arr_1 [i_0]), (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_22 = (arr_3 [i_1]);
        arr_4 [i_1] &= (((max((arr_3 [i_1]), (arr_3 [i_1]))) ^ (((!(arr_3 [i_1]))))));
        var_23 = (max(1023, 1));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_24 = (((((((((arr_2 [i_2]) ^ var_14))) ? (arr_8 [i_2]) : (max((arr_7 [i_2] [i_2]), var_2))))) ? ((max((arr_5 [i_2]), (arr_5 [i_2])))) : ((max(var_13, (arr_5 [i_2]))))));
        var_25 = (((arr_8 [i_2]) > var_14));
        var_26 = (max((~var_18), (max(((max(var_14, var_6))), var_18))));
        var_27 = var_7;
    }
    var_28 = ((var_15 ? (max((!-30972), (~var_16))) : (((103 ? (var_18 && var_4) : (!var_10))))));
    var_29 += var_17;
    #pragma endscop
}

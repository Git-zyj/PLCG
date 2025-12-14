/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((0 + var_4) == ((18480 ? 32760 : 32767)))) ? 492328149 : ((((max(var_2, var_10))) ? var_2 : (~var_6))));
    var_12 = ((((max((var_0 + -2073429073), (var_3 && var_4)))) ? ((min(var_6, (var_8 < var_0)))) : ((((max(var_0, var_5))) ? (min(435423003, var_10)) : var_7))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((~(((arr_1 [i_0] [i_0]) ? var_7 : (arr_0 [i_0] [i_0])))));
        var_14 = ((arr_0 [i_0] [i_0]) ? (((((arr_1 [i_0] [i_0]) / var_1)) & (((arr_1 [i_0] [i_0]) ? (arr_0 [3] [i_0]) : (arr_0 [1] [1]))))) : (arr_0 [i_0] [i_0]));
        var_15 = ((((-21571 ? (((!(arr_1 [3] [3])))) : (arr_0 [i_0] [i_0]))) * (((arr_1 [i_0] [i_0]) ? var_3 : var_3))));
        var_16 = (-(~0));
        var_17 = (min(var_17, (arr_1 [i_0] [i_0])));
    }
    var_18 = (max((~-21567), ((max(0, (!-21571))))));
    var_19 = 0;
    #pragma endscop
}

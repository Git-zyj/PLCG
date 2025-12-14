/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((110 < (((146 & var_19) ? ((min(57, var_17))) : ((199 ? 0 : var_2))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = (min(var_21, (((((max(112, ((57 ? 151 : 192))))) ? 169 : (((167 - 5) ? 115 : 3)))))));
        var_22 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) > (((arr_0 [i_0]) ? 145 : 41))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_23 = arr_3 [i_1] [i_1 + 2];
        arr_5 [14] |= (~232);
    }
    var_24 = ((-((65 ? 255 : 108))));
    var_25 = var_3;
    var_26 = (min(var_26, var_19));
    #pragma endscop
}

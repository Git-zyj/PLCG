/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0]) & -24))) | -6898963988849984800));
        arr_5 [6] |= (min(var_1, ((~(arr_2 [1])))));
        var_16 = ((min(var_1, var_12)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_17 -= ((((min(((var_6 ? 7659355134573921973 : var_7)), (~var_7)))) ? ((1572221190 ? 0 : (~var_12))) : (((~228) ^ (2 | var_1)))));
        var_18 = ((-(((arr_6 [i_1]) ? (arr_8 [i_1] [i_1]) : (arr_6 [i_1])))));
        arr_9 [i_1] = ((((-530984408745270490 | (((1325996122 ? 1 : var_12))))) | (arr_3 [i_1])));
    }
    var_19 = (max(var_19, ((((~7298) ? (min(0, 530984408745270490)) : var_4)))));
    #pragma endscop
}

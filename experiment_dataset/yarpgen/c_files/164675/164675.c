/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (min((((arr_2 [i_0]) ? (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : 174)) : (arr_0 [i_0]))), ((((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))))));
        arr_3 [i_0] = (max(((min((arr_2 [i_0]), (~var_18)))), ((((max(var_1, 491359067))) ? ((0 ? var_6 : 12341)) : (var_10 <= 64)))));
    }
    var_21 &= (((max(((min(24970, -49))), ((var_4 ? -36 : 491359067)))) | var_2));
    var_22 = ((((~var_1) ? ((var_12 >> (var_13 - 52266))) : (~var_4))) << ((((~((min(var_2, 0))))) + 4)));
    #pragma endscop
}

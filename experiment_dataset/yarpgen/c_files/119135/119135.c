/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = (max(((max((arr_1 [i_0]), ((((arr_0 [i_0]) << (15701 - 15685))))))), (min((arr_0 [i_0]), (max(35777, 2))))));
        var_20 -= (-(((8591130349736358824 != var_5) ? (arr_0 [0]) : var_6)));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_21 += var_3;
        var_22 = (((((((29758 % (arr_2 [i_1]))) - (arr_2 [i_1 - 1])))) ? (max(((var_7 * (arr_5 [i_1] [i_1]))), (max(8388607, var_17)))) : (max((31430 || var_6), -1))));
        var_23 |= (((((((arr_3 [i_1]) << (var_7 - 47770))) * (!9007199254740991))) >= ((((var_13 && (((9223372036854775804 ? -1 : 35778)))))))));
    }
    var_24 = (min(var_24, var_3));
    #pragma endscop
}

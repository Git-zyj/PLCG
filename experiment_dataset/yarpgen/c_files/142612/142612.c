/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 = 13546876342202673171;
        var_18 = (max((((!(arr_2 [i_0] [i_0])))), (-var_14 + 4899867731506878450)));
        var_19 = var_16;
        var_20 = (((((~(arr_1 [i_0] [i_0])))) ? ((((!((max(13546876342202673171, 80))))))) : (max(10292071629709034389, var_12))));
        var_21 = (max(var_21, (((((!((max((arr_0 [i_0]), 1253657966))))) ? (max(-1800251021, 80)) : (!1))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_22 = max((~9262296208715727301), (((-(arr_3 [i_1])))));
        arr_6 [1] [5] = (max((!var_1), (((arr_5 [i_1] [i_1]) ? var_8 : 1))));
    }
    var_23 |= ((9184447864993824310 ? 9262296208715727288 : ((((!((max(465058179181811587, 17981685894527740028)))))))));
    var_24 = var_1;
    #pragma endscop
}

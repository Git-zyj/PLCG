/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (((~((var_8 ? var_0 : 102)))));
    var_14 = ((!((!(!248)))));
    var_15 = (((!(!var_4))) ? (((~var_12) ? ((var_4 ? -504 : var_11)) : 4540449080080434950)) : -1920);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((~((~(((!(arr_2 [i_0]))))))));
        var_16 &= (~-1728112604);
        var_17 = (!-1994258667);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 &= (((arr_7 [i_1]) ? (!var_3) : ((4540449080080434952 ? 0 : 254))));
        arr_8 [i_1] = ((~(((arr_5 [i_1] [i_1]) ? (arr_7 [i_1]) : 244))));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_19 = (((!var_2) ? (((!(~var_2)))) : ((~(~var_1)))));
        var_20 -= (arr_11 [i_2]);
        var_21 |= (((((~(((arr_0 [i_2]) ? var_1 : 23538))))) ? -1994258667 : (((!(~154))))));
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = ((~((~(arr_2 [i_3])))));
        var_22 = (((!var_7) ? (!2475) : 18338602536244775117));
    }
    var_23 = ((((!(~var_2))) ? (((!(((4199459754 ? 12 : 0)))))) : (((((var_12 ? var_0 : 102))) ? var_3 : (!var_8)))));
    #pragma endscop
}

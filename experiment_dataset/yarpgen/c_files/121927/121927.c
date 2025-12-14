/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 &= (((((arr_3 [i_0 - 1]) && (arr_0 [i_0 + 2] [i_0 + 2]))) ? ((var_12 * (arr_0 [i_0 - 1] [i_0 - 1]))) : ((-(arr_3 [i_0 + 1])))));
                arr_5 [i_1] = ((((var_0 ? ((var_14 ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [18]))) : ((max(var_0, (arr_0 [i_0] [i_1]))))))) ? ((((arr_0 [i_0] [i_1]) ? (4803225276930171370 > -4803225276930171370) : (~var_15)))) : (max(var_6, var_15)));
                arr_6 [i_1] [i_1] = (((((!((((arr_0 [i_0] [i_1]) << (((((arr_2 [i_0 + 2] [i_0]) + 1961323419)) - 20)))))))) >> (((((((56 ? -4803225276930171371 : -4803225276930171390))) % -var_1)) - 13643518796779380217))));
                var_18 &= (((((0 ? 4803225276930171374 : 6109985264661552437))) ? var_16 : var_16));
            }
        }
    }
    var_19 = (max(var_19, (((var_7 * (((var_11 / var_6) ? var_1 : (((var_4 ? var_16 : var_13))))))))));
    #pragma endscop
}

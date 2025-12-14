/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = (((((-var_10 && (var_11 && var_12)))) - var_7));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = ((var_5 ? (var_2 >= var_6) : var_1));
        var_20 -= (((((var_14 ? var_16 : var_7))) || (!var_15)));
        arr_2 [i_0] [i_0] = (!var_10);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [9] = ((((((~var_13) | var_14))) ? (~var_10) : (~var_9)));
        var_21 = ((var_0 != (!var_10)));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_22 = (min(var_22, ((((((var_13 ? var_15 : var_13))) ? var_3 : (~var_15))))));
                        var_23 = (min(var_23, ((((!var_5) ? (((!(var_0 >> var_0)))) : ((((var_4 ? var_10 : var_13)) - ((var_15 ? var_11 : var_12)))))))));
                    }
                }
            }
        }
        arr_14 [i_1] [i_1] = (((((((var_6 ? var_3 : var_16))) ? ((var_3 ? var_7 : var_1)) : (var_7 < var_3)))) ? ((var_6 ? var_0 : var_10)) : (!var_8));
    }
    #pragma endscop
}

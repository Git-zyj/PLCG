/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 1; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = min((min((arr_1 [i_0]), var_7)), (((+(((arr_0 [i_0 - 1]) | 1))))));
        var_16 = (max(var_16, (((((((134201344 <= -26) ? (arr_0 [i_0]) : var_3))) ? ((8548263196118460291 - (((var_14 ? (arr_0 [6]) : var_1))))) : (((((var_14 ? (arr_0 [i_0 - 1]) : (arr_0 [12])))) + var_8)))))));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [18] &= (((((((var_2 ? var_4 : var_1))) ? var_7 : (min(-134201349, var_12)))) | -14));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_17 = ((var_1 & var_6) ? ((((arr_8 [17] [i_1 + 2] [i_1]) ? (31895 && var_8) : ((-(arr_4 [i_1] [1])))))) : (((arr_1 [i_1]) ? (((-(arr_9 [4] [i_1])))) : ((var_12 ? var_1 : var_12)))));
                    var_18 = (min(var_18, (((!(~var_10))))));
                    var_19 &= ((3466748114 ? -4 : 31895));
                }
            }
        }
    }
    var_20 = ((var_12 ? var_0 : (((((31883 && var_12) > var_7))))));
    #pragma endscop
}

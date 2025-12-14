/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = ((((((arr_5 [i_0] [i_1] [i_2]) ? (arr_8 [i_0] [i_1 + 1] [i_1] [i_0]) : ((var_1 ? var_16 : var_15))))) ? (arr_2 [i_0]) : ((-31907 ? (((var_10 + (arr_3 [i_0] [i_0] [i_0 + 2])))) : ((-(arr_5 [i_0 + 3] [i_1 + 1] [i_2])))))));
                    arr_10 [i_0] [i_0] [i_2] = var_16;
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        var_20 = ((((~(arr_11 [i_3 + 1]))) == ((((arr_11 [i_3 + 3]) ? -31907 : var_14)))));
        var_21 *= (((((((max(var_9, 0))) == 1081742476617038468))) == (((!(((44 ? var_4 : var_15))))))));
        var_22 = (min((((var_6 == -51) ? (var_7 >= var_15) : (((arr_13 [i_3 + 2]) ? var_17 : var_12)))), 9223372036854775807));
    }
    var_23 = var_17;
    #pragma endscop
}

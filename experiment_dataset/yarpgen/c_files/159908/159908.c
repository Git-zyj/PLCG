/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_9;
    var_16 = var_7;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (max((min(var_11, (arr_2 [i_0 + 1]))), ((((arr_2 [i_0 - 3]) ^ (arr_2 [i_0 - 2]))))));
        var_17 = ((~(((!((max(var_0, var_10))))))));
        var_18 = (min(((((min(var_9, (arr_0 [i_0] [14]))) != (!18)))), (max(var_9, ((var_10 ? var_11 : var_13))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((((0 ? 7518637571819552300 : 30210)))) + var_10));
        var_19 = (((~(((arr_6 [i_1]) & (arr_5 [i_1 + 1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_12 [i_2] [i_2] = var_10;
        var_20 = (min(var_20, ((((arr_10 [i_2] [i_2]) - (~var_6))))));
        var_21 -= (((arr_1 [i_2] [i_2]) < var_4));

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_22 = (!var_14);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_23 = (arr_11 [i_5] [i_5]);
                        var_24 -= 3558294446;
                        arr_23 [i_2] [i_2] [i_3] [i_4] [3] [i_5] = (((arr_2 [i_3]) ? (var_3 & var_10) : (arr_3 [i_3])));
                        arr_24 [i_2] [i_3] [i_4] [5] [i_4] [i_5] = (((((-(arr_0 [i_4] [i_5])))) && (arr_5 [i_2] [i_2])));
                        var_25 = (var_1 < var_11);
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_26 = (-29527 / 16140993431901474070);
        var_27 = ((!(((max((arr_26 [i_6]), (arr_26 [i_6]))) != -20))));
    }
    var_28 = var_4;
    var_29 = (((((~(max(var_1, var_3))))) ? ((((max(var_12, var_2))))) : ((var_4 ? ((var_11 << (var_11 - 11310975913113136898))) : var_13))));
    #pragma endscop
}

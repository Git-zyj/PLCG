/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_17;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = ((2446798376224730462 ? ((((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_2 [i_0])))) : 2446798376224730461));
        var_21 &= -1150864601;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_22 = 32;
            var_23 = ((var_18 * ((var_0 ? ((229 * (arr_4 [i_1] [i_1]))) : ((max((arr_7 [i_1] [i_2]), (arr_7 [i_1] [i_2]))))))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_24 = (arr_6 [7] [i_1]);
                            arr_23 [i_6] [i_5] [i_1] [i_4] [i_1] [i_1] [i_1] = (var_18 ? -112 : 112);
                            var_25 = ((var_15 ? (arr_4 [i_4] [i_5]) : ((((-113 ? var_8 : (arr_5 [i_1] [i_4]))) | (arr_4 [i_1] [i_1])))));
                        }
                    }
                }
            }
            arr_24 [i_1] = (((var_15 | (arr_12 [i_1]))));
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_26 = (arr_3 [i_1] [i_7]);
            var_27 = (arr_26 [i_1]);
            var_28 = ((~((222 ? ((127 ? 15999945697484821164 : 1)) : (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [5])))));
            var_29 = (min(var_29, var_8));
        }
        var_30 = var_6;
    }
    var_31 = var_16;
    #pragma endscop
}

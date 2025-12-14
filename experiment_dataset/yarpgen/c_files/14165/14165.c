/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max((var_7 / var_3), (max(var_0, var_15))))) && var_2));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = (min(var_17, ((min((var_3 - 1307618989), -32755)))));
        arr_2 [i_0] = (min(((-(-14642 / var_0))), (max((min(var_10, var_0)), ((max(0, 1)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_18 = var_12;
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_19 -= (var_5 ? (((var_7 ? 8192 : var_12))) : var_1);
                    arr_12 [i_2] [i_2 + 1] [i_2] = ((0 ? 31 : var_10));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                arr_20 [i_3] [i_2] [i_3] [i_4] [i_2] [i_5] [i_3] = var_2;
                                var_20 = (-1 * 0);
                                var_21 += -93;
                            }
                        }
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_22 = (min(var_22, (11583282723227808053 * -7096)));
            var_23 = ((var_11 ? 11583282723227808070 : (var_11 + 11583282723227808077)));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_24 = (max(var_24, ((((!var_10) | var_8)))));
            var_25 = (((!var_10) % var_5));
        }
        var_26 = (max(var_26, (((var_15 ? var_9 : (var_14 == var_15))))));
    }
    var_27 &= (max((((var_11 ? var_6 : var_4))), var_5));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135785
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    var_13 = (max(var_13, var_1));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = (arr_4 [i_0] [i_0] [9] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (((((((0 ? (arr_9 [i_0 - 1] [i_2] [i_3]) : var_2))) >= (max(1, 9286620389030844279)))) ? var_11 : ((~(-78 || var_4)))));
                                var_16 = (max((((((var_3 ? (arr_4 [i_0] [i_1] [15] [i_3]) : var_3))) ? (var_9 == var_8) : (arr_5 [i_4 + 1] [i_1 - 1] [i_0] [i_0 - 1]))), var_9));
                                var_17 = -var_7;
                                var_18 = (arr_5 [i_4 - 4] [i_3] [i_2] [i_0]);
                                var_19 = (max(var_19, (((var_7 ? var_8 : ((max(((!(arr_4 [i_0 - 1] [i_1] [i_1] [0]))), (!var_1)))))))));
                            }
                        }
                    }
                    var_20 = (((~var_1) ? (((arr_1 [i_0] [i_1 - 1]) ? var_2 : (94 * var_8))) : var_5));
                }
            }
        }
    }
    var_21 = ((((((max(var_1, 10631382168298854752)) * (var_1 < var_5)))) ? -var_10 : (((((var_4 ? var_9 : var_2))) ? (((var_6 ? var_3 : var_0))) : -26673))));
    #pragma endscop
}

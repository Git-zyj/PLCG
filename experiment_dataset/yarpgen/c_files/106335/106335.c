/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max(var_0, (((((var_7 ? 7074 : var_3))) ? (max(var_7, 110)) : ((var_11 ? var_9 : var_7)))));
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 *= ((((arr_3 [i_1]) ? (((!(arr_1 [i_1])))) : 7)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_15 = (max((max((arr_7 [i_0] [i_0]), (arr_6 [i_0] [i_0]))), (((-2147483647 - 1) & (min(var_0, (arr_0 [i_0])))))));
                            var_16 = (min(var_16, var_0));
                            arr_11 [i_0] [i_0] = arr_1 [i_0];
                        }
                    }
                }
                var_17 = ((max(((7074 ? 0 : 0)), -8192)) >> (7074 - 7053));
            }
        }
    }
    var_18 = max(var_3, var_1);
    #pragma endscop
}

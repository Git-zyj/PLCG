/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 -= var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_1] = (min(var_1, var_1));
                                var_17 *= ((~((var_2 ? (arr_11 [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1]) : (arr_6 [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1])))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_0] = (((arr_5 [i_0]) && (((((((arr_11 [i_4] [i_4] [i_4] [i_4]) ? 106 : (arr_9 [i_0] [i_2] [i_0])))) ? -1481789860 : ((((arr_8 [i_3] [i_3]) && 3847))))))));
                            }
                        }
                    }
                    var_18 = var_12;
                    arr_15 [i_0] [10] [i_2] [i_0] &= ((((var_9 ? (((2097151 ? var_2 : (arr_3 [i_2] [i_1] [i_1])))) : ((var_12 ? 3304992571 : 368422556034044331)))) == 18078321517675507285));
                }
            }
        }
    }
    var_19 |= var_7;
    var_20 = ((var_14 ? ((((18078321517675507293 ? var_11 : 18078321517675507285)) << (((~var_2) + 49)))) : ((((368422556034044322 ? var_13 : var_15))))));
    #pragma endscop
}

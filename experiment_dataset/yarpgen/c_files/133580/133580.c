/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((2911102356105242080 ? ((((var_3 + var_10) <= (min(var_12, -2911102356105242080))))) : ((((min(1, var_14))) ? 142 : 169)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (arr_0 [10]);
                var_18 = ((~(max(((((arr_0 [i_1]) ^ (arr_3 [i_0])))), (var_14 ^ var_7)))));
                var_19 = (arr_6 [i_1] [i_1] [i_0]);
                var_20 = (max((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (arr_1 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_21 *= ((~((((arr_12 [12] [i_3]) <= (arr_12 [10] [i_3]))))));
                    var_22 = (min(var_22, ((((~(arr_10 [12])))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_23 = ((((((((arr_10 [i_3]) ? (arr_8 [i_4] [i_3]) : (arr_9 [i_2] [i_3] [i_3])))) ? var_11 : ((823641246 ? -116 : var_2))))) - ((~(max(8115724477552475716, (arr_16 [i_3] [i_3]))))));
                                arr_19 [i_2] [i_3] [i_2] [i_2] [i_2] [1] = (~3611465671121164568);
                                arr_20 [i_2] [i_2] [i_2] [i_2] [i_3] = var_13;
                            }
                        }
                    }
                    var_24 = var_5;
                }
            }
        }
    }
    var_25 = 162;
    #pragma endscop
}

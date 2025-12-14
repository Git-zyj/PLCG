/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 += max(16260, 16260);
                    var_14 = (min(var_14, ((max((min((arr_0 [i_0 - 1] [i_1]), (arr_0 [i_0 - 1] [i_1]))), (arr_2 [i_0 + 3]))))));
                    var_15 = (max(var_15, ((((((-(arr_3 [i_2] [i_2] [i_2])))) ? ((-(arr_6 [i_2 + 1] [i_1] [i_1] [i_0 + 2]))) : 49298)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 += ((~(arr_6 [i_2] [i_0] [i_2] [i_2 + 1])));
                                arr_12 [i_2] [i_2] = ((~((min(0, 49275)))));
                            }
                        }
                    }
                    arr_13 [i_2] [i_2] = max(((16260 ? 4398046511103 : -600728403)), (((-((var_9 ? var_10 : var_1))))));
                }
            }
        }
    }
    var_17 ^= ((~(-355330134 & var_11)));
    var_18 = (min(8951179276251888382, 9223372036854775801));
    var_19 = var_10;
    #pragma endscop
}

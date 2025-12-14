/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, ((((((1 ? -29304 : (-9223372036854775807 - 1)))) ? 1 : 0)))));
                var_18 ^= var_10;
                var_19 = var_7;
                var_20 = (arr_0 [i_1]);
            }
        }
    }
    var_21 = (min(var_9, (max(var_9, 31511))));
    var_22 = (((((((min(var_3, var_14))) ? var_3 : ((var_16 ? 4294967295 : var_14))))) || (((var_10 ? (min(1352543001, 57562)) : (~var_16))))));
    var_23 = (min(var_23, var_11));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_17 [i_3] = (((!var_11) ? ((((~7956) ? ((-2081340243 ? (arr_11 [i_2] [i_2] [i_3] [i_2]) : 0)) : 1))) : (((~57562) ? ((var_4 ? 15 : var_12)) : var_15))));
                                var_24 = ((2312844278 ? 512773062 : 1));
                                var_25 ^= (max((~1), (((~1) ? -32756 : (~-15)))));
                            }
                        }
                    }
                }
                arr_18 [i_3] = ((((((((arr_7 [i_2] [i_3]) + var_8)) / (arr_7 [i_2] [i_2])))) ? 28 : (((((39165 ? 37 : -1146205791))) ? ((((arr_14 [i_2] [i_2]) ? 31 : 1))) : var_11))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        {
                            var_26 = (min(var_26, ((~((~(~var_8)))))));
                            var_27 = (max(var_27, 26370));
                            var_28 = (((arr_21 [i_3]) ? -1 : ((57570 ? 490363180 : -926041423))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

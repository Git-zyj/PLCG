/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] = (!3685493901);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 &= (arr_3 [i_1] [i_1]);
                                arr_16 [i_0] [i_1 + 3] [i_2] [i_3] [i_4] = var_4;
                                var_15 = ((((max(((max(60961, 1796574783))), (min(var_11, (arr_4 [i_0] [19])))))) ? ((78 ? ((var_3 ? var_4 : var_12)) : (max(var_6, (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))))) : (arr_15 [i_0] [i_1] [i_2] [5] [i_4])));
                                var_16 -= ((((!(((14994619716159482767 ? 4592 : var_2))))) ? ((-7 ? (((var_0 ? var_2 : (arr_12 [i_4])))) : var_10)) : var_10));
                                var_17 = 123;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_22 [i_0] [i_1] [i_5] [i_0] [i_6] [i_1] = ((((((min(var_13, -22831)) < var_10)))));
                            var_18 &= (min(((max((arr_2 [i_0]), (arr_2 [i_6])))), (((-2147483647 - 1) ? (arr_2 [i_0]) : (arr_4 [i_0] [i_0])))));
                            var_19 = ((((min(var_1, var_7))) ? ((max(1391336508, (arr_3 [i_1 - 2] [i_1])))) : var_11));
                        }
                    }
                }
                arr_23 [i_0] [2] [i_1 - 4] = 0;
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}

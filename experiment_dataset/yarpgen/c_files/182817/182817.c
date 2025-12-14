/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 >> (((~1) + 12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = ((-((51128 ? var_3 : (arr_1 [i_0])))));
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0] = ((-((5684246493836839761 ? 0 : var_10))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        var_16 = (arr_6 [i_5 - 2] [i_2 - 2] [i_2 + 1]);
                        var_17 = (arr_10 [i_0] [i_0] [i_2 + 1] [7]);
                        var_18 = (((((var_2 ? -2147130046 : -1))) ? ((1888008995 ? (arr_1 [i_0]) : (arr_12 [i_0] [i_0] [4] [i_0] [5] [4] [i_0]))) : ((((var_8 <= (arr_0 [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_7] = (arr_5 [9]);
                                var_19 = -1;
                                var_20 |= (var_3 - 54683);
                                var_21 |= (((18446744073709551605 ? ((16924 ? var_7 : (arr_12 [i_2] [i_1] [1] [i_6] [i_7] [9] [i_6]))) : (((max(var_5, var_12)))))));
                            }
                        }
                    }
                }
                arr_21 [i_0] = (arr_16 [i_0] [i_0] [i_0] [11] [1]);
                arr_22 [i_0] [i_0] [i_0] = ((~(((arr_3 [i_0]) ? var_2 : (arr_14 [i_1])))));
            }
        }
    }
    #pragma endscop
}

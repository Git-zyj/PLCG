/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 18;
    var_17 = 65535;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 *= var_15;
        var_19 |= (((arr_2 [24]) / var_8));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        var_20 += (1400905935 & var_0);
                        var_21 = (max(var_21, ((((1704034558 >= var_12) < (32760 <= 2147483647))))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_22 = -1;
                                var_23 = (min(var_23, ((((arr_7 [i_0 - 1] [i_0] [16] [i_0 + 1] [14] [22]) ? (arr_7 [i_0 + 2] [i_0] [i_0 - 1] [i_0 - 1] [2] [i_0 - 1]) : (arr_7 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [0] [0]))))));
                            }
                        }
                    }
                    var_24 = (((5132 ? var_8 : var_7)) <= -48);
                    var_25 = ((var_9 | (var_14 > var_0)));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_26 = ((-(~1963187402)));
        var_27 = var_5;
        var_28 = ((161 >= ((~(arr_8 [i_6] [i_6] [i_6] [i_6])))));
    }
    #pragma endscop
}

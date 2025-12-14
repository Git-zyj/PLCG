/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = (min((((!((max(2002384599, var_12)))))), (((((var_1 ? -80 : var_12))) ? ((var_13 ? var_10 : var_12)) : 2635366424))));
    var_16 = 13248633557999497870;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_2] [i_1 - 1] [i_0] = 66846720;
                                var_17 = (((((arr_11 [i_4] [i_3] [1] [i_1 + 1]) - (arr_9 [i_0] [i_2] [i_2]))) + ((((var_2 >= (arr_2 [7] [7])))))));
                                var_18 = (max(var_18, ((((arr_7 [i_0] [i_1 + 1] [i_0]) ? (arr_10 [i_1 - 1] [1] [i_4]) : (!1698875963))))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [16] = ((-66846711 ? 49110 : (arr_7 [i_1 + 1] [i_1 + 1] [i_2])));
                }
            }
        }

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            arr_20 [i_0] [i_0] |= (arr_10 [i_0] [2] [10]);
            var_19 = (max(var_19, (arr_5 [i_5] [17])));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_25 [i_0] [i_0] [i_6] = (((arr_23 [i_0] [i_0]) ? var_13 : var_11));
            arr_26 [i_0] [1] [1] = (((arr_13 [i_0] [i_0] [i_0] [7] [i_6] [i_0]) != (arr_13 [i_0] [i_6] [i_6] [i_0] [i_6] [i_6])));
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            var_20 = (arr_24 [i_0]);
            var_21 += ((~(arr_0 [i_7] [i_7])));
            var_22 = (16432 * 7254);
        }
    }
    var_23 += var_0;
    #pragma endscop
}

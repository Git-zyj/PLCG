/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(((((!var_0) == (max(var_4, var_9))))), var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [12] [i_1] [i_0] = 0;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_17 [i_2] [0] [i_2] = (min((-9223372036854775807 - 1), 65535));
                                arr_18 [i_4] [i_2] [1] [i_2] [i_1] [i_2] [7] = ((min(var_9, (arr_3 [i_2 - 2]))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_15 = (((arr_3 [i_2 + 1]) - (arr_7 [i_2 - 3] [i_2] [i_2 - 1])));
                                var_16 *= ((~(arr_10 [i_2 - 2] [i_2 - 1] [i_2 - 3])));
                                arr_21 [i_1] [6] [i_1] [i_3] [i_1] [4] &= (arr_19 [i_0] [5] [i_3]);
                                var_17 = (arr_10 [i_2 - 1] [i_1] [i_2]);
                            }
                            arr_22 [i_2] [i_1] [i_2] [i_2 - 3] [8] [i_3] = ((((arr_0 [i_2 - 1]) / (arr_13 [i_2 - 2] [i_1]))));
                        }
                    }
                }
                var_18 = (max(var_18, ((((!(arr_7 [i_0] [1] [i_1])))))));
                var_19 += (min((((!(arr_6 [i_0] [i_1] [6])))), (-1156458487 || 16384)));
                arr_23 [i_0] = (min(1, 1837767511));
            }
        }
    }
    #pragma endscop
}

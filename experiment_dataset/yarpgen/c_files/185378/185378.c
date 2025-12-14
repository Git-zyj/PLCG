/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_17 |= ((-(((arr_2 [i_0 - 1]) ? (arr_8 [11] [i_2 + 1] [i_3]) : var_3))));

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_18 = (((!1) && (arr_12 [i_0] [i_0])));
                                arr_14 [i_4] [i_4] [i_1] [0] [i_1] [i_0] = 54158;
                                var_19 = (min(var_19, ((min(((-(arr_8 [i_0 - 1] [i_0 - 1] [i_2 + 2]))), var_13)))));
                            }
                            for (int i_5 = 3; i_5 < 24;i_5 += 1)
                            {
                                var_20 = ((-(!77)));
                                var_21 = ((3361787279 ? (min((arr_8 [i_0 + 2] [i_2 + 2] [i_5 - 3]), (arr_2 [i_0 - 2]))) : (arr_2 [i_0 - 1])));
                            }
                            arr_17 [i_1] [i_2] [i_3] = ((-(arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [18])));
                            var_22 = (arr_13 [i_3] [i_2] [i_1] [i_1] [i_0]);
                        }
                    }
                }
                arr_18 [i_0 - 3] [22] = (((max(18446744073709551615, 933180016))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_17 = (((~25778) ? 25785 : 25778));
                            var_18 = var_13;
                            var_19 = (max(25778, ((((~(arr_2 [i_0] [i_0])))))));
                            arr_8 [i_0] [i_1] [3] [i_3] = 167;
                            var_20 = (((arr_6 [i_3 + 3] [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 3]) ? 102 : (arr_6 [i_3 - 1] [i_3 + 3] [i_3] [i_3] [i_3])));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_17 [3] [i_5] [i_0] [i_0] = ((+(((var_0 - var_16) - var_8))));
                                var_21 = ((max(var_12, (arr_12 [8] [0] [10] [10] [i_0] [11]))));
                            }
                        }
                    }
                    var_22 = (max(var_22, ((max((max((((arr_2 [i_4] [i_1]) && var_7)), (arr_9 [i_0] [i_1] [i_0]))), ((!((max(var_1, (arr_6 [i_0] [2] [i_1] [i_1] [i_4])))))))))));
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_23 = (88 + 2789648391);
                    var_24 = (min((max(var_10, 8)), (arr_11 [i_0] [i_1] [i_7] [i_0])));
                }
            }
        }
    }
    var_25 = 88;
    var_26 &= var_11;
    #pragma endscop
}

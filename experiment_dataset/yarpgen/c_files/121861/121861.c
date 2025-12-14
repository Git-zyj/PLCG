/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 |= 1;
                var_17 = (arr_5 [i_0] [1] [14]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 |= ((~(max((arr_8 [i_2 - 2] [i_2 + 1] [i_2 - 2]), ((min((arr_12 [10] [19] [10] [i_3] [18]), var_14)))))));
                                arr_16 [1] [i_1] [1] = ((1 ? var_13 : 16383));
                                var_19 = (((arr_9 [i_0] [i_1]) ? (arr_8 [i_0] [i_1] [i_2 - 1]) : (-1765831590 != 28523)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (var_7 & -var_13);
    var_21 = -var_9;
    #pragma endscop
}

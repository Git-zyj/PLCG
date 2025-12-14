/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 239;
    var_12 = var_6;
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] = ((-((-(-32767 - 1)))));
                                arr_15 [i_0] [i_2] [i_0] [i_2] [i_4] = var_2;
                                var_14 = (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_1] = (((arr_7 [7] [7] [i_0]) ? ((var_6 ? (((var_9 > (arr_0 [5] [6])))) : (var_8 == 249))) : (((arr_13 [i_0] [i_1]) ? (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]) ? var_3 : 6)) : 17891))));
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}

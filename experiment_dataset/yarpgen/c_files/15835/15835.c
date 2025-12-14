/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 += arr_4 [i_1] [6];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 += ((!((((arr_12 [i_0] [i_3 - 1] [2] [i_4] [i_4]) ? (((var_9 ? (arr_3 [6]) : var_10))) : var_6)))));
                                var_20 = min(((((arr_8 [i_0]) ? -1714916522 : (arr_6 [i_1] [i_1] [i_3 - 1])))), ((~(max((arr_0 [i_1]), 18036822528017125603)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

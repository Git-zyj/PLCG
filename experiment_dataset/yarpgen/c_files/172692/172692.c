/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (6956 * var_0);
    var_11 = var_8;
    var_12 = ((~(((((max(var_8, var_9))) > var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [7] [i_4] = (arr_2 [i_2]);
                                arr_15 [i_0] [i_1] [i_0] [i_4] = -2169;
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] [i_0] = ((+(((arr_10 [i_2] [i_1]) ? (arr_10 [i_0] [i_1]) : var_9))));
                    arr_17 [i_0] [i_1] [i_1] = ((~(((!(((9 ? var_0 : 2027619119))))))));
                    arr_18 [i_0] [i_2] = 57528;
                }
            }
        }
    }
    #pragma endscop
}

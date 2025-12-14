/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(var_9, (min(var_7, ((max(var_6, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 - 1] [i_1 - 2] [i_2] [i_2] [i_4 - 2] [i_0 + 1] [i_1 - 2] = ((-(arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1])));
                                arr_15 [i_1 + 4] [i_1 + 4] [i_1 + 4] = (arr_3 [i_0 + 1] [i_1 + 2] [i_2]);
                            }
                        }
                    }
                }
                var_13 = ((max(((min(var_11, (arr_7 [i_0])))), (min(var_2, (arr_1 [i_0 + 1]))))) << (((arr_10 [i_0] [i_0 + 1] [i_0 - 1] [i_1 + 4] [i_1 + 2]) + 2862211462439354661)));
                var_14 = (max((((((max(-6037631907002659421, 134217728))) || (arr_9 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0])))), (max(var_3, (arr_7 [i_0 - 1])))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 8;i_5 += 1)
    {
        var_15 *= ((((((arr_17 [i_5]) ? (arr_2 [i_5 + 2]) : var_9))) - var_7));
        var_16 = (max(var_16, (((!(arr_3 [i_5 - 1] [i_5 - 3] [i_5 - 2]))))));
    }
    var_17 = (max(var_17, var_1));
    #pragma endscop
}

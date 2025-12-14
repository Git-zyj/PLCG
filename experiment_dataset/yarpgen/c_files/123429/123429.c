/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 ? var_2 : ((233 ? var_11 : (-4303254329429298339 == 221)))));
    var_21 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0 + 2] = max(18, 223);
                    arr_8 [i_0 + 3] = (max((max(var_0, ((max((arr_5 [i_0] [i_1]), var_1))))), (arr_4 [i_0 + 1])));
                    var_22 *= var_10;
                    var_23 = (max((((arr_3 [i_0 + 3]) ? var_19 : 32767)), (((var_6 - (max((arr_2 [i_0] [i_0]), (arr_3 [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_2] [i_2 + 1] [i_3] [i_4] = (min((max(0, 0)), (~var_18)));
                                arr_16 [i_0] [i_1 + 1] = (max(((max((arr_0 [i_2 - 1] [i_2 - 1]), (arr_0 [i_2 - 2] [i_2 - 1])))), (max(((237 ? (arr_10 [i_0] [i_1 - 1] [i_2] [i_2]) : 0)), var_2))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 *= 233;
    var_25 = var_9;
    #pragma endscop
}

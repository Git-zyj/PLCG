/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_14 = -32838;
                    var_15 += ((6573938372963554265 ? (arr_2 [i_1]) : (arr_3 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (arr_4 [i_0] [i_0] [i_0]);
                                var_17 = (min((((~0) ? 90 : (((arr_3 [i_4]) ? -22515 : 627957750)))), (((arr_4 [12] [i_1] [8]) ? 627957750 : (((63014 ? (arr_7 [i_0] [i_2]) : 16)))))));
                                var_18 = (max(var_18, (((!((max((arr_10 [i_0] [i_1] [i_2]), (arr_10 [i_0] [i_1] [i_0])))))))));
                                arr_12 [i_0] [i_2] [i_4] [i_3] [i_4] [16] [i_3] = ((((max(((max((arr_3 [i_3]), (arr_8 [6])))), 11924509450173336525))) ? 2774994005 : 3667009545));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((((221 ? 21960 : var_9))));
    #pragma endscop
}

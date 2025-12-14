/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -60368;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_2] [i_1] [i_2] = ((~(((((min((arr_9 [i_0] [i_0]), var_5))) < (((arr_2 [i_2]) ? var_6 : 4290164491547390134)))))));
                        arr_13 [i_0] [i_1] [i_2] [i_2] = (~5167);
                        arr_14 [i_3] [i_2] [i_2] [i_0] = (~5168);
                        arr_15 [i_2] = 60374;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_4] = (60368 != 7799156902280796868);
                        var_13 |= var_2;

                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            var_14 = (arr_18 [i_0] [i_0] [i_0]);
                            arr_22 [i_2] [i_4] [i_2] [i_1] [i_2] = (min((((arr_20 [i_0] [i_4] [i_5 - 1] [i_2] [i_0] [i_2] [i_1]) ? (arr_20 [i_0] [i_0] [i_5 + 1] [i_2] [i_4] [i_2] [i_1]) : (arr_20 [i_1] [i_1] [i_5 + 1] [i_2] [i_5] [i_0] [i_0]))), (arr_20 [i_0] [i_1] [i_0] [i_2] [i_4] [i_5 - 1] [i_0])));
                            arr_23 [i_0] [i_1] [i_2] [i_4] [i_4] = (60368 > 60374);
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_5] [i_5 + 2] = max(var_9, var_4);
                        }
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_15 -= (arr_4 [i_0] [i_1] [i_6]);

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_30 [i_0] [i_1] [i_2] [i_1] [i_2] [i_2] = ((-(((arr_18 [i_7] [i_1] [i_1]) / (arr_18 [i_0] [i_0] [i_0])))));
                            arr_31 [i_2] [i_2] [i_2] [i_6] [i_7] = -70368744177663;
                        }
                    }
                    var_16 = ((~(max((((arr_2 [i_0]) * 0)), ((min(1, 1)))))));
                }
            }
        }
    }
    var_17 |= -107;
    var_18 |= (var_10 - -116);
    #pragma endscop
}

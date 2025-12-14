/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_18 = (((((((var_7 ? 15474504532580050720 : 16137))) ? var_1 : (arr_5 [i_0] [i_0] [i_0 - 1] [i_0]))) * ((((((arr_10 [i_0] [i_4] [i_2] [i_3] [i_3] [i_4]) <= 49399))) / ((var_0 ? var_14 : (arr_4 [i_0] [i_0] [i_0] [i_0])))))));
                                arr_11 [i_4] [i_0] = (-69 & 4895478145659745037);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_18 [i_5] = (((((arr_6 [i_0 + 3]) ? (arr_5 [i_6] [i_5] [i_0 - 1] [i_0 - 1]) : (arr_6 [i_0 + 1]))) == 1544184329));
                            arr_19 [i_5] [i_0] = (max((((arr_3 [i_0 - 2] [i_0 - 2]) ? var_7 : 16123)), 0));
                            var_19 = ((!(((arr_2 [i_0 + 3] [i_0 - 1]) || (arr_2 [i_0 + 2] [i_0 - 2])))));
                            arr_20 [i_0 + 1] [i_0] [i_5] [i_5] [i_0] [i_6] = ((((max(3491686652, (arr_13 [i_5] [i_0] [i_0] [i_0 - 2])))) ? (max((arr_17 [i_6]), ((var_14 ? var_15 : 1544184329)))) : (var_12 < var_2)));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = (min((~-69), ((var_12 ? var_12 : (arr_17 [i_0 + 1])))));
                        }
                    }
                }
                arr_22 [i_1] [12] = (arr_12 [i_0] [8] [i_0] [i_0 + 2]);
            }
        }
    }
    #pragma endscop
}

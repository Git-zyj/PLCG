/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((((var_6 ? (((17723 ? 1 : 0))) : ((-114 ? var_9 : var_5))))) && (var_1 != var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 = (((var_6 + 2147483647) << ((((-1 ? (arr_8 [i_0 - 2] [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 - 1] [i_1 - 1]))) - 2083375725))));
                            var_14 = ((~(((arr_0 [i_0 + 1]) ? (arr_0 [i_1 + 2]) : var_7))));
                            var_15 = (max(var_15, (arr_10 [i_0] [i_0] [i_0 + 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_16 = var_4;
                            var_17 = (max(((-1 ? (arr_7 [i_5 + 4] [i_4] [i_0 + 1]) : (min((arr_0 [14]), -89)))), ((max((!1), -653426510)))));
                            var_18 = 4;
                        }
                    }
                }
                arr_15 [i_1] [i_1] [i_1] = ((-4 < ((((((arr_9 [i_1]) < 1))) * (arr_3 [i_1])))));
                var_19 += (((!(arr_6 [i_1 - 1] [i_0] [i_1]))));
                /* LoopNest 3 */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [12] [i_7] [i_1] = max((max(((max((arr_1 [i_1] [i_8]), -26359))), (((arr_14 [14] [i_1] [1] [14]) ? -32751 : -15599)))), -0);
                                var_20 = ((-0 - ((+(((arr_10 [i_0 - 2] [i_0 - 2] [i_6]) - 0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

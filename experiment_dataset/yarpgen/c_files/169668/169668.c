/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [2] [i_1] [1] [i_1] = ((1 + ((var_9 ? 1 : 1))));
                                arr_12 [i_1] [19] [19] [i_1] [14] [i_4] = (((var_16 | 2147483647) ? 806383344 : (((~(((!(arr_2 [i_0] [i_1] [13])))))))));
                                var_20 &= (min((!var_16), (arr_4 [i_2 + 2])));
                                var_21 = (min(((~(arr_4 [19]))), ((min((arr_3 [i_1] [i_3]), (((arr_5 [i_1] [7] [i_1] [i_4]) | 117368637985071606)))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        var_22 |= (max((arr_2 [4] [i_0] [12]), (((arr_13 [i_0] [i_0] [i_2 - 2] [i_0]) ? -2147483644 : var_12))));
                        arr_17 [i_0] [i_1] [i_0] [1] [5] [i_0] = ((((((arr_13 [i_0] [i_1] [i_0] [i_0]) | 10)))) ? (((min((arr_2 [i_2 + 2] [i_1] [i_5 - 2]), (arr_0 [i_5 - 1]))))) : (max(var_4, var_7)));
                        var_23 += (116 | 8);
                        var_24 = ((-(((arr_1 [i_0]) | 2443203094019082918))));
                        var_25 = -2147483647;
                    }
                    var_26 = (min(((-11634 ? 2532540485121618618 : 1)), (arr_8 [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 - 2])));
                }
            }
        }
    }
    #pragma endscop
}

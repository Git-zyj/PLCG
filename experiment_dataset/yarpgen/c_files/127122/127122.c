/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min(var_19, var_5));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((min(var_7, ((((var_0 ? var_5 : var_9)))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_22 = (min(var_22, (((~(arr_4 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_8 [i_1] [i_1] [i_1] |= ((var_7 | (arr_5 [i_1 - 2] [i_1] [i_1] [i_1 - 2])));
                }
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_23 = (((arr_13 [3] [i_3 + 2] [i_1 - 1] [i_1] [i_0]) && ((((((var_9 + 2147483647) >> (var_7 - 14177662108161908135)))) && (arr_13 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0 + 2])))));

                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                var_24 = 4294967278;
                                arr_17 [i_0] [i_1] [i_0] = var_13;
                            }
                            var_25 = ((var_5 ? (((((((arr_5 [5] [i_1 - 1] [i_0] [i_4]) > 0))) != (~var_8)))) : var_13));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((min(((var_5 ? var_1 : var_4), (arr_3 [i_0])))))));
                var_12 = (3198147352 ? 1096819925 : 2755381269);
                var_13 = var_5;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 += ((((var_3 | var_2) | (arr_9 [9] [i_1] [i_2] [i_3]))) ^ (((((var_8 ? 149 : (arr_3 [i_0])))) ? (min(var_4, 201)) : (((201 << (9563288524824277572 - 9563288524824277564)))))));

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                var_15 ^= (var_7 ? (arr_10 [i_4 - 1] [i_4 + 1] [i_4] [i_4] [i_4 - 2]) : ((var_1 ? var_8 : var_7)));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] = (((arr_13 [i_4] [i_4] [i_1] [i_4 + 2] [i_1] [9] [i_4 - 1]) != var_0));
                                var_16 = ((-(var_9 + 8883455548885274040)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}

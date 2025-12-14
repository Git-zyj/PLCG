/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = max(((~((110 ? var_6 : var_6)))), ((~((var_4 ? 4094 : var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (min((min(((122 ? -104 : var_11)), ((var_12 ? var_7 : var_0)))), ((2296835809958952960 ? 1 : 1253517841))));
                var_16 += var_2;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (((~(arr_10 [i_0] [i_1] [i_2] [i_3]))));
                                var_17 = (min(16515072, (((-((var_2 ? var_10 : var_9)))))));
                                var_18 &= (max((min((min((arr_14 [i_4] [4] [i_2] [i_1] [5] [i_1] [i_0]), var_10)), (arr_13 [i_0] [i_1] [i_2] [i_3] [2] [i_0] [i_2]))), (((max((arr_14 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] [i_1] [11]), var_3))))));
                                arr_16 [i_0] = ((-((((1 * (arr_9 [i_1 + 2] [i_0])))))));
                                var_19 &= (((arr_3 [i_3 - 1] [i_3 - 1]) ? (arr_3 [i_3 - 1] [i_3 + 1]) : (arr_3 [i_3 + 1] [i_3 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = 64239;
    #pragma endscop
}

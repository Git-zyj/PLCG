/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_9));
    var_14 = ((~((max((max(var_8, var_3)), var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_4] &= (arr_7 [i_0] [i_1] [i_2] [i_4]);
                                arr_15 [i_0] = -9223372036854775787;
                                var_15 = (max(var_15, var_9));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] [i_3] = var_11;
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0] [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                var_16 ^= arr_21 [i_5] [i_5] [i_5];
                arr_24 [i_6] [i_5] = ((var_10 >= ((~(((arr_21 [i_5] [i_5] [i_6]) >> (var_10 + 1539282543)))))));
                var_17 = (var_6 ? (((0 ? (-127 - 1) : 4294967274))) : ((max(var_11, (arr_20 [i_5])))));
                arr_25 [i_5] [i_6] [i_5] = arr_21 [i_5] [i_5] [i_5];
                arr_26 [i_5] [i_5] [i_5] = (min(((max(var_9, (arr_23 [i_5] [i_6])))), ((-(arr_21 [i_6] [i_6 + 2] [i_6])))));
            }
        }
    }
    var_18 |= (((((!var_6) % var_11)) % ((((var_10 / var_3) || var_10)))));
    #pragma endscop
}

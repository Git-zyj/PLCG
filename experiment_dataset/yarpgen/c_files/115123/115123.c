/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((1 != (~2147483646)))), ((var_13 | (((var_2 ? var_12 : 1)))))));
    var_20 = ((var_1 ^ (((((((var_3 ? var_0 : 115))) && (946236716552261554 / var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 *= arr_1 [4];
                    arr_9 [15] [13] [i_0] [15] = arr_2 [i_0];
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_22 |= arr_10 [i_4];
                                var_23 = (min(var_23, ((((((1 && -1749105068) || 0)) || (((((var_12 || (arr_14 [4] [4]))) ? (arr_12 [i_3] [i_4]) : (arr_16 [i_3] [i_4] [i_3] [i_6] [0])))))))));
                                arr_23 [i_4] [i_5] [0] [i_7] = ((+(((arr_19 [0] [i_4] [i_5] [i_6] [i_5]) / (max((arr_12 [i_3] [i_4]), -3678))))));
                            }
                        }
                    }
                    arr_24 [i_5] [i_4] [i_5] = (((arr_18 [1] [i_4] [4] [i_5]) % (max((arr_1 [i_5]), ((var_17 / (arr_5 [i_3] [i_4] [i_5])))))));
                    var_24 = min((((242 - 116) + 1594773804949336656)), (max(1, 13192314523058225156)));
                    var_25 = ((max((min((arr_18 [6] [i_4] [i_4] [i_5]), (arr_4 [i_3] [i_5] [i_5]))), ((((arr_17 [i_5]) ? (arr_14 [i_5] [i_4]) : 1))))));
                }
            }
        }
    }
    #pragma endscop
}

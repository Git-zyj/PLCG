/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((!(((var_0 ? var_4 : (max(12334691955856653937, 1418916697609183705)))))));
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_1] = (arr_4 [i_0] [i_2]);
                    arr_11 [i_0] [i_1 - 1] [i_1] [i_1] = (~64);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_12 ^= ((((((24 && 1) & (arr_1 [i_0] [i_4])))) ? (((arr_16 [i_2] [i_2] [i_2] [10] [i_4 + 1]) ? var_1 : ((var_1 ? 708384619190360425 : (arr_5 [i_1] [i_3] [i_4 + 1]))))) : (((((var_4 ? (arr_6 [i_2] [i_0]) : (arr_12 [i_0] [i_1 - 1] [i_2] [0])))) ? (((14 ? 65535 : 4540340009656411822))) : (min(38993, (arr_1 [i_0] [i_1 - 1])))))));
                                var_13 = (min(2769383188, -4211639154512413736));
                                var_14 = (min(var_14, 8636883837651120111));
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}

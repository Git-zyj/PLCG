/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = (max(32767, (arr_7 [i_2] [i_1 + 1] [6] [i_1 + 3])));
                    var_14 = ((+(max((arr_4 [i_1 + 3]), (arr_0 [i_1 + 1] [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1 + 1] [i_2] [i_3] [i_3] = (((((389703992 ? (arr_4 [i_1 - 1]) : (arr_5 [i_1 + 3] [i_3 - 2])))) ? ((var_3 ? (arr_4 [i_1 - 1]) : (arr_11 [i_1 + 2] [i_3 + 1]))) : (arr_11 [i_1 + 3] [i_3 - 3])));
                                var_15 = var_1;
                                var_16 &= (arr_4 [i_0]);
                                arr_14 [i_3 - 1] [i_3 - 1] [4] [i_3 - 2] [i_3] [i_3] = (((+((max((-32767 - 1), var_1))))));
                                arr_15 [i_3] [i_1] [i_1] = ((min((arr_7 [i_3] [i_3 - 2] [i_1 + 3] [i_1 + 2]), 18446744073709551615)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 |= ((~(((((-43 ? var_4 : var_4))) ? var_3 : -52))));
    #pragma endscop
}

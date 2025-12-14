/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((var_8 * var_4) ? (((arr_7 [i_0]) >> (((arr_3 [i_1]) - 16765145921405946893)))) : (max((arr_7 [i_1]), (arr_7 [i_0]))))))));
                arr_8 [3] [i_0] = (((((arr_3 [i_1]) ? var_6 : (arr_3 [i_0]))) ^ (min((arr_3 [i_0]), (arr_3 [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_12 ^= (((arr_14 [i_2] [i_5] [i_4]) * (arr_16 [16] [16] [i_5] [16])));
                                var_13 = (((((arr_21 [i_4] [i_4] [i_4] [i_4]) ? var_4 : (arr_13 [i_2]))) >> ((((18446744073709551609 >> (((arr_21 [i_2] [16] [i_4] [i_5]) - 3146384605767212358)))) - 1048565))));
                            }
                        }
                    }
                    arr_25 [i_4] [i_2] [i_4] = var_8;
                    var_14 -= (((arr_19 [i_2] [i_2] [i_4]) ^ (((arr_11 [i_3] [i_4]) >> (((arr_11 [i_2] [i_3]) - 150))))));
                    var_15 = (((var_3 ? (arr_17 [i_4]) : (arr_12 [i_4] [i_3] [15]))));
                }
            }
        }
    }
    #pragma endscop
}

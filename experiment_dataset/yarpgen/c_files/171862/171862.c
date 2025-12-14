/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [10] = -var_4;
                var_17 = -2147483618;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_18 = ((((max((~5853), ((max(104, var_10)))))) >= (((arr_16 [4] [i_4 - 1] [i_4 - 1] [8] [i_4 - 1] [10]) ? (arr_16 [1] [i_4 - 1] [i_4 - 1] [1] [i_4 - 1] [4]) : (arr_17 [12] [i_4 - 1] [i_4 - 1] [2] [i_4 - 1])))));
                                var_19 *= (~var_15);
                            }
                        }
                    }
                    var_20 = var_11;
                    arr_20 [1] [0] = ((max(var_0, (2147483647 < 9223372036854775807))));
                }
            }
        }
    }
    var_21 = var_5;
    var_22 ^= 9223372036854775807;
    #pragma endscop
}

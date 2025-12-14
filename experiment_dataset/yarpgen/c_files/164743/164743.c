/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] = ((~(1671351383 > -59)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_3 + 1] [1] [i_4] = -2145740204;
                                var_16 = ((((-((~(arr_9 [i_0] [i_1] [i_2] [i_2 + 4] [i_3 - 1] [1]))))) >= (((var_1 <= (arr_5 [i_1] [i_1] [i_2] [i_1]))))));
                                arr_12 [10] [i_4] [i_2 + 1] [10] [i_3 + 1] &= (arr_0 [1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 11;i_6 += 1)
        {
            {
                arr_19 [i_6] = (max((arr_18 [i_5]), 1573495006));
                arr_20 [i_5] [i_5] &= (min((2145740221 + 1), ((2145740198 >> (2149227073 - 2149227057)))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_11 = (((((min((arr_5 [16] [i_0] [i_2 - 2] [i_2]), 44)))) == (-45 & var_3)));
                    var_12 -= (min((((~(arr_7 [8] [i_2] [i_2 - 1] [i_2])))), (min(var_1, (arr_3 [15] [i_2 + 1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = (arr_10 [i_0] [9] [i_2] [i_0] [i_3]);
                                arr_14 [i_0] [8] [8] [i_0] [11] = ((((((44 ? 4294967280 : -20)) && (-34 ^ 0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = 37;
    #pragma endscop
}

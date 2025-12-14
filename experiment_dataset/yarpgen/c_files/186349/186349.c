/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((-(max((((arr_2 [i_0] [i_0] [i_1]) * 0)), (arr_2 [i_1] [i_0] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_15 = arr_0 [i_0];
                                var_16 = ((-var_4 << ((((((((~(arr_3 [i_1] [i_2] [i_4]))) + 2147483647)) << (((arr_2 [i_0] [i_2] [i_3 - 1]) - 2631674356)))) - 2147463898))));
                                var_17 -= ((((-(arr_7 [i_0] [i_1] [i_1])))));
                                arr_13 [i_1] [i_1] [i_1] [i_2] [i_1] [i_4] = (min(29062, ((~(arr_1 [i_3 + 2])))));
                                arr_14 [i_1] [i_1] = 211;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

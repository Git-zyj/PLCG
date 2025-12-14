/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_11 ^= ((!(((((min(2004461119, 53))) ? (((arr_4 [7] [7]) ? (-2147483647 - 1) : -2147483638)) : ((~(arr_0 [1]))))))));
                var_12 = (arr_2 [i_0]);
                arr_5 [i_0] = (((arr_4 [i_0] [i_0]) == (arr_0 [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] |= ((((max((((arr_8 [i_2]) ? var_5 : (arr_9 [i_2] [i_2] [i_2]))), var_1))) != ((min((arr_7 [i_2]), var_6)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_13 = (arr_17 [i_4 - 1] [i_6 - 2] [i_4 - 1] [i_5 - 1]);
                                var_14 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

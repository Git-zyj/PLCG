/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((var_6 + 2147483647) >> (var_5 - 5794050523736512663)));
    var_16 += 12025;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 *= (max(52, (min(var_5, ((((arr_4 [i_3]) == 60932)))))));
                                var_18 ^= (min((arr_4 [i_0 + 2]), (((arr_7 [i_2]) ? ((~(arr_1 [i_0] [i_4]))) : (arr_8 [i_3] [i_3] [i_2] [i_3])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((var_1 ? ((~((var_6 ? (arr_15 [6] [i_1] [4] [i_1] [i_0]) : (arr_0 [i_5]))))) : ((max((arr_4 [i_0 + 2]), (arr_19 [10] [4] [i_5] [10])))))))));
                                var_20 -= -4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [1] [i_2] = -1917846628;
                    var_15 ^= (max((max((((2147483647 ? 63 : -1917846624))), 13848787140763710057)), (arr_2 [i_0] [i_0])));
                    arr_9 [i_2] = (max((arr_0 [i_0] [i_2]), (~2147483647)));
                    var_16 ^= ((arr_4 [i_0] [i_0]) ? 18446744071562067968 : 33012);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [4] = 16777215;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_17 += (min(-var_6, (arr_16 [i_3] [i_3] [7] [i_6])));
                                var_18 = (max(var_18, (arr_5 [3])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((max(-1315300816362492533, (min((arr_13 [i_9]), 18446744071562067969)))))));
                                var_20 = (max((min(18446744071562067969, (max((arr_1 [i_5]), 18446744071562067969)))), (min((((arr_25 [i_3] [i_5] [i_8] [i_9]) ? 18446744071562067977 : (arr_25 [i_3] [i_3] [i_3] [i_3]))), 5183928542409297045))));
                                arr_31 [i_4] [i_9] = (max((arr_21 [i_3] [i_4] [i_8]), (arr_11 [i_3])));
                                arr_32 [i_3] [i_3] [i_4] [i_4] [i_8] [i_9] = (arr_3 [6] [5]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_7;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 *= (arr_9 [i_0 - 1]);
                            arr_10 [i_0] [i_0] [i_1] [i_2] [4] = 1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_20 = (max(((~((198 >> (198 - 171))))), ((1227008762 ? -76 : 7119))));
                            var_21 = (((40 ? -30478 : var_0)) + (((!(arr_9 [i_0])))));
                            var_22 = (min(var_22, ((max(((1 + (arr_9 [1]))), (((((max(1, 38046))) ? (arr_6 [1] [i_1]) : (arr_6 [i_0] [i_5])))))))));
                        }
                    }
                }
                arr_16 [i_0] [i_1] [i_0] = 1;
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [i_7] [i_7] [i_8] [i_8] = 2174;
                                arr_25 [i_7] = (arr_8 [i_0] [5] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            {
                var_23 ^= 27115;
                var_24 |= (52531 != 6320751301491359965);
            }
        }
    }
    #pragma endscop
}

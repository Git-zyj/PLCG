/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (arr_5 [i_1] [i_1]);
                                arr_15 [i_2] [i_2] [1] [i_2] [i_4] = ((-(arr_3 [i_0] [i_0 - 1] [i_0 - 1])));
                                arr_16 [i_0] |= (((max(1, (arr_9 [i_0] [i_0] [i_4] [1] [i_0 - 1])))));
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] = (max(1, (((arr_3 [i_0] [i_0] [i_0]) ? (((arr_6 [i_1] [i_1] [1] [1]) ? 1 : (arr_3 [i_0] [i_0] [i_0]))) : 1))));
                arr_18 [i_0] [i_0] = ((var_1 + (arr_14 [i_0])));
                var_18 += (!var_14);
            }
        }
    }
    var_19 = ((~((1 ^ (1 | var_2)))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_20 = ((+(((1 % 1) >> ((((arr_32 [i_7]) && (arr_0 [i_5]))))))));
                                var_21 += (arr_4 [i_5] [i_5]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 3; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            var_22 ^= arr_33 [i_5] [i_5] [i_5] [i_5];
                            var_23 = (min((arr_9 [i_5] [i_6] [i_6] [i_10 + 2] [i_6]), (arr_26 [i_5] [i_6] [i_10 - 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

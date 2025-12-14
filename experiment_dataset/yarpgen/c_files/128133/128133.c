/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((-23787 - (max(var_3, (min(var_14, 576460752301326336))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((((min((arr_0 [i_0]), 0))) == (min(var_1, (arr_0 [i_0])))));
                var_16 = (max((min((arr_0 [7]), var_13)), (max(((-1 ? (arr_0 [i_0]) : (arr_1 [1]))), (!var_8)))));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 = (arr_1 [i_0]);
                                var_18 -= -var_10;
                                var_19 -= ((~(arr_2 [i_2 - 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, -29969));
                                var_21 ^= (~var_14);
                                var_22 *= (((arr_15 [i_0] [i_1] [i_0] [i_5] [6]) ? (arr_15 [2] [8] [i_2] [i_5] [2]) : (arr_15 [1] [1] [12] [12] [8])));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_23 = (min(var_23, ((max((arr_0 [i_0]), (((~(((var_13 < (arr_17 [i_1] [i_1]))))))))))));
                    arr_21 [i_0] = var_7;
                }
            }
        }
    }
    #pragma endscop
}

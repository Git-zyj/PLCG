/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (min(((((var_2 >= -31386) <= (((arr_2 [i_0] [13] [i_1]) ? var_8 : (arr_3 [i_1])))))), (((((arr_2 [i_1] [i_1] [i_0]) ? var_7 : (arr_2 [i_1] [i_1] [i_0]))) * 31371))));
                arr_5 [i_1] [i_0] [i_1] = var_9;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = ((+(((arr_3 [i_2 + 2]) ^ (arr_1 [i_3] [i_2 + 1])))));
                            var_16 = ((31373 ? var_3 : ((((arr_4 [i_2] [i_2 - 1] [i_2 + 1]) ? -var_12 : (arr_6 [i_1] [i_3] [i_3] [i_1]))))));
                        }
                    }
                }
                var_17 = ((~((((-(arr_4 [i_0] [i_0] [1]))) ^ (arr_2 [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                var_19 = ((!((max((arr_12 [i_4] [i_5] [i_5]), var_7)))));
                /* LoopNest 3 */
                for (int i_6 = 3; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_20 += ((-31371 ^ (!var_6)));
                                var_21 = var_6;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((var_8 == var_3) >= var_13)));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_15 ^= ((max(var_8, var_13)));
        var_16 = (max(var_16, (((~-122) / var_1))));
        arr_3 [i_0] &= var_11;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] |= ((~((var_9 << ((((max(var_5, var_2))) - 40))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_11 [15] = -var_7;
                    arr_12 [1] [i_3] = var_2;
                    arr_13 [i_1] [i_1] [1] [i_3] = var_12;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_17 += ((((((var_0 + var_9) % (var_0 % var_12)))) || var_4));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        {
                            arr_24 [i_7] [i_7] [i_7] [14] [i_6] [i_5] = ((max(var_3, var_8)));
                            arr_25 [i_4] [i_5] [9] [i_5] = (!(-var_4 >= var_12));
                            arr_26 [i_4] [i_5] [i_5] [i_4] = ((((((var_6 + var_7) < ((min(var_9, var_7)))))) | var_8));
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, (((-(var_1 != var_7))))));
    #pragma endscop
}

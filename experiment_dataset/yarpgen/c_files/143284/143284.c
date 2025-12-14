/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_2 + 1] [i_2] [i_1 - 3] = ((((((max((arr_3 [i_0] [i_1]), (arr_0 [i_2 - 1])))) ? ((((arr_3 [i_0] [i_2 + 1]) && var_4))) : (arr_5 [10]))) >= ((~(10 ^ var_7)))));
                    var_13 = (max(var_13, (((-(min(((max((arr_3 [13] [i_1 + 2]), (arr_4 [i_2])))), 596117420)))))));
                    var_14 = ((-(((arr_5 [i_1]) ^ ((max((arr_0 [i_0]), (arr_0 [i_1]))))))));
                }
            }
        }
    }
    var_15 = (min(var_1, (((((var_6 ? var_6 : var_9))) ? var_2 : -var_8))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_16 = ((var_5 || ((min((0 >= var_10), var_4)))));
                            var_17 = (max(var_17, (((((min(1048624503, (arr_22 [i_3] [i_3] [i_4] [i_4] [i_5 - 1] [i_6])))) || 2830)))));
                        }
                    }
                }
                arr_25 [i_4] = ((31 < (((((-4 ? -4 : -16))) ? (var_4 == var_2) : ((min((arr_24 [i_3] [i_3] [i_4]), 3)))))));
            }
        }
    }
    #pragma endscop
}

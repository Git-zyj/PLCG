/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((max((var_2 - var_7), (max(var_8, var_10)))), (!var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_2] [i_4] = var_6;
                                arr_12 [i_0] [i_2] [i_0] [i_0] = (((((var_12 << (((arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]) - 7862)))) <= ((min((arr_5 [i_0] [i_0] [i_4] [i_0]), var_9))))));
                            }
                        }
                    }
                }
                var_17 = (((arr_2 [i_0]) || var_11));
                arr_13 [i_0] [i_0] = ((var_9 ? (min(((((arr_2 [i_0]) + var_0))), (min(var_5, var_8)))) : ((min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1]))))));
                var_18 = (((((max(var_4, (arr_7 [i_0] [i_1]))) <= (min(var_6, (arr_7 [i_0] [i_1]))))) ? (-67 == -48) : (max((arr_10 [i_1] [i_1] [i_0] [i_0] [i_0]), (max(var_9, (arr_2 [i_1])))))));
            }
        }
    }
    var_19 = (((((((var_14 ? var_15 : var_9)) & (var_5 == var_10)))) < ((-(min(var_4, var_12))))));
    #pragma endscop
}

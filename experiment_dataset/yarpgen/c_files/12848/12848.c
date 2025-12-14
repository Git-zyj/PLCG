/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = (max(6974, 57020));
                                arr_13 [i_0] [i_1] = ((max(((26938 ? var_11 : var_12)), var_0)));
                                arr_14 [i_1 - 1] [i_1] [i_0] [i_3] [i_3 - 2] [i_4 - 2] [i_0] = 4;
                                arr_15 [i_2] [i_0] = ((~((max(26938, 116)))));
                                var_16 = (min(var_16, ((((((var_9 == (arr_4 [i_4] [i_4 + 3] [i_2])))) <= var_13)))));
                            }
                        }
                    }
                }
                var_17 = (((((~((max(var_4, 53)))))) ? (arr_8 [i_0 - 2] [i_0 + 1] [i_0] [i_1 - 1] [i_0]) : (((((arr_5 [i_0] [i_0] [i_0 + 1] [22]) != var_0))))));
            }
        }
    }
    var_18 = var_2;
    var_19 *= (((((((max(var_4, var_7))) < (!339)))) - ((var_2 ? var_10 : var_2))));
    #pragma endscop
}

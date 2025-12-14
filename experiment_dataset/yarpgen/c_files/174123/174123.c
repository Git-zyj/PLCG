/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((min(((min(var_17, var_0))), var_8)) - ((((((min(var_17, var_14))) != var_17))))));
    var_21 = ((((((var_11 * var_9) <= (((max(var_18, var_19))))))) / (((((((var_7 + 2147483647) >> var_16))) > (min(var_10, var_18)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 ^= (((((((((arr_4 [6] [6]) * (arr_2 [i_0] [i_0] [i_0])))) && (var_9 << var_18)))) + ((((((arr_3 [i_0] [i_1] [i_0]) <= (arr_6 [8])))) / (((arr_4 [6] [i_1]) & var_1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_23 = (((((max((min(var_11, var_7)), var_5)))) + (((((((arr_7 [i_0] [i_1] [i_2] [i_2]) > var_7)))) * (((arr_7 [i_0] [i_0] [i_0] [i_4]) + (arr_10 [i_0] [i_0] [i_2])))))));
                                var_24 ^= min((min((min(var_7, (arr_0 [i_3]))), (((arr_8 [i_0] [i_0] [i_4] [i_3]) - var_11)))), var_7);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_18 [12] [i_1] [i_1] &= min((max((min(var_4, (arr_3 [i_0] [i_0] [i_0]))), var_18)), var_3);
                                arr_19 [i_6] [i_2] [i_0] [i_2] [i_0] = (var_5 == var_0);
                                arr_20 [i_0] [i_0] [i_1] [4] [i_5] [i_0] &= (max(((((var_6 + var_3) > (((((arr_13 [i_0] [i_1] [i_2] [12] [i_6]) && var_16))))))), (arr_5 [i_1] [i_1] [i_6])));
                                var_25 = (min(var_25, ((min(((((arr_17 [6] [6]) ^ (((var_16 << (var_3 - 1236))))))), (((max((arr_12 [i_1] [i_2] [i_1]), (arr_14 [2] [2]))) | var_5)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, ((max(var_5, var_6)))));
    #pragma endscop
}

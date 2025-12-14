/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    var_17 = (max(var_10, ((-1332911551 ? var_6 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 = (max((((((arr_7 [i_0 - 1] [i_0] [i_1 + 2] [i_1 + 2] [i_1 + 3] [i_2]) + 2147483647)) << (((-1027600028 + 1027600038) - 10)))), ((~(1014411010 ^ var_1)))));
                            var_19 = -111;
                        }
                    }
                }
                var_20 = (max(var_20, (((((((arr_5 [i_0] [3] [i_0 + 2] [i_1 + 3]) > (max((arr_2 [i_0] [8] [i_1]), var_6))))) - 946867570)))));
                var_21 = (min(var_21, ((min((((((-2147483636 ? 1027600027 : (arr_5 [i_0 - 2] [i_0 - 4] [3] [i_1])))) ? (arr_0 [19]) : (min(4294967295, 476127950)))), (((((1327005602 ? -17 : 17))) ? (var_15 ^ 13) : 1379913601)))))));
                var_22 = ((min(var_10, var_10)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            {
                var_23 ^= ((max((arr_5 [i_5 - 1] [i_5] [i_5 - 2] [i_5]), (arr_5 [i_5 - 2] [0] [i_5 + 2] [i_5]))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_24 = 13080835340579426117;
                                arr_23 [i_8] [i_7] [i_6] [i_8] [i_4] [i_4] [i_4] = (arr_9 [i_5]);
                                arr_24 [i_8] = (min(((var_9 ? (((max(var_1, var_10)))) : ((-49 ? 4294967295 : -726995636)))), (((-((-(arr_7 [i_4] [i_5] [i_5 + 2] [i_5 + 2] [i_4] [i_4]))))))));
                                var_25 -= (((8 == 77) ? 592797055 : 39));
                                var_26 ^= (max((((((2429200287 * (arr_6 [i_7]))) == var_12))), var_10));
                            }
                        }
                    }
                }
                var_27 = (((max(var_11, (((var_15 ? 1 : 202)))))) ? (((-(arr_3 [2] [i_5 + 2])))) : (1865767008 + -var_6));
            }
        }
    }
    #pragma endscop
}

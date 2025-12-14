/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = (max(var_7, ((((var_0 && var_8) || var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (((max(var_2, var_8)) != var_6));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_14 = (((min((((var_9 ? (arr_7 [i_1 + 2] [i_0] [i_1 + 1] [i_1] [i_1]) : var_3))), (arr_1 [i_3]))) ^ (arr_0 [i_0])));
                            var_15 *= (arr_5 [i_0] [i_1] [16] [16]);
                            var_16 = var_6;
                        }
                    }
                }
                var_17 = ((var_4 ? ((min((arr_8 [i_1 - 1] [i_1] [i_1] [i_1 + 2]), var_1))) : ((((min(var_10, var_2))) ? (arr_8 [i_0] [16] [i_0] [i_1]) : (min(var_4, var_4))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    arr_17 [i_4] = (max(var_3, ((((7 ? 16569186969865141655 : var_8)) << (((arr_16 [i_6] [i_5 + 2] [i_4]) - 10034015624639792533))))));
                    var_18 &= var_10;
                    arr_18 [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? ((((((var_7 == var_6) ? (var_6 ^ var_3) : (arr_7 [i_6] [i_4] [i_6] [i_5] [i_6]))) >> (((max(var_3, (arr_4 [i_4 - 1] [i_4 - 2] [i_4]))) - 3863138507))))) : ((((((((var_7 == var_6) ? (var_6 ^ var_3) : (arr_7 [i_6] [i_4] [i_6] [i_5] [i_6]))) + 2147483647)) >> (((max(var_3, (arr_4 [i_4 - 1] [i_4 - 2] [i_4]))) - 3863138507)))));
                }
            }
        }
    }
    #pragma endscop
}

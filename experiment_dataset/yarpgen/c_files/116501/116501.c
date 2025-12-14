/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(~var_10)));
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [12] [i_2] [i_2] [i_3] = ((-(min(((((arr_11 [i_0] [i_0] [i_0] [i_0]) >= (arr_6 [i_2] [i_2])))), (((arr_6 [i_1] [1]) << (arr_4 [i_0] [i_0] [i_2])))))));
                            var_13 = (((((3402047193711276800 ? -58 : var_1)) ? var_8 : var_4)));
                            var_14 = (max(((((var_3 + 2147483647) << (var_7 - 42516144)))), var_2));
                        }
                    }
                }
                var_15 -= ((!(arr_2 [i_0] [i_1])));
                var_16 -= (((arr_8 [i_0] [i_0] [i_1]) ? (min((min((arr_3 [7] [i_1] [i_1]), (arr_9 [i_0]))), ((var_9 ? var_3 : var_6)))) : (((25398 ? ((min((arr_1 [i_0] [i_1]), var_3))) : var_8)))));
                var_17 = (max((((((arr_12 [i_0] [i_0] [i_0] [i_0]) && (arr_1 [i_0] [i_1]))))), (max((min((arr_7 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_1]))), (((arr_6 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_4 [i_0] [i_0] [i_1])))))));
            }
        }
    }
    var_18 = var_5;
    #pragma endscop
}

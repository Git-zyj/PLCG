/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((min(var_10, var_4))) != (((var_9 ^ var_9) ? var_5 : var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((max(((((((var_12 * (arr_1 [i_0])))) && ((((arr_3 [i_0]) + var_8)))))), (min(((var_4 ? (arr_3 [i_0]) : (arr_2 [i_0] [i_1]))), (((arr_2 [i_0] [i_1]) ? (arr_3 [i_0]) : (arr_5 [i_0]))))))))));
                var_16 = (arr_0 [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 -= var_12;
                            var_18 ^= ((((((((arr_9 [i_0] [i_0]) * var_1))) ? ((max((arr_9 [i_3 + 3] [i_0]), var_3))) : (var_11 - var_1))) * ((((arr_6 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]) > var_11)))));
                        }
                    }
                }
                arr_10 [i_0] = (max(((((((arr_4 [i_1] [7] [i_0]) ? var_13 : (arr_5 [i_1]))) == ((((arr_2 [11] [11]) > (arr_1 [i_0]))))))), (max((min((arr_7 [i_1]), var_5)), (((arr_8 [i_0]) ? var_9 : var_3))))));
                arr_11 [i_0] [i_0] = ((var_10 ? (min(((((arr_0 [i_1]) ? var_5 : var_4))), (min(var_0, (arr_4 [i_0] [i_0] [i_0]))))) : (arr_4 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}

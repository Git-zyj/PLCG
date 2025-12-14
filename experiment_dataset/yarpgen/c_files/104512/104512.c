/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((((min(var_0, var_10)))) & var_8)) - ((((var_6 ? var_8 : var_2))))));
    var_13 = (min(var_13, (92 >= 86)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((~(((arr_2 [i_1]) ? (((arr_1 [i_0]) ? (arr_2 [i_1]) : (arr_0 [3] [i_1]))) : (var_5 & var_10)))));
                var_14 = (min(var_14, ((((((arr_4 [i_0] [i_1 - 1] [i_1]) ? (var_7 > var_0) : ((-(arr_0 [i_0] [i_1 - 1]))))) <= ((((((((arr_2 [i_0]) ? (arr_0 [i_1 - 1] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))) || ((max((arr_3 [i_0] [16] [i_1 + 1]), (arr_3 [i_0] [i_0] [i_1])))))))))))));
            }
        }
    }
    var_15 -= ((var_9 ? (var_5 + var_2) : var_10));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_16 |= -2409372817;
                    var_17 = ((68 ? 191 : 1687500802));
                    var_18 = var_1;
                }
            }
        }
    }
    #pragma endscop
}

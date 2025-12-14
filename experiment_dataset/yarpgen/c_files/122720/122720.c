/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_9, var_9));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_12 = ((arr_0 [i_0 + 1]) ? (((arr_1 [i_0]) ? (arr_2 [i_0]) : var_5)) : (arr_1 [i_0 + 1]));
        var_13 = ((var_9 & (arr_2 [i_0 + 1])));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_2] = var_1;

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_16 [i_1] |= ((~(((max(var_2, (arr_9 [i_1])))))));
                        var_14 = max((arr_15 [i_1] [i_2] [i_3] [i_3]), ((((min(var_10, (-2147483647 - 1)))) ? (max((arr_7 [i_1 - 1] [i_2]), 65519)) : var_7)));
                        var_15 = ((((((!16) ? (arr_0 [i_3]) : (((16 ? var_7 : var_3)))))) ? (max(((((arr_12 [i_1] [i_2] [i_2] [i_4]) ? 16 : (arr_9 [i_2])))), (arr_0 [i_1 - 1]))) : (((max(var_4, 65529))))));
                        var_16 = ((!((min((arr_15 [i_1] [i_1] [i_1 - 1] [i_1 - 1]), (arr_15 [i_1] [3] [i_1 - 1] [i_1 - 1]))))));
                    }
                    var_17 = (((min(((1 ? var_4 : var_8)), (((arr_3 [i_1] [i_2]) ? 23560 : 16))))) || ((((arr_8 [i_1 - 1] [i_1 - 1]) ? (arr_9 [i_1 - 1]) : (max(677105948590340424, 16))))));
                }
            }
        }
    }
    var_18 = (-(-var_6 * var_3));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [23] = (arr_3 [i_0 + 2] [i_1 - 2]);
                var_14 = ((((((arr_1 [i_1 - 1] [15]) ? (((arr_3 [i_0] [i_1 - 1]) ? var_8 : var_11)) : var_3))) ? (arr_0 [i_1]) : ((min((max((arr_2 [i_0] [i_0] [i_1]), var_2)), (arr_1 [i_0 + 1] [i_1 + 1]))))));
                var_15 = (arr_1 [1] [i_1]);
            }
        }
    }

    for (int i_2 = 1; i_2 < 24;i_2 += 1) /* same iter space */
    {
        arr_7 [7] = (((~(min((arr_5 [i_2]), (arr_3 [i_2] [i_2]))))));
        var_16 ^= (((((max(var_2, (arr_2 [i_2] [i_2] [i_2]))) > var_6)) ? ((((((arr_5 [i_2]) + (arr_6 [3]))) <= ((((arr_5 [i_2]) && (arr_0 [i_2]))))))) : (!-1111839339)));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 24;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = (~-32153);

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_14 [i_3] = ((((((arr_3 [1] [i_3 - 1]) + (arr_9 [i_3])))) ? (((arr_5 [7]) ? (arr_6 [i_4]) : (arr_13 [i_3]))) : var_6));
            var_17 = ((+(((arr_10 [i_3]) ? (arr_2 [i_3] [i_3] [i_3]) : (arr_10 [i_3])))));
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    {
                        var_18 *= (((arr_3 [i_3 + 1] [i_3 - 1]) ? (arr_3 [i_3 + 1] [i_3 - 1]) : var_4));
                        var_19 = (((arr_15 [i_6] [i_3] [i_3] [i_3 - 1]) * (arr_15 [i_3 - 1] [i_3 - 1] [i_3] [i_6 - 1])));
                        arr_20 [i_3 - 1] [i_3] [i_3] [i_3] = (((arr_9 [i_6 - 1]) >> (((arr_9 [i_6 + 1]) - 77035129))));
                        arr_21 [i_3] [5] [5] [i_3] = (((arr_12 [i_4] [i_6 - 1]) ? ((var_0 ? var_12 : (arr_1 [18] [i_3]))) : var_3));
                        var_20 ^= ((2147483647 >> (arr_19 [i_3] [i_3 + 1] [i_4] [i_5 + 1] [i_6 + 1] [i_4])));
                    }
                }
            }
        }
    }
    #pragma endscop
}

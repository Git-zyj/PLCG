/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_2;
                    arr_9 [i_0] [i_1] [0] [i_1] |= (((arr_3 [1] [i_2] [i_2]) | -88));
                }
            }
        }
        arr_10 [i_0] [11] = (arr_7 [i_0] [i_0] [0]);
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_13 [i_3] = (((max((arr_5 [i_3] [i_3] [i_3]), ((max(1, var_3)))))) ? (((1858384163 ? 20 : -1858384158))) : (((arr_7 [i_3] [i_3] [i_3]) & (var_6 < var_8))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_18 [i_3] [i_3] [i_3] = (((((((min(var_2, 1))) ? (arr_1 [i_3]) : 12899305003887790521))) ? var_1 : ((((arr_3 [0] [i_3] [3]) ? (arr_4 [14] [i_4]) : (var_6 < 4294967295))))));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                arr_21 [5] [5] [i_3] = 1;
                arr_22 [i_3] [1] [14] [i_5] |= (arr_4 [10] [10]);
            }
        }
        var_15 = arr_1 [i_3];
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_16 = (((18446744073709551615 & 8) ? (-108 <= -47) : 82));
        var_17 = ((+(((arr_25 [i_6] [i_6]) ? -2147483645 : (arr_24 [i_6] [i_6])))));
    }
    var_18 *= ((((min(var_8, 12))) ? (max((max(var_2, 1858384163)), ((max(26, 26))))) : var_7));
    #pragma endscop
}

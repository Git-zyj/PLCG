/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(0, ((((max(var_10, var_0)) >> (!18446744073709551602))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0]) / ((72057593769492480 * (arr_0 [i_0])))));
        var_17 = ((!(arr_2 [i_0])));
        var_18 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_1] [i_2] = ((!(arr_11 [i_1] [i_2] [i_4])));
                        arr_16 [i_1] [i_2] [i_3] [i_2] = (((arr_5 [i_1]) >> 0));
                        arr_17 [i_1] [i_1] [i_2] [i_3] [i_3] [i_2] = ((0 ? (arr_11 [i_1] [i_2] [i_3]) : (arr_11 [i_1] [i_2] [i_4])));
                    }
                }
            }
        }
        var_19 = (((arr_14 [i_1] [i_1] [i_1] [4]) ? (arr_11 [i_1] [i_1] [i_1]) : (arr_14 [0] [i_1] [i_1] [0])));
        arr_18 [i_1] [i_1] = (arr_7 [i_1]);
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                arr_26 [i_5] [i_6] [i_6] = ((var_5 ? ((((min(0, (arr_20 [i_6] [i_5 - 1])))) ? (min(var_8, 1)) : ((((arr_22 [i_5] [i_6]) * 122))))) : (((((var_10 ? (-2147483647 - 1) : 0))) ? (arr_25 [i_6]) : (((1 ? (arr_21 [i_6] [i_5 - 1]) : 0)))))));
                var_20 = (((arr_22 [i_5 + 2] [21]) ? (!255) : ((~(arr_19 [i_6])))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_4 * var_13);

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [6] [i_1] = -var_12;
                    var_18 = (((((16777215 ? (arr_7 [i_0] [i_1] [i_0 - 4]) : (arr_7 [i_0] [i_1] [i_0 - 4])))) ? (1 * 65535) : ((var_10 ? var_2 : var_5))));
                }
            }
        }
        var_19 = ((~((((arr_6 [i_0] [0] [10] [i_0 - 1]) || ((!(arr_1 [i_0]))))))));
        var_20 = (((var_1 != var_12) ? (arr_4 [i_0 + 1] [i_0 - 3]) : (max((arr_4 [i_0 - 4] [i_0 - 1]), (arr_2 [i_0 - 3])))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = -1;
        arr_12 [i_3] [i_3] = var_4;
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_21 = ((1320937784 ? 4278190080 : 8039));
        var_22 = ((((max(var_1, var_6))) > ((4294967295 ? (arr_13 [i_4] [i_4]) : (arr_13 [i_4] [i_4])))));
        var_23 = var_10;
    }
    #pragma endscop
}

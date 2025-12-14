/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (arr_3 [i_0 - 3]);
        arr_5 [0] = ((-15 ? 79 : 191));

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            var_15 = ((var_9 + (((arr_1 [1]) << (var_13 - 891469227)))));
            var_16 = var_6;

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_17 |= (arr_11 [i_1] [i_0 + 1] [i_2]);
                var_18 = (arr_8 [3] [3] [i_2]);
                arr_12 [i_0] [14] = (arr_11 [i_2] [i_1] [i_0]);
                arr_13 [i_2] [i_2] [i_1] [10] = ((16756 ? ((var_3 ? var_6 : 235)) : (arr_7 [i_0] [i_1] [i_2])));
                arr_14 [i_2] = -29475;
            }
            arr_15 [2] [i_1] = (((224 <= 1157929108) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : 69));
            arr_16 [16] [i_0] [i_1] = var_7;
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_19 [i_3] = ((var_1 ? ((2068611985 ? (arr_7 [i_0] [i_0] [i_3]) : -29475)) : var_12));
            var_19 = (min(var_19, 122));
        }
    }
    var_20 = (((max(var_12, var_11)) > 69));

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_21 = ((3 ? var_6 : ((((min((arr_21 [i_4]), var_1)))))));
        arr_23 [i_4] [i_4] = (max((arr_22 [i_4] [i_4]), var_3));
    }
    #pragma endscop
}

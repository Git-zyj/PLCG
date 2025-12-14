/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [5] = (arr_3 [i_0] [i_0]);
        var_20 += (arr_2 [i_0 + 1]);
        arr_5 [11] = (((arr_1 [i_0] [i_0 + 1]) && (arr_1 [i_0 - 1] [i_0 - 2])));
        var_21 = (max(var_21, 72));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_8 [0] = ((-8102376798240453266 / (arr_0 [i_1 - 1])));
        var_22 = 54929;
        var_23 = arr_3 [i_1 - 1] [i_1];
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
    {
        arr_11 [1] = 8780708750473142211;
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    {
                        var_24 = arr_14 [i_2 + 1] [i_3 + 2];
                        var_25 = ((((((~(arr_6 [i_2 + 1]))) + 2147483647)) << (((arr_10 [i_2 + 1]) >> (((arr_10 [i_2 - 1]) - 10186))))));
                    }
                }
            }
        }
        var_26 = (max(var_26, ((min((arr_12 [i_2 + 1]), (min(-68, 8780708750473142211)))))));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = 16777216;
        arr_23 [i_6] = -86;

        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_28 [i_6] [i_6] [i_7] = 54913;
            arr_29 [i_6] [i_7] [i_6] = 10607;
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {
                        var_27 = 11754355611430754688;
                        var_28 = (((arr_32 [i_8] [i_6 - 1] [i_6 + 2]) * (arr_1 [i_10] [1])));
                        var_29 = ((!(arr_19 [i_6])));
                    }
                }
            }
            var_30 = 1;
        }
        var_31 = (arr_32 [i_6] [i_6 + 1] [i_6]);
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            {
                var_32 = arr_0 [10];
                var_33 = (arr_41 [i_11]);
                var_34 = (((((arr_2 [i_11]) % (arr_2 [i_11]))) <= ((min((arr_2 [i_12]), (arr_42 [i_11] [i_12]))))));
            }
        }
    }
    var_35 = 92;
    var_36 = var_14;
    var_37 = var_12;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_19 = (max((arr_3 [i_0 + 1]), (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 1])))));
        var_20 = ((max(((min(var_7, var_17))), -18)));
        var_21 = var_1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (35183298347008 % -105);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_2] [i_3] = (max((((arr_4 [i_3] [i_2]) ? (arr_4 [i_2] [i_2]) : var_2)), var_5));
                    arr_14 [i_1] [i_2] [i_3] [i_3] = (max(var_6, (arr_0 [i_3])));
                    var_23 = 2665315224;
                }
            }
        }
        var_24 = var_6;
    }
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((((-127 ? -87 : 64349)) >= ((768 ? 0 : -16636))));

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_25 = (((((-12561 ? 31744 : 1))) ? (arr_18 [i_4 + 3] [i_4 - 1]) : -127));
            var_26 = ((!(((-15904 ? var_12 : ((min(var_6, var_15))))))));
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_27 = ((var_17 | ((-(arr_0 [i_6])))));
            arr_25 [i_6] = ((!((max(var_17, var_4)))));
            var_28 = var_3;
        }
        var_29 = var_17;
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        var_30 = arr_12 [i_7] [i_7] [i_7] [i_7];
        var_31 = ((!(45713 <= -1482314157)));
        var_32 = (~5322590007663516538);
        var_33 = ((-(arr_0 [10])));
    }
    var_34 = var_13;
    #pragma endscop
}

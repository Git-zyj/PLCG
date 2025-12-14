/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_16 = (var_6 + 17159630004165212258);
        arr_2 [i_0] [i_0] = (!-10823);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (17159630004165212258 % 255);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_15 [i_1] [i_3] [i_1] = ((((!(arr_0 [i_1] [i_1])))));
                        arr_16 [i_1] [i_2] [i_1] [i_4] = (18446744073709551615 || var_2);
                        arr_17 [i_1] [i_1] [i_2] [i_1] = (((((arr_8 [i_1]) / 17159630004165212258)) >> (1287114069544339364 - 1287114069544339352)));
                    }
                }
            }
        }
        arr_18 [i_1] = 18446744073709551615;
        arr_19 [i_1] [i_1] = ((!(((var_12 - (arr_4 [i_1]))))));
        var_17 += -1;
    }
    var_18 -= var_14;

    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_22 [i_5] = (max((((-(arr_21 [i_5])))), ((17159630004165212258 ? 29831 : 1870259915171413850))));
        arr_23 [i_5] = min((((((1287114069544339357 ? (arr_3 [i_5]) : (arr_8 [i_5])))) ? (arr_9 [i_5]) : (!var_0))), ((max(var_11, (max(var_11, var_6))))));
    }
    #pragma endscop
}

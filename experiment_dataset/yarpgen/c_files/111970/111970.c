/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_14 && var_16);

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_19 = (max(var_4, (min(((11267 ? var_0 : 395482364)), var_16))));
        arr_2 [i_0] [i_0] = (min(-2157776031291221400, 17032777620302445347));
        arr_3 [i_0] [i_0] = arr_0 [i_0];
        var_20 = (((max((min(var_1, 1116141062)), 3310622867)) - (((((var_13 ? (arr_1 [i_0]) : var_10))) ? (var_10 - 127) : (min(20145, var_2))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_22 = (min(var_22, (!var_9)));
                    var_23 ^= ((((var_16 ? -15996 : var_4)) - (((arr_6 [i_3]) ? var_13 : -15982))));
                    arr_12 [i_3] [i_1] [i_1] [i_1] &= var_10;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        arr_15 [i_4] = ((-((var_15 ? -15996 : (arr_11 [i_4] [i_4] [i_4] [16])))));
        arr_16 [i_4] = (max(((984344428 ? var_14 : (arr_0 [i_4]))), (!var_15)));
    }
    var_24 = ((((((var_10 + -9223372036854775806) ? var_5 : (var_13 - var_10)))) ? var_11 : (min(var_12, var_5))));
    var_25 = ((var_10 ? var_0 : var_10));
    #pragma endscop
}

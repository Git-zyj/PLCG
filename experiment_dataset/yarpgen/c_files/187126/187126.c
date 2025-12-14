/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!((24299 == ((-24294 ? -24306 : -24306))))));
        arr_5 [i_0] = ((((min(-19963, 8))) - var_0));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_9 [i_1] = ((!((!((min(-127, (arr_6 [i_1]))))))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_1] [i_1] [i_1] = ((-((((max((arr_10 [i_1] [i_1]), 3111239459))) ? (((-24306 ? var_14 : (arr_6 [i_2])))) : ((-24269 ? (arr_11 [i_1]) : (arr_11 [i_1])))))));
            arr_13 [i_1] [i_1] = (((arr_7 [i_1] [i_2]) ? (((((61189 ? (arr_6 [i_1]) : var_11)) * (((max(32767, (arr_8 [i_2])))))))) : (min(((min(var_3, var_7))), (max((arr_11 [i_1]), var_7))))));
            arr_14 [i_1] = var_9;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_17 [i_1] [i_1] = (((arr_8 [i_3]) % (arr_8 [i_1])));
            arr_18 [i_1] [i_3] = (((((10 ? 19963 : -19963))) ? (arr_7 [i_1] [i_3]) : (arr_15 [i_1])));
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_25 [i_4] [i_4] [i_5] = (min(var_11, 22));
                    arr_26 [i_4] [i_4] [i_4] [i_4] = -7410810060828440173;
                    arr_27 [i_4] [i_4] [i_4] [i_6] = ((-((((((arr_22 [i_4] [i_4] [i_6]) ? (-32767 - 1) : (arr_20 [i_6])))) ? (arr_23 [i_4 + 1] [i_4 + 1] [i_4 + 1]) : ((((arr_22 [i_4] [i_4] [i_6]) % 29937)))))));
                }
            }
        }
    }
    var_19 = (!var_0);
    #pragma endscop
}

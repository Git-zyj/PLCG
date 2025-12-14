/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_14 ? (var_1 & var_17) : var_15);
    var_20 = ((var_3 && ((max((!-4), (~var_10))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (((!25740) / -2142567767));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    var_22 += ((-(~var_16)));
                    arr_8 [i_1] = (arr_1 [i_2 - 2] [i_1]);
                    arr_9 [i_0] [i_1] [i_1] [i_1] = 1;
                }
            }
        }
        arr_10 [i_0] = var_4;
        arr_11 [i_0] = ((173403954 ? 110 : (arr_1 [8] [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_23 = var_0;
        arr_15 [i_3] = (arr_14 [i_3 - 3] [i_3]);
        var_24 -= (0 ? -1 : 0);
    }
    for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_25 = ((+(((arr_12 [i_4 + 1]) ? (arr_17 [i_4 - 2]) : 65535))));
        var_26 = ((((~(arr_16 [i_4 - 1]))) != ((1 ? 60 : 26626))));
        var_27 = (min(var_27, ((((arr_14 [i_4 - 3] [i_4]) ? -1113591539 : (((-(arr_14 [i_4 + 1] [13])))))))));
    }
    var_28 = ((~(-19682 | 689706594)));
    #pragma endscop
}

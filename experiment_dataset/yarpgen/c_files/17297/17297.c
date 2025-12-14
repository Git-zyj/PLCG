/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_8);
    var_15 = var_12;
    var_16 = var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_17 = 32767;
        var_18 = (!-9223372036854775807);
        var_19 += var_9;
        var_20 = ((-(((-22 == (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (((arr_2 [i_0] [i_1 - 1]) ? 32768 : ((((arr_1 [i_0]) || var_1)))));

                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        var_22 += (var_11 ? (40016 | var_12) : ((~(arr_1 [i_3]))));
                        var_23 = (min(var_23, (arr_0 [i_3] [i_3])));
                        var_24 -= (((arr_4 [i_2]) ? (arr_4 [i_2]) : (arr_4 [i_3])));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_25 = (min(var_25, ((((((224 ? (arr_0 [4] [4]) : var_11))) ? (((arr_0 [2] [i_4]) ? (arr_0 [0] [i_4]) : (arr_0 [2] [i_4]))) : ((~(arr_0 [2] [2]))))))));
        var_26 = (max(var_26, (arr_10 [i_4])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        arr_15 [i_5] [i_5] = arr_9 [i_5];
        var_27 = (max(((max(-112, 32768))), (max(var_7, var_1))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_28 = (!-9223372036854775807);
        var_29 += (arr_3 [1]);
        var_30 = (min(var_30, ((((arr_4 [2]) ? -16384 : (~var_11))))));
        var_31 = (min(var_31, ((((arr_17 [i_6] [i_6]) ^ (arr_17 [i_6] [i_6]))))));
    }
    #pragma endscop
}

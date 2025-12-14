/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0]) ? ((9223336852482686976 ? 15393162788864 : -18732)) : (((arr_1 [i_0]) ? var_12 : (arr_0 [i_0])))))) ? (min((((var_8 ? var_13 : (arr_2 [i_0] [i_0])))), (arr_0 [i_0]))) : (((+(((arr_2 [i_0] [i_0]) * var_9)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [4] [i_1] [i_1] [i_1] = ((~(max(-18728, ((18446744073709551602 ? 138 : -18731))))));
                    var_20 = (max((arr_6 [i_1]), ((((max(var_3, (arr_6 [i_1])))) ? var_6 : (arr_0 [i_0])))));
                    arr_10 [i_0] [i_1] [i_2] = (max((min((((arr_6 [i_1]) ? (arr_5 [i_1]) : var_0)), ((~(arr_8 [i_0]))))), ((var_5 ? 1 : (arr_5 [i_1])))));
                    var_21 = (min(((~((((arr_1 [i_0]) < var_7))))), var_4));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_22 = ((!var_7) <= (max(var_9, var_16)));
            var_23 = (min(((min((min(-18743, 64)), (min((arr_13 [i_3]), 32758))))), (((arr_11 [i_3]) * (((var_9 ? var_6 : (arr_2 [i_4] [i_3]))))))));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            var_24 = (min((((arr_15 [i_3] [i_5] [i_5]) ? (arr_18 [i_3] [i_5] [6]) : (arr_18 [i_3] [i_5] [6]))), ((max((arr_18 [i_3] [i_5] [i_5]), (arr_18 [16] [i_3] [i_3]))))));
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_25 = (min((arr_15 [i_3] [i_3] [i_6]), var_6));
                        var_26 = (min(var_11, (~var_14)));
                        arr_25 [i_5] = ((-(((!((min(var_4, (arr_16 [i_3] [i_3])))))))));
                    }
                }
            }
        }
        var_27 = (arr_12 [i_3]);
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_28 = (max(42083029813853918, (max((arr_22 [i_8] [i_8] [i_8]), (arr_5 [i_8])))));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_29 = (~9);
            arr_31 [i_8] = var_17;
            var_30 = (((arr_11 [i_9]) ? (arr_7 [19] [i_8] [i_8]) : (arr_5 [i_8])));
        }
        arr_32 [i_8] = (max(((((max(-18735, var_7))))), (max((arr_22 [i_8] [i_8] [i_8]), (arr_22 [i_8] [i_8] [i_8])))));
    }
    var_31 = var_7;
    #pragma endscop
}

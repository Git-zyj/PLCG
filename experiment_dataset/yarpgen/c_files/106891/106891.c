/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 251;

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_13 = (arr_1 [3] [i_0]);
        arr_2 [i_0] [i_0] = ((~(arr_0 [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    {
                        var_14 = (~var_9);
                        var_15 = ((1 ? var_11 : (arr_7 [i_3] [i_2 - 1] [i_2] [i_1] [i_0])));
                        var_16 = 2875986633;
                    }
                }
            }
            arr_11 [1] [i_1] = ((1 ? ((var_6 ? 2722048148922734689 : var_11)) : var_8));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            var_17 = (var_2 / 17072145143716285502);
            var_18 = ((((1418980675 ? 1 : var_1)) > (arr_1 [i_0] [i_4 - 1])));
            arr_14 [9] = (!2147483647);
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    {
                        var_19 |= ((((max((arr_15 [i_0]), var_0))) ? (max(var_8, 654630779)) : (arr_17 [i_0] [9] [i_7 + 3] [i_6])));

                        for (int i_8 = 2; i_8 < 13;i_8 += 1)
                        {
                            arr_27 [i_7] [i_5] [0] [i_7] [i_8] = (min(34, ((~(var_8 == 3351348390)))));
                            var_20 = (max(var_20, ((max(55161, 654630781)))));
                            var_21 = (max(var_21, (((((max((arr_9 [i_0] [i_0]), 1))) ? (((((184 * 421642571016144401) < (arr_7 [5] [i_8 - 1] [i_8] [i_8 - 1] [i_7 - 1]))))) : (3388561770 ^ 125))))));
                            var_22 = (max(1091, (arr_15 [i_0])));
                            var_23 = (max(521319057, 118));
                        }
                        var_24 |= var_11;
                    }
                }
            }
            var_25 = var_5;
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] [i_9] = ((-(!1167269871)));
        var_26 = ((arr_4 [i_9] [i_9] [i_9]) ? -1783503420 : (((-26859 + 2147483647) << (654630768 - 654630768))));
        var_27 = (2864 ^ 16128);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_28 = -10393723703157089595;
            arr_39 [i_10] = ((-(~var_11)));
        }
        var_29 = (!801219123);
        var_30 = -var_1;
    }
    #pragma endscop
}

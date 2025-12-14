/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_14 = ((((!(arr_5 [i_1 + 1] [i_2 - 1] [i_2]))) ? (((0 && (((35243 ? 0 : 2567)))))) : (!var_7)));
                    var_15 = (!3492799318);
                    var_16 = (min((arr_6 [i_0] [i_0] [i_1] [15]), 24540));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {
            var_17 = ((var_3 | (-2147483647 - 1)));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_18 = (((~(arr_12 [5] [i_6]))));
                        arr_19 [i_4] &= ((!((((arr_15 [i_4]) * 224)))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            arr_23 [i_3] = (-85 | -4);
            var_19 = var_11;
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_20 |= ((((max(var_2, ((min(-4687406845565482215, 3)))))) ? (((~((min((arr_24 [11]), var_6)))))) : (min((((32767 ? 0 : 3125))), 104960812548061526))));
                            var_21 += (arr_13 [i_3 + 2] [i_8] [10] [i_10]);
                        }
                    }
                }
                arr_33 [3] [i_3] [i_9] = 106;
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
            {
                var_22 = (((arr_2 [i_3 - 1]) <= -4647552280148354764));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        {
                            arr_41 [i_3] [12] [i_12] [12] = ((!(arr_13 [i_3] [i_3] [i_3 - 1] [i_13 - 2])));
                            var_23 |= (!var_0);
                            arr_42 [i_13] [i_3] = var_3;
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
            {
                var_24 = 72;
                arr_46 [i_3] [i_3] [i_3] = (((~((var_9 ? var_6 : var_1)))));
                var_25 = var_5;
                var_26 = ((840214843 ? 28 : 54281));
                var_27 = (((min(var_1, var_1))) >= var_4);
            }
            var_28 = ((-(min((252 && 4842607066417230920), ((var_12 ? -8769358571178337611 : var_11))))));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 10;i_18 += 1)
                    {
                        {
                            var_29 = ((((!(arr_38 [i_18] [i_17 + 2] [i_16] [i_8] [i_3])))));
                            var_30 = (max(((-((~(arr_38 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 1]))))), ((min(1, 65518)))));
                        }
                    }
                }
            }
            var_31 = (22891 / 974551932);
        }
        var_32 -= min(((-(((arr_15 [i_3]) ? 9106700307834212932 : 3812428261)))), (((-1250137369 ? -97 : -648846348))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_16 = ((((((max(var_1, -7787642558751970901))) ? var_2 : 79)) * (max(-1, ((var_14 ? var_5 : (-9223372036854775807 - 1)))))));
                        var_17 *= max((max(-1, ((-6558547933957212192 ? -2503581310320266149 : 2310574085050067144)))), ((((arr_1 [i_3 - 1] [i_0 + 1]) >= var_13))));
                    }
                    var_18 &= (((((var_4 ? ((var_6 ? (arr_2 [i_2] [0] [6]) : -3298114935048038034)) : (~7787642558751970900)))) ? (max(((((arr_7 [i_0] [0] [i_1] [i_2]) & var_10))), (max(var_9, (arr_3 [i_0]))))) : var_8));
                    arr_8 [i_0] [i_2] [i_0] = (-6558547933957212193 & -1);
                    var_19 -= (~var_0);
                }
            }
        }
        var_20 = 536870911;

        for (int i_4 = 3; i_4 < 9;i_4 += 1)
        {
            arr_13 [i_0] [i_0] = max(72057594033733632, ((max((arr_9 [i_0] [i_4] [i_4 + 1]), (arr_9 [i_0 + 1] [i_4 + 1] [i_4 - 2])))));
            var_21 = (var_2 + (((arr_5 [i_0 + 1] [i_4 + 2]) - (arr_5 [i_0 + 1] [i_4 + 2]))));
            arr_14 [1] [i_0] [1] = 75;
        }
        for (int i_5 = 3; i_5 < 8;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    {
                        var_22 += (+((-((var_6 ? (arr_9 [i_0] [i_0] [i_0]) : -7787642558751970916)))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] = (-(arr_6 [i_0] [i_5] [i_5] [i_5] [i_5] [i_5]));
                            arr_28 [i_8] [i_7] [i_0] [i_0] [i_5] [i_0] = (var_15 + (((max((arr_9 [i_7 - 1] [i_5 + 3] [i_0 + 1]), (arr_10 [i_5 + 3] [i_0 + 1]))))));
                        }
                        for (int i_9 = 2; i_9 < 10;i_9 += 1)
                        {
                            arr_32 [4] [i_0] [7] [10] [1] [i_7] [i_9] = (((~var_12) == (~153)));
                            arr_33 [i_0] [i_0] [i_6] [i_6] [i_0] [i_9] [i_9] = ((-(((arr_11 [i_5 - 3] [i_9 - 1]) ? (arr_11 [i_5 + 3] [i_9 + 1]) : (arr_11 [i_5 + 1] [i_9 - 1])))));
                            var_23 = (max(((-(arr_11 [i_9 - 2] [i_5 + 1]))), (arr_0 [i_9 - 1] [9])));
                            arr_34 [i_0] [i_9] [i_7] [i_6] [i_5] [1] [i_0] = 31;
                            var_24 = (min(var_24, (max(((((!-7787642558751970913) && 7787642558751970900))), 18014398505287680))));
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 9;i_10 += 1)
                        {
                            var_25 = (arr_4 [i_7] [i_7] [i_0]);
                            var_26 = (min(var_26, (((~(arr_19 [i_5] [i_10] [i_10] [i_10 + 1]))))));
                        }
                        arr_39 [i_0] [i_0] [0] [0] [i_7] &= arr_29 [i_0] [i_0] [i_5 - 1] [i_0] [i_6] [i_6] [i_7];
                        var_27 = (arr_1 [i_0] [i_5]);
                        var_28 = (arr_5 [i_0] [i_0]);
                    }
                }
            }
            var_29 = (min(var_29, var_3));
            var_30 = -79;
        }
        arr_40 [i_0] = (+(((!var_12) ? (9050085955958098379 - var_14) : var_8)));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1)
    {
        var_31 = (max(var_31, (((((max((arr_42 [1]), var_15))) < (0 * 1048575))))));
        var_32 = ((!((((arr_42 [i_11]) - (arr_42 [i_11]))))));
        var_33 = (min(var_33, (1 - var_15)));
    }
    var_34 &= max((1 - -223275688816103094), -5749953464537587942);
    var_35 = (min(var_35, var_5));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1415097480;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0]) && (arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_17 ^= ((var_10 ? ((~(arr_7 [i_3] [i_3] [8]))) : (arr_0 [13])));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_18 = (((arr_6 [17] [i_1] [i_0]) ? (arr_2 [i_0] [i_0]) : ((1 ? (arr_6 [i_3] [15] [i_0]) : var_7))));
                            var_19 = 0;
                            var_20 = var_4;
                        }
                        var_21 = (arr_10 [i_3] [12] [i_2] [i_2] [i_1] [i_0]);
                        var_22 *= 11313;

                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_23 = (arr_4 [17] [i_3] [i_2]);
                            var_24 = (min(var_24, var_2));
                            var_25 = (((arr_0 [i_2]) % var_14));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_26 = (((((~(arr_11 [i_0] [i_0] [21] [i_0] [i_0] [i_0] [i_0])))) ? (((arr_7 [i_0] [i_2] [13]) / var_0)) : var_3));
                            arr_15 [i_2] = (((arr_8 [i_6] [i_6] [i_6]) ? (arr_11 [i_6] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0]) : 4050227998));
                            arr_16 [20] [i_2] [i_2] [i_2] [i_2] = (((!var_2) || 64078));
                            var_27 = ((~(arr_1 [i_6])));
                            var_28 |= ((arr_9 [i_0]) ? (arr_6 [i_6] [12] [i_2]) : var_5);
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            var_29 = (max(var_29, (((arr_9 [i_0]) * (((!(arr_9 [i_7]))))))));
                            var_30 = 1;
                            var_31 ^= var_4;
                            var_32 = ((arr_17 [i_0] [i_1] [i_2] [i_3] [i_7]) ? (arr_17 [i_7] [i_3] [i_2] [i_1] [i_0]) : (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                        {
                            var_33 = (((arr_7 [i_0] [i_8] [i_8]) ? ((-(arr_17 [i_0] [i_0] [i_2] [i_0] [i_8]))) : var_0));
                            var_34 = (~var_3);
                            var_35 = ((~(arr_3 [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_36 = var_7;
    var_37 = var_14;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 |= ((~((((max(9618752302986562905, -7344982759200567866))) ? var_10 : (30123 > var_3)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [1] = ((!4294967285) | (arr_1 [i_0]));
        var_19 = 3837999187207014798;
        var_20 = 4294967283;

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_21 = (((-(arr_1 [i_1]))) << (((arr_0 [i_0]) - 61034)));
            var_22 = (arr_0 [i_0]);
            var_23 = (min(var_23, (arr_1 [i_0])));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_24 = (1606079120 ^ (arr_4 [i_0] [i_0] [i_0]));
            var_25 = (arr_8 [i_0] [i_0]);
            arr_9 [i_0] [i_0] [i_2] = ((~(((arr_5 [i_0] [14]) / (arr_6 [17] [i_2])))));
        }
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_26 = arr_12 [i_3];
        arr_14 [i_3] &= (((min(18446744073709551615, (arr_8 [i_3] [i_3]))) << (5151994762669225383 - 5151994762669225322)));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        arr_26 [i_3] [11] [i_5] = ((~(arr_1 [i_6])));
                        var_27 -= (min((((arr_10 [i_3 + 4]) / -1)), (744448000 != 3837999187207014808)));
                        var_28 = ((~((((arr_10 [i_3 + 2]) > (arr_12 [i_3 + 4]))))));
                        var_29 = (max(var_29, (arr_12 [i_5])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            {
                                arr_43 [i_7] [i_7] [i_7] [i_10] [i_7] = 7344982759200567865;
                                var_30 = ((46202087558066009 > (3837999187207014809 || -7344982759200567866)));
                            }
                        }
                    }
                    arr_44 [6] &= arr_31 [2];
                    arr_45 [i_7] = ((-((2999895795 << (3837999187207014785 - 3837999187207014754)))));
                }
            }
        }
        var_31 += 47368;
    }
    var_32 = 3837999187207014808;
    #pragma endscop
}

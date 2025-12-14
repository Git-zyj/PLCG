/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 = (arr_2 [i_0 - 1] [i_0 - 1]);

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_21 = (((arr_0 [i_0]) || (arr_0 [i_0])));
            var_22 *= 7473757265592838410;
        }
        arr_7 [i_0] = ((10972986808116713205 - (!7473757265592838396)));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_23 += 0;
            var_24 = (((arr_2 [i_0 + 1] [10]) >> (4294967294 - 4294967245)));
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_25 = 1;

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_15 [i_3] [i_3] = (arr_12 [i_3] [13]);
            var_26 = (arr_10 [i_3] [i_3]);
            var_27 = ((arr_13 [0] [i_4]) - 96);
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    {
                        var_28 = arr_10 [15] [15];
                        arr_20 [15] [i_4] [i_5] [i_6 - 1] = (arr_12 [i_5 - 1] [i_6 - 2]);
                        var_29 = (arr_18 [i_3] [i_4] [i_5] [i_4]);
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                arr_27 [13] [13] [i_8] |= (((arr_14 [i_7] [i_3]) % (arr_19 [i_3] [i_7] [i_8])));
                var_30 = ((!(arr_16 [i_3] [i_3] [5] [i_3])));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_33 [i_10] [i_7] [i_7] [i_7] [i_3] [i_3] = (arr_26 [i_9] [i_8] [2] [i_3]);
                            var_31 = ((~(((arr_24 [i_8]) >> (((arr_12 [i_3] [i_7]) - 156))))));
                            var_32 = ((~(arr_14 [i_9 + 1] [i_9 - 1])));
                        }
                    }
                }
                var_33 += ((-(arr_30 [i_3] [3] [i_8] [i_3])));
            }
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        var_34 = ((~(arr_32 [8] [8] [12] [i_11 - 2] [14] [0] [i_11])));
                        var_35 = (arr_31 [i_3] [i_3]);
                        var_36 = (max(var_36, (((~((~(arr_10 [i_3] [13]))))))));
                        var_37 = ((arr_19 [i_3] [i_7] [i_11]) || (arr_30 [i_3] [i_7] [i_11 - 1] [i_7]));
                    }
                }
            }
        }
    }
    #pragma endscop
}

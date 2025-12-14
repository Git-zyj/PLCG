/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174194
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = var_13;
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_18 = (((arr_4 [i_2]) ^ (arr_11 [i_1] [i_2] [i_3] [i_4])));
                        arr_12 [i_1] [i_1] [i_3] [i_4] = (arr_6 [i_3]);

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_19 += (((arr_14 [i_2] [i_3] [i_5]) ^ (arr_8 [i_1] [i_2] [i_3] [i_4])));
                            var_20 = (arr_6 [i_1]);
                            arr_16 [i_1] [i_1] [i_3] [i_3] [i_3] = (((arr_10 [i_1] [i_2] [i_2] [i_2]) <= ((var_1 ? 14686005398194416311 : (arr_11 [i_1] [i_2] [i_5] [i_4])))));
                            var_21 = (arr_7 [i_1]);
                        }
                        var_22 = (((((-127 - 1) + 2147483647)) << (15280754496240137926 - 15280754496240137926)));
                    }
                }
            }
            var_23 = ((~(arr_6 [i_1])));
            arr_17 [i_1] [i_2] [i_2] = ((~(arr_11 [i_1] [i_1] [i_2] [i_2])));
        }
        var_24 = (arr_4 [i_1]);
        arr_18 [i_1] [i_1] = (((-1384370235615521977 ? var_8 : 14052481873708223329)));
        var_25 &= ((~(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        arr_21 [i_6 + 1] = (arr_13 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_6]);
        var_26 |= ((var_2 ? (arr_19 [i_6]) : ((((min(var_17, var_12))) ? (min((arr_15 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6]), var_10)) : -var_6))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 18;i_8 += 1)
            {
                {
                    var_27 += ((!(arr_24 [i_7])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_28 += ((((min((((40157 || (arr_4 [i_9])))), (arr_11 [i_6] [i_8 + 1] [i_9] [i_10])))) ? (max((arr_14 [i_6 - 1] [i_7] [1]), (arr_22 [i_6 + 1] [i_8 - 1]))) : (((~(arr_8 [i_7] [i_8] [i_8] [i_8]))))));
                                arr_32 [i_6] [i_7] [i_8] [i_8] [i_9] [i_6] [i_8] = (arr_0 [i_6]);
                                arr_33 [i_6] [i_7] [i_8] [i_6] [i_8] = (arr_4 [i_6]);
                                var_29 = ((~((min((arr_0 [i_6 - 1]), var_3)))));
                                var_30 = (max(var_30, ((min(var_15, (((arr_30 [i_9] [i_6 - 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6]) ? 0 : (arr_24 [i_6 + 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

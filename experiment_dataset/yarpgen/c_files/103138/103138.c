/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_20 = (max(var_20, var_10));
                                arr_11 [i_2] [i_4] [1] [i_2] [i_2] [12] = (arr_0 [i_1]);
                            }
                            var_21 *= (max((arr_1 [i_1]), var_5));
                        }
                    }
                }
                var_22 = var_12;
                var_23 = var_17;
                arr_12 [21] [i_1] = (max(1122198051186629790, 194));
                var_24 *= arr_3 [i_0];
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_15 [i_5] = (max(15, -11319));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 23;i_8 += 1)
                {
                    {

                        for (int i_9 = 3; i_9 < 22;i_9 += 1)
                        {
                            var_25 = (max(var_25, var_9));
                            var_26 = (max(var_26, ((((arr_26 [18] [i_6] [14] [i_6] [i_5]) ? (arr_25 [16] [i_6] [4] [i_7] [i_8] [i_9]) : var_9)))));
                            arr_28 [1] [i_6] [i_5] [i_6] [i_5] = (arr_20 [16]);
                        }
                        var_27 = (max(var_27, (((var_18 ? (((12496915239106536247 <= (arr_24 [i_7])))) : (arr_24 [i_8]))))));
                        var_28 = (max(var_28, (arr_17 [i_5] [i_5] [i_5])));
                    }
                }
            }
        }
        var_29 |= var_5;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                {
                    var_30 = ((((max((arr_13 [i_11] [15]), (arr_23 [i_5] [i_5] [i_5] [i_5]))) * (arr_25 [i_5] [i_5] [i_5] [14] [i_5] [i_5]))) * ((max((arr_24 [i_5]), (((arr_31 [i_5]) / (arr_18 [i_10])))))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                arr_41 [i_5] [i_5] [19] [15] [6] [15] = (max((arr_37 [i_5] [i_5] [19] [3]), (arr_14 [i_5])));
                                arr_42 [i_5] [i_10] [i_11] [i_5] [14] [i_12] [i_10] = (max(((((arr_18 [i_5]) ? (arr_22 [i_5] [1] [i_11] [i_12]) : (arr_32 [i_5] [i_13])))), (arr_30 [i_10] [i_10] [i_11])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {
        var_31 = (max((arr_13 [i_14] [i_14]), (arr_14 [i_14])));
        var_32 = (max(var_32, var_6));

        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            var_33 ^= (((((arr_31 [i_14]) << (((arr_5 [i_14] [8] [i_15]) + 937842489)))) >= (arr_46 [i_14] [1] [0])));
            arr_48 [i_14] = (((arr_46 [i_14] [18] [18]) & (arr_7 [i_14] [i_14] [20] [20])));
            var_34 = var_5;
            var_35 ^= (((arr_21 [i_14] [i_14] [i_14]) ? ((((((min((arr_17 [i_14] [i_14] [i_14]), (arr_8 [i_14] [i_14] [i_14] [i_14] [i_14])))) < ((var_16 ? (arr_46 [3] [i_15] [15]) : (arr_2 [0] [0]))))))) : (arr_37 [15] [6] [10] [i_14])));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 20;i_16 += 1)
        {
            var_36 = (arr_47 [i_14] [11]);
            arr_53 [i_16] = (arr_30 [i_14] [i_16] [i_16]);
        }
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 18;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 20;i_20 += 1)
                    {
                        {
                            arr_67 [8] [i_18] [18] [i_18] [i_14] = var_1;
                            arr_68 [i_20] [i_18] [i_17] [i_18] [i_18] [i_14] = (max((arr_39 [i_14] [2] [8]), (arr_23 [i_20] [i_18] [i_18] [i_14])));
                        }
                    }
                }
            }
            var_37 = (max(var_37, (arr_23 [i_14] [i_14] [i_14] [16])));
        }
    }
    #pragma endscop
}

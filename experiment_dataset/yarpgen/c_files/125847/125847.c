/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((var_0 ? var_8 : var_4));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_1 [i_0])));
                    var_19 *= (max((((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_1 [i_0]))), (arr_1 [i_0])));
                    var_20 = (max(var_20, (((-127 ? (((((var_6 ? 7 : var_4)) <= var_7))) : ((~((127 ? (arr_6 [i_0] [i_1] [i_2]) : var_5)))))))));
                }
            }
        }

        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            var_21 = (min(var_21, ((min(((max(124, ((((arr_5 [i_0] [i_3] [i_0] [i_3]) >= var_1)))))), ((var_4 ? (((arr_5 [i_0] [i_0] [i_0] [i_0]) - var_2)) : var_3)))))));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_18 [i_6] [i_0] [i_4] [i_3] [i_0] = ((+(max(32, ((((arr_0 [i_0]) ? var_5 : (arr_2 [i_0] [i_4]))))))));
                            var_22 = -var_9;
                        }
                    }
                }
            }
        }
        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_23 = (((arr_2 [i_0] [i_8]) ? (arr_8 [i_7] [i_0]) : var_11));
                    var_24 = (((arr_3 [i_7 - 3] [i_0] [i_8]) ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : var_14));
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_25 = (max(((min(94, (arr_27 [i_8] [i_8] [i_8] [i_8])))), (20701 || 15)));
                    var_26 = (max((44856 || 44835), (min(var_12, (arr_11 [i_0] [i_8] [i_7 - 3] [i_10])))));
                }
                for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                {
                    var_27 = (min(var_27, ((((((arr_22 [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0]) : (arr_15 [i_11] [i_8] [i_0]))) < (arr_15 [i_0] [i_7] [i_0]))))));
                    var_28 = var_12;
                }
                var_29 *= (max((((arr_15 [i_7 - 3] [i_7 - 2] [i_7]) ? (arr_5 [i_7] [i_7 - 3] [i_7 - 2] [i_7 + 1]) : (arr_24 [i_7 - 1] [i_0] [i_7] [i_7 - 1]))), (arr_10 [i_0] [i_0])));
                var_30 -= arr_12 [i_0] [i_8];
            }
            arr_31 [i_0] [i_0] [i_7] = ((((min((arr_11 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 - 1]), var_5))) >> (((arr_23 [i_0]) + 108))));
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            var_31 *= (max(((min((arr_27 [i_0] [i_0] [i_0] [i_12]), (arr_22 [i_0] [i_0] [i_12])))), ((var_1 ? var_2 : (arr_27 [i_12] [i_0] [i_0] [i_12])))));
            var_32 *= (((36 ? -1 : 108)));
            arr_34 [i_0] [i_0] = (((arr_7 [i_12] [i_12] [i_0] [i_12]) + (arr_7 [i_0] [i_0] [i_12] [i_12])));
        }
        var_33 = (max(var_33, (((!(((111 ? (min((arr_7 [i_0] [i_0] [i_0] [i_0]), var_0)) : (((max(var_9, var_9))))))))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 9;i_14 += 1)
        {
            {
                var_34 = ((-((max((arr_29 [i_14 - 1] [2] [i_14 + 1] [i_14] [i_14 + 1]), (arr_21 [i_14 + 2] [i_14 + 2] [i_14 - 1] [i_14 + 2]))))));
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            {
                                arr_48 [i_13] [i_14 + 2] [i_15] [i_16] [i_16] [i_16] &= (((((arr_12 [i_15] [i_14 + 1]) >> (((arr_36 [i_14 + 1] [i_14 + 1]) - 23992)))) << ((((arr_46 [i_14] [i_16]) == var_9)))));
                                var_35 = (!56);
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 -= var_12;
    var_37 = (0 >= 36);
    #pragma endscop
}

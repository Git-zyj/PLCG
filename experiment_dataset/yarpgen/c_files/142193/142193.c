/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_19 = (min(((max(((max(var_13, (arr_3 [i_0])))), (~32766)))), (min(((var_15 & (arr_1 [i_0] [i_1 - 1]))), (arr_3 [i_0])))));
            var_20 = 2;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_21 = ((+(((arr_6 [i_0] [i_2]) ? (arr_6 [i_2] [i_2]) : var_17))));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_12 [i_4] [i_2] [i_2] [i_2] &= var_14;
                        var_22 = (max(var_22, var_17));
                    }
                }
            }
            arr_13 [i_2] [i_2] = (arr_6 [i_0] [i_2]);
            var_23 = ((((var_5 ? (arr_0 [i_0]) : var_11)) - ((((arr_2 [i_0] [i_0]) ? (arr_11 [i_2]) : (arr_3 [i_2]))))));
            var_24 -= ((((!(arr_0 [i_0]))) ? var_3 : ((var_8 ? (arr_10 [i_0] [i_2] [6] [i_0]) : (arr_5 [i_0] [0])))));
        }
        for (int i_5 = 3; i_5 < 24;i_5 += 1)
        {
            var_25 = (-(((arr_6 [i_5 + 1] [i_5 - 1]) ? (arr_6 [i_5 - 1] [i_5 - 1]) : var_2)));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_22 [i_0] [i_6] [i_6] = ((((var_1 ? (arr_1 [i_7 - 1] [i_7 + 3]) : (arr_19 [i_0] [i_5 + 1] [i_5 + 1] [i_0]))) * 4294967271));
                        var_26 = (min((arr_14 [i_5] [i_5 + 1] [i_7 - 1]), (min((arr_2 [i_0] [i_5 + 1]), (arr_14 [i_5] [i_5 + 1] [i_7 - 1])))));
                        arr_23 [4] [i_6] [i_7 - 2] &= 24;
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_27 = (min(var_27, var_0));
                arr_29 [i_0] [i_0] [i_8] [i_9] = (!-var_11);
                var_28 ^= ((!((((arr_8 [i_8]) ? var_17 : var_12)))));
                var_29 = ((var_17 - ((var_15 + (arr_15 [i_8])))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_30 = (max(var_30, (((~(arr_26 [i_10]))))));
                            arr_36 [i_0] [i_0] [i_8] [i_11] [i_9] [i_10] [i_11] = (arr_4 [i_8]);
                            var_31 = ((~(arr_16 [i_11 + 2] [i_8])));
                            var_32 = (min(var_32, (((~(((arr_32 [i_0] [i_0] [i_10] [i_10]) % (arr_8 [i_8]))))))));
                        }
                    }
                }
            }
            var_33 = (((max((((var_17 ? (arr_10 [i_0] [i_0] [i_8] [i_0]) : var_5))), var_17)) & ((max((arr_33 [i_0]), var_13)))));
        }
        var_34 = (arr_28 [i_0] [i_0]);
        arr_37 [i_0] = (max((arr_20 [i_0] [0] [i_0] [i_0]), (arr_0 [i_0])));
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_41 [i_12] = (((((var_17 ? (arr_24 [i_12]) : var_10)) - var_1)));
        var_35 = ((((((((min((arr_33 [i_12]), 2))) ? -var_8 : (((arr_25 [i_12] [i_12] [i_12]) ? 1 : (arr_28 [i_12] [i_12]))))) + 2147483647)) >> (max((((arr_25 [i_12] [i_12] [i_12]) ? var_12 : -1770384005)), ((var_7 & (arr_7 [i_12])))))));
        var_36 = (max(var_36, ((((((arr_30 [i_12] [i_12] [i_12] [i_12]) ? (arr_19 [i_12] [i_12] [i_12] [i_12]) : ((((arr_26 [i_12]) % var_7))))) << (((4294967271 << 1) - 4294967244)))))));
    }
    var_37 &= var_7;
    #pragma endscop
}

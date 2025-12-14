/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (((arr_8 [8] [i_2]) >= ((((arr_9 [i_2 - 4] [i_1 + 1] [i_1 + 1]) <= (arr_9 [i_2 - 3] [i_1 - 1] [i_1 - 1]))))));
                    var_14 = ((5981851174749323041 ? 5981851174749323041 : 5981851174749323041));
                    var_15 = (arr_7 [i_0] [i_0]);
                    arr_11 [i_0] [i_0] [i_2] = (max(((((arr_3 [i_1 - 1] [i_1 - 1]) == (arr_3 [i_1 - 1] [i_1 - 1])))), (((12464892898960228575 - 5981851174749323022) ? 5981851174749323041 : (((max((arr_0 [i_0]), (arr_0 [i_2])))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_16 *= (max(5981851174749323038, 0));
                    arr_18 [10] [10] [i_5] [i_5] |= ((!((max(15190077681237420856, var_10)))));
                    var_17 |= var_7;
                    arr_19 [i_3] [i_3] [i_3] = ((250 ? (!-115) : (max(255, 12464892898960228579))));
                }
            }
        }
    }
    var_18 = (var_11 >= var_12);
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {
                var_19 = var_10;
                var_20 ^= (min((max(var_9, (arr_17 [i_7 + 1] [i_7] [i_7 + 2] [i_7 + 1]))), (arr_17 [i_7 + 2] [i_7 + 2] [i_7 + 2] [i_7])));
                var_21 = (min((!1), (arr_14 [i_7 + 2] [i_7 + 2] [i_7 + 2])));
            }
        }
    }

    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                {
                    var_22 = (max(15, 12464892898960228560));
                    arr_35 [16] [16] = var_2;
                    arr_36 [i_8] [i_9] [i_8] = var_11;
                    arr_37 [i_8] = (max((~var_12), ((5981851174749323055 ? ((12464892898960228557 ? 12209696364657828859 : 12464892898960228536)) : var_2))));
                }
            }
        }
        var_23 = ((5981851174749323063 ? ((~(arr_28 [1]))) : 100));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
    {
        arr_41 [i_11] [4] = (((arr_28 [i_11]) ? var_2 : (((var_9 > (arr_33 [22] [i_11]))))));
        var_24 ^= ((((((arr_39 [i_11]) * var_4))) ? var_13 : (arr_40 [i_11])));
    }
    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 23;i_14 += 1)
            {
                {
                    var_25 += (max((((arr_42 [i_14 + 1]) ? var_8 : (arr_42 [i_12]))), var_3));
                    arr_51 [i_12] [i_12] [i_14] = ((((((arr_48 [i_12] [i_13] [i_14 + 1] [i_14 + 1]) ? (arr_49 [i_14] [i_13] [i_14]) : var_0))) ? ((((arr_49 [i_12] [i_13] [i_12]) != (arr_48 [i_13] [i_13] [i_14 - 2] [i_14 + 1])))) : ((~(arr_48 [i_12] [i_13] [i_14] [i_14 + 1])))));

                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 21;i_15 += 1) /* same iter space */
                    {
                        arr_54 [i_12] [i_12] [i_12] [i_12] = (((!var_10) <= (arr_46 [i_14 + 1] [i_14] [i_14 - 1])));
                        var_26 ^= 250;
                        var_27 *= (~var_10);
                        arr_55 [i_14] [i_13] [i_14] [i_13] = arr_48 [i_15 - 1] [i_14 + 1] [i_14 - 1] [i_14 + 1];
                    }
                    for (int i_16 = 2; i_16 < 21;i_16 += 1) /* same iter space */
                    {
                        arr_58 [i_12] [i_14] [i_12] [0] [3] [i_13] = var_11;
                        arr_59 [i_14] [i_14] [i_14] = (((min(var_5, 6237047709051722757)) >= ((((arr_56 [i_14] [i_16 - 1] [i_16 - 1] [i_16 - 1]) ? (arr_56 [12] [i_16 - 1] [i_16] [12]) : (arr_56 [2] [i_16 + 1] [i_16 + 1] [i_16]))))));
                        arr_60 [i_16 - 1] [i_14 + 1] [i_12] [i_12] = ((-(min(-var_0, var_1))));
                        arr_61 [i_12] [i_12] [i_13] [i_14 - 2] [i_16 - 1] [i_14 - 2] = ((-125 ? ((var_4 ? 12464892898960228574 : ((168 ? 5981851174749323037 : var_1)))) : -115));
                    }
                }
            }
        }
        arr_62 [i_12] = ((!(arr_48 [i_12] [i_12] [i_12] [i_12])));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
    {
        arr_67 [i_17] = var_3;
        var_28 = ((~(arr_44 [16])));
    }
    #pragma endscop
}

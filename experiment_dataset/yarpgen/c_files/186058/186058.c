/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 1] = (4095 ? 18446744073709551615 : ((max(96, 6636090176605857498))));
                var_15 = ((-315749566 ? (((arr_1 [i_1 - 1] [i_1 - 2]) << (102 - 102))) : (arr_1 [3] [i_1 - 2])));
            }
        }
    }

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_16 = ((((~192) * (((arr_8 [i_2] [i_2]) ? (arr_6 [i_2 + 2] [i_2 + 2]) : (arr_8 [i_2] [i_2]))))));
        arr_10 [i_2] = max(58917, (max(10173466836408698805, 4)));
        var_17 = ((((-(arr_9 [i_2] [i_2 + 2]))) ^ (min(54046, -1376300786))));
        arr_11 [i_2] = (((((((9985836172576052501 * (arr_9 [i_2] [i_2])))) ? ((15000 >> (arr_7 [i_2]))) : 30720)) != 20172));
        var_18 = (max(((((arr_8 [i_2] [i_2]) > (arr_8 [i_2] [i_2 + 2])))), (max(var_13, (min(3118134518, 1))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = (((arr_9 [i_3] [i_3]) ? 215 : (arr_6 [i_3] [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_3] [i_3] [1] = (((arr_7 [i_4]) ? 64 : 5302852365932021326));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_26 [i_3] [i_3] [i_5] [i_3] [i_7] = ((-(arr_22 [i_3] [i_7 + 1] [i_6] [i_6] [i_3])));
                                arr_27 [i_3] [i_3] [i_3] [i_6] [i_7] = (arr_23 [i_3] [i_3] [i_5] [i_5] [i_7] [i_5]);
                                arr_28 [i_5] [i_3] [i_7 + 2] = 42;
                                arr_29 [i_3] [i_4] [i_3] = (((arr_23 [i_7 + 2] [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1]) / (arr_23 [i_7 + 2] [i_7] [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1])));
                            }
                        }
                    }
                    arr_30 [i_3] [i_3] = (arr_13 [i_3]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_19 ^= -25;
        var_20 -= 1;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = ((((max((arr_9 [i_9] [i_9]), 172001853))) ? 169 : -236165847));
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    arr_42 [i_9] = ((~(min(5375488778632271134, (7614724562166030094 ^ 110)))));
                    arr_43 [7] = (max((((arr_25 [i_9] [i_10 + 1] [i_11] [i_9] [i_9]) >> (((arr_20 [i_10 - 1] [i_11] [i_10 + 1] [i_10 - 1] [i_10]) - 11022503883266780792)))), (!-27)));
                    arr_44 [i_9] [i_10] [i_11] = ((((max((~2147483647), (~var_8)))) ? ((255 ? -34 : -10)) : (((((-29331 ? -3793075246707620883 : 110)) != (arr_9 [i_10] [i_10]))))));
                }
            }
        }
        var_21 += ((~(arr_12 [0])));
        var_22 = (max((arr_12 [i_9]), (((arr_18 [i_9] [i_9] [4]) ? (arr_12 [i_9]) : (arr_18 [i_9] [i_9] [18])))));
        arr_45 [i_9] = ((~(min((arr_12 [i_9]), 0))));
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 23;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                {
                    var_23 = ((-(arr_46 [i_12])));
                    arr_54 [i_12] [i_12] = ((((max((((arr_49 [15] [i_14]) ? var_1 : 1)), (arr_46 [i_13 - 2])))) ? (min((min(-1, (arr_47 [i_12]))), (var_1 ^ 1))) : ((((arr_51 [i_12] [i_13 - 1]) ? (arr_51 [i_12] [i_13 + 2]) : 229)))));
                }
            }
        }
    }
    #pragma endscop
}

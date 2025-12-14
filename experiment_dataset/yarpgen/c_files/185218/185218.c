/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185218
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, (((((min((arr_1 [i_0]), (arr_1 [i_0])))) / (((!(((arr_1 [i_0]) == var_11))))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((max((max((max(var_6, 182)), (arr_2 [i_0] [i_1]))), (((!(~var_0)))))))));
                    arr_9 [i_2] [i_1 + 1] [i_0] = ((((arr_6 [i_0] [i_1 + 1] [i_2 + 1] [i_0]) ? var_19 : (arr_0 [i_1 + 2]))));
                    arr_10 [i_0] [3] [i_2] = ((var_0 / (arr_5 [i_1 + 2] [i_1 - 1])));
                    var_22 -= (min(((~(arr_0 [i_1 + 1]))), ((max(2, (arr_3 [i_0] [i_1 - 1]))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_23 += (((((251 ? (arr_11 [i_3] [i_3]) : (arr_11 [i_3] [i_3]))) / var_18)));
        arr_13 [12] = (min(var_17, -62546));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_24 = (max(var_24, ((((((max((arr_16 [i_3]), (arr_19 [i_3] [i_4] [i_5] [1]))) == (max((arr_14 [i_3] [i_4]), (arr_16 [i_3]))))) ? 121 : ((6289 ? (arr_19 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]) : (arr_19 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]))))))));
                        arr_23 [i_3] [i_4] [i_3] [i_5 - 1] [i_6] = var_14;
                    }
                }
            }
        }
        arr_24 [i_3] = (min((min((arr_21 [i_3] [i_3] [i_3] [i_3]), (arr_12 [i_3]))), (min((arr_21 [i_3] [i_3] [i_3] [i_3]), (arr_12 [i_3])))));
    }

    for (int i_7 = 1; i_7 < 23;i_7 += 1)
    {
        arr_28 [i_7] [i_7] = ((((max(((var_17 ? var_19 : var_8)), ((var_15 ? var_16 : (arr_20 [i_7] [i_7 + 2] [i_7] [i_7])))))) ? (((((arr_11 [i_7 + 2] [i_7 + 1]) == (arr_11 [i_7 + 2] [i_7 - 1]))))) : (arr_26 [i_7 + 1])));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    {
                        var_25 += (min(((min(((-(arr_25 [i_7]))), ((var_7 >> (var_10 - 894214013)))))), (((((arr_16 [i_7 - 1]) + 9223372036854775807)) >> (((arr_16 [i_7 + 2]) + 5500846895085343209))))));
                        arr_37 [i_7] [i_8] [i_10] = ((((((var_6 ? var_2 : var_10)))) ? (arr_21 [i_7] [i_7 + 1] [1] [i_10]) : ((((max((arr_11 [i_7] [i_8]), (arr_34 [i_7] [i_7] [i_7 + 1])))) ? 59240 : ((32760 + (arr_31 [9] [16])))))));
                    }
                }
            }
        }
        arr_38 [1] |= ((((((min(81, 132))) == ((144 ? var_9 : var_7)))) ? (((((max(var_16, var_11))) == ((max(var_3, (arr_18 [23]))))))) : ((~((174 ? 167 : -32551))))));
        arr_39 [24] = (((arr_34 [i_7 + 2] [i_7 - 1] [i_7 + 1]) >> (((((max(var_10, var_1)) >> ((((var_9 ? 29324 : var_18)) - 29305)))) - 6274))));
        arr_40 [i_7] = (min(((max(8986, (arr_17 [i_7 - 1] [i_7] [i_7 - 1])))), (((arr_15 [i_7 - 1] [i_7] [i_7]) * (arr_15 [i_7 - 1] [i_7] [i_7 - 1])))));
    }
    for (int i_11 = 3; i_11 < 7;i_11 += 1)
    {
        arr_44 [i_11] = (((arr_33 [i_11 - 1] [i_11 - 3] [17]) && ((((min(var_8, var_12))) && (((arr_15 [i_11] [i_11] [i_11]) || 6289))))));
        arr_45 [i_11] |= ((min(13772, 4243312605)));
    }
    for (int i_12 = 2; i_12 < 20;i_12 += 1)
    {
        var_26 = (min(var_26, (((1 / var_8) == (((min(var_17, 1023)) * (241 / 107)))))));
        arr_49 [i_12] = (min(var_10, ((max(((var_6 ? (arr_14 [i_12] [i_12]) : 31)), (arr_30 [i_12 - 1] [i_12 + 2]))))));
        var_27 = (min(var_27, (((((((arr_11 [i_12] [i_12 - 2]) * (arr_36 [i_12 + 2] [i_12 + 1])))) ? (var_6 / var_7) : ((min((((-23432 + 2147483647) >> (var_13 + 28952))), ((min((arr_48 [i_12 - 2] [i_12]), var_16)))))))))));
        arr_50 [i_12] = (((arr_34 [i_12 - 1] [i_12 + 2] [i_12 - 1]) ? ((min((min(1, (arr_46 [i_12] [i_12]))), ((((arr_14 [i_12] [i_12]) && (arr_48 [13] [13]))))))) : (((((arr_20 [i_12] [i_12] [i_12] [i_12]) * var_15))))));
        arr_51 [i_12] = (((((((arr_32 [i_12 + 1] [i_12 + 2] [i_12]) == (arr_32 [i_12 + 2] [i_12 + 2] [i_12 + 2]))))) == (min(var_10, (arr_12 [i_12 - 1])))));
    }
    #pragma endscop
}

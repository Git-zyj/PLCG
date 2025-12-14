/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((arr_2 [i_0]) | (((max((arr_0 [15] [18]), (arr_2 [i_0])))))));
                arr_5 [i_0] [i_0] = ((arr_1 [i_1 + 1] [i_0 + 1]) ? ((var_0 ? var_0 : var_8)) : (arr_1 [i_1 - 1] [i_0 + 2]));
                var_13 = (((((var_3 ? (arr_1 [3] [17]) : (arr_1 [i_0] [i_1])))) ? 0 : (((((var_7 ? (arr_3 [i_1] [i_1] [i_0]) : 4))) ? ((var_9 ? var_4 : var_8)) : ((4 ? 2072475206 : (arr_0 [i_1] [i_0])))))));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [4] = (arr_6 [i_0 + 1] [i_0] [i_1 + 1] [i_2 - 1]);
                    var_14 = var_3;
                    var_15 *= ((((min((max(1434294553, (arr_2 [i_0]))), ((min(16233, 245)))))) ? (arr_0 [i_0] [i_2]) : (min((max((arr_6 [i_0] [i_0] [i_1] [i_2]), var_5)), var_1))));
                    var_16 += var_4;

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_17 ^= ((((!(1434294553 & var_4))) ? (((((var_2 ? var_12 : (arr_6 [4] [i_1 + 1] [i_2] [i_3])))))) : ((var_5 ? (arr_6 [i_0 - 1] [i_1] [i_2] [i_3]) : (arr_7 [i_0] [i_0] [i_0])))));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_18 = (max(var_18, ((max((arr_1 [i_0 + 1] [i_4]), ((((((arr_13 [i_0] [i_1] [i_0] [i_1] [i_4]) + var_12))) ? 7 : (arr_0 [i_2 + 1] [i_2 + 1]))))))));
                            var_19 = (min(var_19, (arr_0 [i_2 + 1] [i_2 + 1])));
                            arr_15 [i_0] [8] [i_0] [i_3] [i_3] = (((min((((arr_10 [i_1] [i_1]) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0]))), var_9)) | var_1));
                            var_20 = ((var_0 + (((!(arr_3 [i_0 + 1] [7] [i_1 - 1]))))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_21 |= ((min((arr_16 [i_0 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_2 + 1]), var_4)));
                            arr_19 [i_0 - 1] [21] [i_2] [i_3] [i_3] [i_5] [i_5] = var_1;
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] = (min(((8471287724333140697 ? -1136963208 : 245)), (((((arr_6 [i_6] [i_1] [i_1] [i_1]) ? (arr_7 [i_0] [i_1] [i_3]) : (arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_1])))))));
                            var_22 = (min(var_22, ((((((((arr_9 [i_3] [i_6]) ? 1233005721 : (arr_22 [i_6] [i_0] [i_0] [i_0] [i_0]))))) ? ((min(var_12, (arr_17 [i_0 + 2] [21] [i_1 + 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2])))) : (((arr_23 [2] [i_3] [i_6]) ? 249 : 1)))))));
                            var_23 = 1674931790;
                        }
                        var_24 -= (arr_9 [i_0] [i_1]);
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        arr_29 [22] [i_7] [i_2] [i_7] [17] = (arr_7 [i_0] [i_0] [17]);
                        var_25 = (min(var_25, ((max((arr_17 [i_0] [i_0 - 1] [i_0 - 1] [i_2] [i_0] [i_7 - 1] [i_0]), (((arr_28 [18] [i_0] [i_0 + 1]) ? (arr_2 [i_1]) : 18)))))));
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_33 [i_8] [i_2] [i_0] [i_0] = arr_32 [i_2] [i_8];
                        var_26 = (((((min(30, 0)))) + (((((var_3 ? var_10 : (arr_7 [i_0] [i_0] [i_8])))) ? ((((arr_18 [i_0] [i_0] [i_0] [i_0] [1] [i_0]) ? (arr_25 [i_8]) : var_1))) : ((9 ? 113 : 48))))));
                        var_27 *= ((~(arr_23 [i_0] [6] [i_2])));
                        var_28 = 1849612571;
                    }
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_39 [i_10] [i_9] [i_1] = (((arr_38 [i_0] [i_10]) ? (min(18446744073709551612, 123)) : (((((min(var_4, (arr_23 [i_9] [i_1] [i_9])))) ? (((3263184280 ? var_9 : (arr_22 [i_0] [i_1] [8] [6] [i_0])))) : (arr_6 [i_0 + 1] [i_0 + 2] [5] [i_1 - 1]))))));
                        var_29 |= (((((-1167250097 ? var_8 : (arr_1 [17] [i_10])))) ? var_2 : ((((arr_30 [i_0] [i_0] [i_1] [i_0] [i_10]) ? (arr_32 [i_0] [i_10]) : (arr_9 [i_1] [i_10]))))));
                        var_30 = (min(var_30, (((((min(2147483647, var_12))) ? var_2 : (arr_35 [18]))))));
                        var_31 = var_9;
                    }
                    var_32 = ((!((((arr_17 [i_0] [13] [i_1] [i_1 + 1] [i_1 + 1] [i_9] [i_0]) ? (arr_17 [i_0] [20] [i_1 + 1] [i_1] [i_0] [i_9] [i_9]) : var_12)))));
                }
                for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    var_33 *= (arr_30 [i_11] [i_1] [i_0] [i_0] [i_0]);
                    var_34 = ((((var_9 ? (arr_20 [i_0] [i_0] [i_0 - 1] [i_0] [i_1 + 1] [i_11] [i_0]) : (arr_20 [i_0] [i_1 - 1] [i_11] [i_11] [i_11] [i_1] [i_11]))) != var_3));
                    var_35 = (((((min((arr_10 [1] [i_0]), (arr_17 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_11] [i_11] [i_11])))) ? (arr_25 [0]) : (((var_5 ? var_1 : 1))))));
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    var_36 *= (min(var_10, (max(var_12, (max((arr_32 [i_1] [i_12]), (arr_35 [22])))))));
                    var_37 = var_8;
                }
            }
        }
    }
    var_38 = (min(var_38, (((var_1 ? var_6 : ((var_11 ? var_1 : var_9)))))));
    var_39 = 104;
    var_40 = var_12;
    var_41 |= var_11;
    #pragma endscop
}

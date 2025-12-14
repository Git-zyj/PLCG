/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_11 = ((var_7 ? var_2 : (!25505)));
                        arr_12 [i_0] [i_0] [i_2] [1] = (((arr_1 [2]) % ((746373417 ? var_3 : (arr_5 [i_3] [i_1])))));
                        var_12 = (min(var_12, (arr_2 [11])));
                        var_13 = var_7;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_14 -= (!var_9);
                            arr_16 [i_4] [i_3] [4] [2] [i_1] [i_0] [i_0] &= 25514;
                            var_15 = ((var_2 & ((1 ? (arr_9 [i_0]) : var_7))));
                            arr_17 [i_0] [i_0] [i_2] [17] [i_3] [i_3] [13] = 3551050439;
                        }
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        var_16 -= (((!1) ? (arr_9 [i_5]) : ((1 ? (((var_8 ? var_3 : -28797))) : var_0))));
                        var_17 = (min(var_17, (((-522440135 ? (((((8191 ? (arr_0 [i_0] [16]) : 127)) - (arr_15 [i_0] [i_1] [i_2] [i_0] [i_5] [i_5])))) : (max(((max(var_6, var_8))), (arr_14 [i_0] [i_1] [8] [i_5]))))))));
                    }
                    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_18 += (((((((arr_19 [i_0] [i_1] [i_1] [i_6]) + 2147483647)) >> (((arr_19 [i_0] [1] [i_2] [i_6]) + 42)))) ^ ((max((arr_19 [i_0] [i_6] [i_2] [i_6]), (arr_19 [15] [i_2] [i_0] [i_0]))))));
                        arr_24 [4] [i_0] [12] [18] [i_6] [4] = ((~(arr_2 [i_2])));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 15;i_8 += 1)
                        {
                            var_19 = var_5;
                            var_20 = (((((((((arr_27 [i_2] [i_8 + 3]) | -1))) ? ((min(65323, var_2))) : 9))) ? (((max(25500, 0)))) : (max((max(var_0, 4096)), (-127 - 1)))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            var_21 = ((((((arr_5 [i_2] [i_2]) ? var_10 : (arr_1 [5])))) ? ((5832428860393812083 ? var_0 : var_1)) : ((743916856 ? var_1 : var_3))));
                            var_22 = -var_6;
                            var_23 = (arr_23 [i_0] [i_0] [i_0] [i_0] [5]);
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            var_24 ^= -28797;
                            var_25 = var_3;
                            var_26 *= (((((-(((arr_6 [1]) ? var_1 : var_10))))) / (arr_13 [i_0] [i_1] [i_2] [i_7] [5])));
                        }
                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            var_27 = ((!(((var_10 ? ((min(1, var_3))) : (((!(arr_1 [i_0])))))))));
                            var_28 = (max(var_28, var_10));
                            var_29 = (((((var_0 ? (arr_27 [0] [i_7]) : var_3))) ? var_10 : (!var_0)));
                            arr_38 [i_0] [i_7] [i_2] [i_7] [i_11 + 2] [i_2] = (((arr_3 [i_11 + 1]) ? (arr_3 [i_11 - 1]) : ((-(arr_3 [i_11 + 2])))));
                        }
                        var_30 = (max(var_30, ((((max(((var_7 ? var_1 : 9223372036854775795)), ((((arr_36 [i_2]) ? var_10 : var_10))))) ^ ((((~0) ? ((min((arr_10 [i_7] [i_0] [i_1] [i_0] [7]), (arr_32 [i_7] [1] [1] [1])))) : (~255)))))))));
                    }
                    var_31 = (max((max(((max(127, 0))), ((var_4 ? (arr_3 [i_0]) : (arr_33 [i_0] [i_0] [i_0] [i_1] [i_0] [i_2] [i_2]))))), ((max((-127 - 1), (var_3 < var_9))))));
                }
            }
        }
    }
    var_32 = (min(((var_9 ? (~var_4) : ((max(1, 6))))), var_9));
    var_33 = (var_4 ? (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) >> (var_3 - 21740))) : var_3);
    #pragma endscop
}

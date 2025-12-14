/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 = (max(var_15, 1423871698));
            var_16 &= 1423871698;
        }
        arr_5 [i_0] = (arr_1 [i_0] [i_0]);

        /* vectorizable */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_17 = (var_1 ? (arr_1 [i_2 - 2] [i_2 + 2]) : (arr_1 [i_2 - 2] [i_2 + 2]));
            var_18 = var_13;
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                {
                    var_19 = var_1;
                    arr_12 [i_4] [i_4] [i_4] [i_4] &= ((((max(0, ((min(381245426653510580, (arr_7 [i_3]))))))) ? (min(5633603617238941180, (arr_3 [i_0] [13]))) : (((416159463 ? (arr_0 [i_4 - 1]) : (arr_0 [i_4 - 2]))))));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (arr_13 [0])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_23 [i_5] [i_6] [i_7] [i_5] = (arr_13 [i_5]);
                        var_21 &= min(((min(((((arr_13 [i_6]) > 1116892707587883008))), (arr_21 [i_5] [i_6] [i_7] [i_8])))), ((-24076 ? 2149234742336273065 : (arr_19 [12] [i_7] [i_8 - 1]))));
                        var_22 = (arr_16 [i_5] [i_6]);

                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_23 = 7748411419571115547;
                            var_24 += (arr_24 [10] [i_6] [3] [i_8] [i_9]);
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                        {
                            var_25 = ((-(max((max(1423871698, var_7)), var_2))));
                            var_26 = arr_13 [i_5];
                            var_27 = max((min(-24076, (arr_20 [i_6] [i_8 + 1] [i_8 - 1] [i_8]))), (((arr_21 [i_8 - 1] [i_8 - 1] [i_10] [i_10]) % (arr_24 [i_8 + 1] [i_8 + 1] [i_7] [i_5] [15]))));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                        {
                            var_28 = ((var_8 ? (arr_16 [i_11] [i_11]) : (arr_17 [i_7] [i_11])));
                            var_29 = min((arr_26 [i_8 - 1] [i_11] [i_11] [i_11] [12] [i_11] [1]), ((max((arr_17 [i_8 - 1] [14]), var_10))));
                            var_30 &= var_13;
                        }
                    }
                }
            }
        }
        var_31 = ((var_3 ? var_12 : (((arr_22 [i_5] [i_5] [i_5] [i_5]) % (arr_17 [i_5] [i_5])))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 20;i_13 += 1)
            {
                {
                    var_32 = (max((arr_25 [i_5] [i_5] [i_13] [i_13] [i_13] [i_12] [i_5]), (max((((1423871698 ? var_12 : 1715452269))), (arr_27 [i_5])))));
                    arr_34 [i_5] [i_5] [i_5] [i_5] = ((((1099511627775 ? ((var_13 ? (arr_21 [i_5] [i_13] [i_13] [i_12]) : (arr_31 [i_5] [i_12]))) : (arr_29 [i_13] [i_13] [i_13] [8] [i_13] [0])))) ? ((max(85, (max(9223372036854775807, var_1))))) : ((2147483647 ? (min(0, (arr_20 [i_5] [i_12] [2] [i_13]))) : 255)));
                }
            }
        }
        var_33 = (max(((-((var_8 ? (arr_30 [i_5]) : (arr_33 [i_5] [i_5] [i_5] [i_5]))))), (((~(arr_21 [4] [14] [4] [i_5]))))));
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
    {
        var_34 &= ((((arr_14 [i_14]) >> (((arr_26 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) + 8965636011450959629)))));
        var_35 = ((~(arr_20 [i_14] [i_14] [i_14] [i_14])));
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
    {
        var_36 &= (max(var_12, (arr_19 [i_15] [i_15] [i_15])));
        var_37 = (max(var_37, (arr_14 [17])));
        var_38 &= (min((((arr_28 [i_15] [i_15] [i_15] [i_15] [i_15] [6]) ? (arr_20 [i_15] [i_15] [i_15] [i_15]) : (arr_28 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))), (((arr_20 [i_15] [i_15] [i_15] [16]) % var_8))));
        var_39 &= arr_28 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15];
    }
    #pragma endscop
}

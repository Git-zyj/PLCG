/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = (min(var_12, ((min((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : var_9)), var_6)))));
        var_13 = (min(var_13, (((-(arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_14 = (min((min(-32764, (~32760))), (((var_6 ? var_4 : var_0)))));
                        arr_14 [i_1] [11] [i_3] [i_1] = (var_2 / var_5);
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [2] [i_3] [i_3] [i_3] &= (((max(52670, ((var_8 ? (arr_17 [i_3] [18] [i_2] [i_3]) : (arr_2 [i_1] [i_2 - 1])))))) ? (arr_13 [14] [11] [i_1 - 1] [19] [16] [i_1 - 1]) : var_3);
                        var_15 = (arr_17 [i_5] [i_2] [i_3] [i_3]);
                        var_16 = ((!(arr_12 [i_1 - 3] [i_1 - 3] [i_3] [i_3] [i_5])));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_17 = (min(var_17, ((((!(((var_11 ? 1829261756 : (arr_18 [i_2] [i_2] [i_2]))))))))));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_18 = (-127 - 1);
                            var_19 = (((((((var_2 ? var_9 : var_9)) / ((253 ? var_4 : var_10))))) ^ (min((0 | var_3), (((33981 ? (arr_22 [i_1] [i_2 - 2] [i_1] [i_1] [5] [i_3]) : 4294967295)))))));
                            var_20 = (max(((var_9 / (-32767 - 1))), (!var_6)));
                            arr_24 [i_1] [i_7] [i_3] [i_6] [i_7] = (arr_16 [i_1] [i_1 + 2]);
                        }
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_28 [i_3] = (((arr_16 [i_2 - 4] [i_2]) ? ((var_11 ? var_7 : (arr_10 [i_2 - 2] [4] [2]))) : ((max(3938838566, (min(var_6, var_9)))))));
                        var_21 += ((((((32764 ? 15179070567429603632 : var_1)))) ? ((max(1829261752, var_6))) : (min((var_0 / -28), (~17607629670613394468)))));
                    }
                    var_22 = var_5;
                    var_23 = (max(var_23, (((((max(((max(var_7, 18526))), (((arr_4 [7] [i_3]) ? var_5 : var_10))))) ? ((-(arr_17 [i_2] [i_1 - 2] [14] [8]))) : (((min(var_3, var_11)))))))));
                    var_24 = (max(var_24, (((~(((!((!(arr_10 [i_3] [i_1] [i_1])))))))))));
                    var_25 = (max(var_25, ((((min(37808, (arr_4 [i_1 + 1] [i_2 - 1]))))))));
                }
            }
        }

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_26 = (((((-((var_2 ? 27 : var_9))))) ? ((var_0 ? ((-(arr_20 [0] [0] [0] [19] [19] [i_9]))) : ((max((arr_26 [i_9] [i_9] [i_9] [i_9] [i_1] [i_1]), var_9))))) : var_5));
            var_27 = ((((max(var_1, (arr_26 [20] [9] [i_1] [i_1] [i_1] [i_1])))) & ((~(min(var_5, (arr_29 [i_1] [i_1] [i_1])))))));
        }
        arr_32 [12] = ((!((min(((max(4095, var_0))), ((1 ? var_4 : (arr_25 [i_1 - 3]))))))));
        var_28 = (((min(var_10, var_6)) | (~var_2)));
    }
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        var_29 = var_0;
        arr_35 [i_10] |= ((var_4 ? ((max((min(var_3, var_3)), (arr_12 [0] [i_10] [14] [14] [i_10])))) : 0));
        var_30 = ((!(((((var_6 ? var_4 : var_3))) < var_6))));
        var_31 = var_11;
        var_32 = (min(var_32, ((min((((((9223372036854775807 ? (arr_16 [i_10] [i_10 + 1]) : var_3))) ? (arr_22 [16] [16] [i_10] [i_10] [17] [16]) : (arr_3 [i_10 + 1]))), (var_6 || var_7))))));
    }
    for (int i_11 = 2; i_11 < 22;i_11 += 1)
    {
        var_33 = ((!(((var_5 ? (arr_36 [i_11 + 2] [i_11 - 1]) : (arr_36 [i_11 + 2] [i_11 - 1]))))));
        var_34 = (max(var_34, (((var_1 != ((min((arr_36 [i_11] [i_11 - 1]), (arr_36 [i_11] [i_11 + 3])))))))));
        var_35 = ((-((-((((arr_36 [i_11] [i_11]) || (arr_36 [i_11] [i_11]))))))));
        var_36 = ((~((((min((arr_37 [i_11] [i_11]), (arr_37 [i_11] [i_11 - 2])))) ? (arr_36 [i_11 + 1] [i_11 + 2]) : (arr_37 [i_11] [i_11])))));
    }
    var_37 = var_7;
    #pragma endscop
}

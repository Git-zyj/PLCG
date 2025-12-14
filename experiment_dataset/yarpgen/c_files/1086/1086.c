/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_3] [i_3] [i_2 + 1] [i_3] = 16413496151377738108;
                        var_15 = (((var_5 ? (((arr_3 [i_0] [i_0] [i_0]) ? var_1 : (arr_0 [i_1] [i_1]))) : 124)));
                        var_16 = (min(var_16, (((+(((((arr_1 [i_2 - 2]) <= 13716630133494222011)) ? ((((arr_1 [i_0]) == var_12))) : (arr_5 [i_0] [i_2] [i_3]))))))));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = (min(var_17, (((-((max((arr_11 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2]), (arr_11 [3] [i_2 - 2] [i_2 - 2] [1] [i_2 + 2] [i_2 - 2])))))))));
                            var_18 = (arr_4 [i_0] [i_1] [i_1] [i_1]);
                        }
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_18 [9] [i_6] [i_2 + 1] [1] [1] [i_6] = ((47568 ? 108 : -24097));
                            var_19 = (arr_13 [i_0] [i_0]);
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 7;i_7 += 1)
                        {
                            var_20 = (~-26631);
                            var_21 = ((1042960014755919066 ? var_10 : ((24097 % (arr_4 [i_0] [i_2] [i_5] [i_7 + 3])))));
                            var_22 = (arr_11 [i_0] [i_7 + 4] [i_2 - 2] [i_0] [i_2 - 2] [i_1]);
                            arr_23 [i_0] [i_0] [1] [1] [i_0] = (arr_4 [i_7] [i_2] [i_0] [i_0]);
                            var_23 = arr_17 [i_7 + 2] [i_1] [i_2] [i_5] [i_7 + 4];
                        }
                        var_24 = ((~(min(((((arr_9 [i_0] [i_1] [5] [i_5]) ? (arr_16 [i_0] [i_0]) : (arr_14 [i_0])))), (var_0 | 2033247922331813507)))));
                        var_25 = (max(var_25, ((max(((((arr_13 [i_1] [i_1]) ? (arr_13 [i_0] [i_1]) : (((!(arr_3 [i_0] [i_1] [i_0]))))))), ((~((2033247922331813507 / (arr_12 [i_2] [i_2 + 1] [i_2 - 1] [i_1] [i_2 - 1]))))))))));
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_27 [5] [i_1] [8] [i_8] = ((((arr_17 [i_8] [i_8] [i_0] [9] [i_0]) ? (((var_0 ? (arr_5 [5] [i_1] [i_2 - 2]) : var_2))) : ((var_8 ? (arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [5]) : (arr_20 [i_0] [i_0] [i_2 - 1] [4]))))));
                        arr_28 [i_0] [i_0] = (((((24094 ? (arr_9 [i_0] [i_1] [i_2] [i_8]) : (arr_25 [i_2 - 1])))) ? (arr_25 [i_0]) : (((min((arr_19 [i_0] [i_0] [i_0] [i_0] [0]), 24094))))));
                        var_26 &= ((arr_6 [i_0] [6] [i_0] [i_0] [i_0] [i_0]) % var_10);
                    }
                    arr_29 [i_1] [2] [i_2] [i_2] = (arr_25 [i_0]);
                    var_27 = (min(var_27, ((var_12 ? 897009663274730956 : var_4))));

                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        var_28 = (((!((((arr_24 [i_0] [i_0] [i_0]) ? 108 : (arr_26 [i_0] [i_1] [i_2] [i_1])))))));
                        var_29 = (arr_17 [i_9 - 2] [i_2 + 1] [1] [1] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 9;i_10 += 1)
                    {
                        arr_34 [8] [8] [i_2 - 1] [i_10] [i_10] [i_0] = ((-((2033247922331813508 ? -24085 : (arr_12 [8] [i_1] [i_2 + 2] [i_10] [8])))));
                        var_30 = (~var_3);
                        arr_35 [6] [1] [i_2 - 1] [i_10] = (arr_4 [i_10] [i_10 + 1] [i_10] [i_10 - 1]);
                        var_31 = (((arr_2 [i_10 - 1] [i_2] [i_0]) ? (arr_2 [i_0] [i_2 - 2] [i_10 + 2]) : (arr_2 [i_0] [i_1] [i_2 - 2])));
                        var_32 *= (((arr_24 [i_2 + 2] [i_2 + 2] [i_2 - 2]) ? (arr_24 [i_2 + 2] [i_2 - 1] [i_2 - 2]) : (arr_24 [i_2 - 2] [i_2 + 2] [i_2 - 2])));
                    }
                }
            }
        }
    }
    var_33 = (((var_10 ^ var_3) ? var_9 : 1));
    #pragma endscop
}

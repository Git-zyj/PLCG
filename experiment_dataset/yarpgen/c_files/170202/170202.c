/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 += var_1;
    var_16 = (max(1, (((var_3 / var_10) ? var_12 : var_4))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (max(var_17, 6));
        var_18 -= (arr_0 [i_0] [i_0]);
        var_19 = ((var_13 ? (((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))) : (~var_0)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_20 += (((((1 - var_12) + (arr_6 [11]))) * (max(((var_9 ? var_7 : var_5)), ((max(-7095108783680717549, (arr_0 [i_1] [i_1]))))))));
        var_21 = ((!var_11) && (arr_5 [i_1] [i_1]));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_1] = var_2;
            var_22 = (max(var_22, (arr_1 [17])));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_23 = (max(var_23, var_3));
            var_24 = (max((min((max((arr_4 [i_3]), (arr_3 [i_1] [i_3]))), ((max(-67, (arr_2 [i_1])))))), var_2));
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_25 = (max(var_25, var_11));
                var_26 = (((arr_7 [i_1] [i_4 - 1]) ? (arr_7 [i_1] [i_4 - 1]) : (arr_7 [i_1] [i_4 - 1])));
            }
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                arr_22 [i_1] [i_4] [i_4 + 1] = ((~((-(arr_17 [i_1] [i_1] [i_6] [i_6])))));

                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    var_27 = (max(var_27, (((!((min(var_3, ((var_10 ? (arr_19 [6] [6]) : var_13))))))))));
                    var_28 = ((var_12 > (max(var_3, ((var_5 ? var_12 : (arr_7 [i_1] [i_4])))))));
                    var_29 = (arr_20 [i_7] [i_7] [0]);
                    var_30 = (max(1973818515, 1973818515));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_31 = ((1973818518 ? 28602 : 16053606826733076579));
                    var_32 = (min(var_32, (((((((arr_4 [i_4 + 1]) ? (arr_19 [4] [i_6 - 3]) : var_6))) ? (((arr_17 [i_1] [i_6 - 3] [11] [i_4 + 1]) ? (arr_17 [10] [i_6 - 1] [2] [i_4 - 1]) : var_1)) : -1973818528)))));

                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        var_33 += arr_12 [4] [i_4] [4];
                        var_34 = (((((((max(28585, -58))) ? ((min(var_1, var_11))) : ((((arr_19 [i_1] [i_9]) < (arr_0 [i_1] [i_1]))))))) ? (!var_10) : (max((((var_5 ? (arr_29 [i_8] [i_6] [7] [7]) : (arr_19 [i_1] [i_9])))), var_5))));
                        var_35 = ((-(arr_13 [i_8])));
                    }
                    for (int i_10 = 2; i_10 < 10;i_10 += 1)
                    {
                        var_36 = 17218355032820689062;
                        var_37 = ((-(arr_4 [i_10 + 3])));
                        var_38 = arr_13 [i_8];
                    }
                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        var_39 -= var_13;
                        var_40 = (arr_0 [i_1] [3]);
                    }
                    arr_35 [i_1] = var_4;
                }
                var_41 = arr_3 [i_6] [i_1];
                var_42 = arr_29 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1];
                var_43 = var_4;
            }
            var_44 = (var_3 >= 37573);
        }
        var_45 = var_3;
    }
    for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
    {
        var_46 = (max(var_8, (max(var_5, (arr_23 [i_12] [i_12] [i_12] [i_12] [2] [i_12])))));
        var_47 = (max(((~((~(arr_32 [i_12] [12] [1] [i_12] [12]))))), (arr_3 [i_12] [i_12])));
        arr_39 [i_12] [i_12] = arr_3 [i_12] [i_12];
    }
    var_48 = (max(var_48, ((min((min((~var_9), var_2)), (max(((min(var_12, var_2))), var_8)))))));
    #pragma endscop
}

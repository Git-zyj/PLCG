/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = ((!(arr_1 [i_0] [i_0])));
        arr_4 [i_0] &= (arr_1 [i_0] [8]);

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            arr_9 [i_1] = var_10;
            var_19 = ((!(((arr_2 [i_1 - 1] [i_1 - 1]) >= (arr_5 [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_20 = -32763;

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_21 = (max(var_21, (arr_1 [i_0] [3])));
                var_22 = (min(var_22, ((((arr_0 [i_2]) << (var_12 && var_16))))));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_23 = (min(var_23, (!4294967295)));

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_19 [i_0] [i_4] [i_0] [i_0] = (!1);
                    var_24 = (max(var_24, var_8));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_25 = (min((((arr_21 [i_0] [8] [i_4] [i_6] [i_6] [i_4]) | (arr_15 [i_6] [i_4] [2]))), (((((arr_21 [i_0] [i_0] [i_2] [i_4] [i_6] [i_6]) % (arr_12 [i_0] [i_0] [i_6])))))));
                    arr_22 [i_4] [i_4] = (arr_18 [i_0] [i_4] [i_6]);
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                {
                    var_26 = var_7;
                    arr_25 [0] [i_2] [i_4] [i_7] = ((var_15 * ((min(var_9, var_0)))));

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_30 [i_0] [i_4] [i_4] [i_7] [i_8] = (min((arr_13 [i_0] [i_0] [i_0]), (min((max(var_3, var_8)), (arr_0 [i_8])))));
                        var_27 = 16777215;
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_28 &= var_15;
                        arr_33 [i_4] [i_7] [i_9] = ((min(-1899619688, var_7)));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        arr_36 [i_0] [i_4] [i_2] [i_0] &= (min(var_10, (arr_12 [i_0] [i_0] [i_10])));
                        arr_37 [i_4] [6] [i_4] [i_2] [i_4] [0] [i_0] = (!-85);
                    }
                    arr_38 [i_0] [i_0] [i_4] = var_14;
                }
                for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                {
                    var_29 = var_0;
                    var_30 &= (arr_5 [i_4] [1] [i_0]);
                    arr_42 [i_0] [i_0] [i_11] [i_0] &= (arr_26 [i_0] [i_4]);
                }
            }

            /* vectorizable */
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                var_31 &= var_11;
                arr_46 [i_0] [i_0] [i_0] &= -49;
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {

                for (int i_14 = 1; i_14 < 7;i_14 += 1) /* same iter space */
                {
                    var_32 &= var_13;
                    var_33 = (min(var_33, (arr_51 [i_14] [i_13] [i_13] [i_2] [i_0] [i_0])));
                    var_34 = (max(((((arr_26 [i_13] [0]) - 7))), (arr_13 [i_0] [i_0] [i_13])));
                }
                for (int i_15 = 1; i_15 < 7;i_15 += 1) /* same iter space */
                {
                    var_35 = 2006706673;
                    arr_54 [i_13] [i_13] [i_13] [i_13] = (min((((arr_40 [i_13] [i_15 + 3] [i_15 + 1] [i_15] [i_15]) ? (arr_40 [i_13] [i_15 + 3] [i_15 - 1] [i_15] [5]) : 17089029687092315916)), ((max((arr_40 [i_13] [i_15 + 2] [i_15 + 1] [i_15 + 2] [i_15 + 3]), 3)))));
                    arr_55 [i_0] [i_13] [i_13] [i_15] = ((!((((((!(arr_48 [i_15] [9] [i_15] [8])))) | (arr_0 [8]))))));
                }
                for (int i_16 = 1; i_16 < 7;i_16 += 1) /* same iter space */
                {
                    arr_59 [9] [i_13] [i_2] [i_13] [i_13] [i_16] = ((!((((arr_15 [i_16 + 1] [i_16 + 3] [i_16 + 1]) ? (arr_15 [i_16] [i_16 + 3] [i_16 + 2]) : (arr_15 [i_16 + 3] [i_16 - 1] [i_16 + 2]))))));

                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        var_36 = (min(var_36, (!var_16)));
                        arr_64 [i_13] [i_2] [i_13] = var_6;
                    }
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        var_37 = (min(var_37, ((((min((arr_56 [i_0] [i_2] [i_18 - 1] [i_16 + 2] [i_18 - 1]), 65535)) >= ((((!(((var_14 << (var_5 + 50)))))))))))));
                        arr_68 [i_2] [i_2] [i_2] [8] [i_2] [i_2] [8] &= var_8;
                        arr_69 [i_0] [i_2] [0] [4] [i_2] &= (!var_16);
                    }
                    arr_70 [i_13] [i_13] [i_16] = ((var_0 - ((var_0 & (arr_35 [i_16 + 1] [i_16 + 2] [i_16] [i_16])))));
                    arr_71 [i_13] [i_2] [i_2] [9] [i_16] = (((((arr_65 [2] [i_2] [i_13] [5] [i_16 - 1] [i_13] [i_16 - 1]) ? ((var_2 | (arr_61 [i_0]))) : (((min(1, var_1)))))) / (arr_65 [i_2] [i_2] [i_16 - 1] [i_2] [i_16 + 1] [i_2] [i_2])));
                    arr_72 [i_0] [i_0] &= (min((((arr_35 [i_13] [i_13] [i_16 + 3] [i_16]) || -7367)), (arr_28 [i_0] [i_2] [i_13] [i_0] [i_13] [i_16])));
                }
                arr_73 [i_0] [i_0] [i_2] [i_13] = (min(((min((arr_43 [i_0] [i_0] [i_0]), (arr_43 [i_0] [i_2] [i_13])))), ((-(arr_56 [i_2] [i_2] [i_2] [i_2] [i_13])))));
                arr_74 [i_0] [i_0] &= (min(((-8605497071044562421 + (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2]))), (arr_41 [i_13] [i_2] [0])));
            }
        }
        var_38 &= var_13;
    }
    for (int i_19 = 2; i_19 < 21;i_19 += 1)
    {

        for (int i_20 = 0; i_20 < 1;i_20 += 1)
        {
            var_39 = (min(var_39, ((min(var_8, (126 * -var_9))))));
            arr_80 [i_19 + 2] = var_9;
            var_40 = (min((((((arr_78 [10] [10]) ? (arr_75 [5]) : var_9)) - (arr_77 [10] [10] [10]))), (((!(arr_77 [i_19 + 2] [i_20] [i_20]))))));
        }
        var_41 = (max((!var_16), (((arr_77 [i_19] [i_19 + 2] [i_19]) << (min(1760340329, 1))))));
    }
    #pragma endscop
}

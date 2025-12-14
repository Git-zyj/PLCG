/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_7 ? (min(((var_2 ? var_2 : var_4)), (max(var_12, 0)))) : ((max(0, var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        arr_3 [i_0] &= var_2;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_7 [5] [i_0] [5] = (((-85 + 2147483647) >> (((arr_0 [i_1 - 1] [i_0]) + 4378357997631422621))));
            arr_8 [i_0] [i_1] [i_0] = (arr_1 [i_1 - 1]);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = (min(var_17, var_10));
            var_18 = var_2;
            var_19 = (min(var_19, (((~((var_7 ? 621587327 : var_15)))))));

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_15 [i_2] = 84;
                var_20 = (min(var_20, (((32046 ? (((-7872335098755969272 ? -85 : 0))) : ((-85 ? 28 : 8301963497797336004)))))));
            }
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                arr_19 [i_0] [i_2] [i_2] = (!0);

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_2] [i_5] = var_12;
                        var_21 = (-124 || -1);
                        var_22 = var_4;
                    }
                    for (int i_7 = 1; i_7 < 9;i_7 += 1)
                    {
                        arr_27 [i_0] [i_0] [i_0] [i_0] [i_2] = ((var_1 ? var_4 : 0));
                        arr_28 [i_2] [i_2] [i_4] = var_13;
                        arr_29 [i_2] [i_4] [i_4] [i_5] [i_5] = var_14;
                        var_23 = var_3;
                    }
                    arr_30 [i_0] [i_2] [i_2] [i_5] = (!(arr_20 [i_2] [i_2] [i_5] [i_2]));
                    arr_31 [i_2] [i_4] [i_4] [5] [i_5] = (!var_2);
                    var_24 = -1;
                }
            }
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
        {
            arr_34 [1] [i_8] = var_1;
            var_25 = (var_12 ? 2147483647 : -85);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_38 [i_9] = (127 + 2047);
            arr_39 [i_0] [i_9] [i_9] = (var_6 != var_1);
            var_26 = 6905457382885895559;

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_42 [i_0] [i_9] [i_9] = (((~var_11) > (arr_25 [i_10] [5] [5] [i_0] [5] [i_10] [2])));
                var_27 = ((var_9 >= (var_12 % var_10)));
                var_28 = ((-67 ? 97 : (~var_12)));
                arr_43 [i_9] = var_6;
                var_29 = (max(var_29, 1432162621445710942));
            }
        }
    }
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        var_30 = (arr_45 [i_11] [i_11]);

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            var_31 += (max((((((var_14 ? var_5 : 5645787388465267512))) ? ((var_15 ? var_1 : var_6)) : var_12)), ((11 + (arr_48 [i_11] [6] [i_11])))));
            var_32 &= (arr_45 [i_11] [0]);
            var_33 = (min(var_15, (((((min(var_9, var_2))) || (((var_13 ? 0 : (arr_44 [i_12] [i_11])))))))));
            arr_49 [i_11] [i_12] = ((-(arr_46 [i_11] [i_11])));
        }
        for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
        {
            arr_52 [i_11] [i_13] [i_11] = (var_15 > var_2);
            var_34 = (((max(1, 0)) ? (!var_15) : var_13));
        }
        for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
        {
            var_35 = (((((-(-127 - 1)))) ? 2147483647 : 1));
            var_36 = (min((((!(((var_15 ? (arr_45 [i_11] [i_11]) : var_15)))))), (min(-127, 10144780575912215611))));
        }
        arr_56 [i_11] = var_10;
    }
    #pragma endscop
}

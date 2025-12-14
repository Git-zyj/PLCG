/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = min((((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_1)))))), ((var_4 ? (arr_2 [i_0]) : (arr_1 [i_0]))));
        var_14 = (min(var_14, var_2));
        var_15 *= (min(((-(arr_1 [i_0]))), (!var_6)));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_16 = (~((((max((arr_2 [i_0]), var_3))) ? ((~(arr_0 [i_0]))) : var_0)));
            var_17 = (((arr_1 [i_1]) ? var_10 : (arr_4 [i_0] [i_0])));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                var_18 = (~(((var_8 ? var_6 : var_1))));
                var_19 = (min(var_19, (((-((min((arr_9 [i_3] [i_2]), (arr_9 [i_0] [6])))))))));
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_20 = arr_4 [i_0] [i_0];
                arr_13 [i_4] [i_4] [i_4] [i_0] = (~var_13);
                var_21 = (min(var_21, var_3));
            }
            arr_14 [i_0] [i_0] = var_1;
            var_22 = arr_6 [0];
            var_23 = ((2825555212474161290 ? (!3167017760) : 2740526084));
            var_24 &= (((17111983560352894543 | 1554441184) ? (!var_6) : ((((!(arr_10 [i_2] [i_2] [i_2] [i_2]))) ? (arr_9 [i_0] [i_2]) : (!var_0)))));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                var_25 -= ((min((arr_15 [10]), (arr_2 [i_0]))));
                var_26 = (!var_7);
                var_27 |= var_0;
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                arr_24 [i_0] [i_0] = var_4;
                var_28 = ((((((arr_4 [i_0] [i_0]) ? (arr_23 [i_5] [i_5] [i_5] [0]) : (arr_23 [i_0] [i_0] [i_7] [i_7])))) ? (arr_11 [i_0] [i_5] [i_0]) : (arr_20 [i_5] [i_5])));
                var_29 &= (max(((29742 ? 15621188861235390326 : 1546)), (((-(!var_6))))));
            }
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                arr_28 [i_0] [11] = var_4;
                var_30 = ((((!(~var_10))) ? (((!((!(arr_7 [i_0] [i_0] [i_0])))))) : (!15621188861235390325)));
                var_31 = (((arr_26 [i_0] [i_8]) ? ((+((var_11 ? (arr_11 [i_0] [i_5] [i_0]) : var_8)))) : (((4633019035661281380 ? ((1554441212 >> (2740526083 - 2740526054))) : (arr_15 [i_0]))))));
                var_32 += ((-(((~(arr_20 [i_5] [i_5]))))));
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                arr_31 [10] &= ((((((arr_19 [0] [0] [0] [0]) ? (arr_0 [8]) : (arr_7 [i_0] [10] [i_9]))) | var_4)));
                var_33 = var_1;

                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    var_34 += ((-(max(((max(var_2, var_4))), var_1))));
                    arr_35 [i_0] = ((((max((min((arr_19 [i_0] [i_0] [i_9] [i_9]), (arr_4 [5] [i_0]))), -var_2))) ? ((2825555212474161290 ? 138386604 : 651099498)) : var_1));
                    var_35 = ((~((((max(var_3, (arr_33 [i_0] [i_10])))) ? ((((var_5 || (arr_19 [i_0] [i_9] [i_9] [i_9]))))) : (min(2825555212474161291, 1875505669))))));
                }
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    var_36 = (max(var_36, (((var_0 ? ((min(var_13, (arr_23 [i_11] [i_9] [i_5] [10])))) : (((((max((arr_15 [i_11]), (arr_4 [i_0] [i_11])))) ? var_8 : var_1))))))));
                    arr_38 [i_0] [2] [i_9] [i_11] [4] = ((!(((+(((arr_37 [i_11]) ? (arr_6 [i_9]) : var_10)))))));
                    arr_39 [i_0] [i_0] = (min(((-(arr_29 [i_0] [4] [i_0]))), (((min(var_13, (arr_7 [i_0] [i_9] [i_0])))))));
                    var_37 = var_9;
                    var_38 = (arr_5 [i_5] [i_5]);
                }
                arr_40 [0] [i_9] &= (min((((-441117237 < 2740526084) ? (arr_33 [i_0] [i_9]) : (arr_36 [i_0] [i_5] [i_5] [i_0] [i_9]))), ((~(arr_23 [i_0] [i_0] [6] [i_9])))));
                var_39 = (((((var_11 ? var_5 : var_9)))) ? (min((arr_1 [i_9]), (((arr_23 [0] [6] [0] [i_0]) ? var_7 : var_9)))) : (((((min(var_10, var_10))) ? var_1 : ((var_11 ? (arr_25 [i_0] [i_9] [i_0] [i_0]) : (arr_25 [i_0] [i_5] [i_0] [i_9])))))));
            }
            arr_41 [i_0] [i_0] [i_0] = ((~(arr_29 [i_5] [i_5] [i_0])));
            var_40 = (min(var_40, var_9));
            var_41 = (min(var_41, (((((((var_4 >> (var_13 - 13376012539542718924))) ? ((var_9 ? var_13 : (arr_6 [i_5]))) : (arr_7 [i_0] [3] [3]))))))));
            var_42 = (max(var_42, (!var_10)));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_43 = (max(var_43, ((((((~(!var_11)))) || (((min(1, (arr_32 [i_12] [6] [i_12] [i_12]))))))))));

            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                arr_47 [i_12] [i_12] [i_0] = (((arr_32 [i_0] [i_0] [i_0] [i_13]) ? ((((min(var_2, (arr_33 [i_0] [i_0])))))) : (((arr_5 [i_13] [i_13]) ? (arr_0 [i_0]) : ((var_11 ? var_10 : (arr_15 [i_0])))))));
                var_44 *= min(var_10, (((((137 ? 2825555212474161290 : 6402305334997138077)) < (((var_9 ? (arr_15 [i_12]) : var_1)))))));
                var_45 = var_0;
                var_46 = (arr_25 [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_47 = var_2;
    #pragma endscop
}

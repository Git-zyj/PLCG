/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((var_7 ? var_5 : var_1))));
    var_14 = var_9;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!((((arr_1 [i_0] [i_0]) ? 2730832031032393184 : (arr_2 [i_0]))))));
        var_15 *= 111;
        arr_4 [i_0] = (!1);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            var_16 = (((((((!(arr_9 [i_1] [i_2] [i_2 + 1]))) ? ((~(arr_5 [i_1] [i_2]))) : (arr_6 [i_1])))) ? var_0 : (arr_5 [i_1] [i_1])));
            arr_12 [i_1] [i_2] [i_1] = (((arr_7 [i_2 + 1] [i_2 + 1]) >= (arr_5 [i_2 + 1] [i_2 + 1])));
            var_17 |= (((((-(arr_7 [i_1] [i_2])))) ? (arr_7 [i_2 + 1] [i_1]) : -24));
        }
        arr_13 [i_1] = ((~((min(var_3, (arr_10 [i_1] [i_1]))))));
        var_18 = ((((min((arr_9 [i_1] [i_1] [i_1]), 1281646843))) >= (max((arr_9 [i_1] [i_1] [i_1]), var_12))));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 = ((~(((~(arr_8 [i_3]))))));
        arr_16 [i_3] = (arr_11 [i_3] [i_3]);
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_20 = -127;
            arr_21 [i_4] [i_4] &= ((~(arr_7 [i_5] [i_4])));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_21 = ((~(arr_11 [i_6] [i_6])));
            var_22 = (((-1264365529037756093 ? -43410168412542818 : 57625)));
            arr_24 [i_6] = (~(((var_4 >= (~877869848)))));
            arr_25 [i_6] [i_4] = ((((~(arr_18 [i_6]))) >= (arr_17 [i_4 + 1] [i_6])));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_23 |= (!var_10);
            var_24 = (((arr_11 [i_7] [i_7]) ? 3674227851 : ((((!(arr_7 [i_4] [i_7]))) ? (!4294967283) : var_12))));
        }
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_25 = (arr_27 [i_4 + 1] [i_4] [i_4]);
            arr_32 [i_4] [i_8] [i_8] |= ((var_10 ? var_12 : ((min((arr_10 [i_4] [i_8]), (((arr_6 [i_4]) ? (arr_11 [i_8] [i_8]) : 51445)))))));
        }
        var_26 = (((min(((381490113 ? var_7 : var_4)), (((arr_7 [i_4 + 1] [i_4]) ? (arr_18 [i_4]) : var_2)))) >= (arr_7 [i_4 - 1] [i_4])));
        var_27 = (min(var_27, var_7));
        var_28 = (((~var_5) >= (arr_9 [i_4] [18] [i_4 + 1])));
    }

    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
    {
        var_29 += (!var_0);
        var_30 = (!633826604);

        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_31 = var_10;
            var_32 = (max(var_32, (((-((~(min(604727756, (arr_6 [i_10]))))))))));
        }
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
    {
        var_33 = ((arr_9 [i_11] [i_11] [i_11]) ? ((26 ? (((arr_8 [i_11]) | 631465477)) : 0)) : ((max((((arr_34 [i_11]) ? 3885573916 : 734287196)), ((max((arr_34 [i_11]), (arr_35 [i_11]))))))));
        arr_39 [i_11] = -5049049215916485374;
    }
    var_34 = (min((~40743), ((~((min(90, var_2)))))));
    #pragma endscop
}

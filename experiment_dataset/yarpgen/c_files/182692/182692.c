/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((1480624352 ? var_7 : 31606));
    var_21 = ((var_13 ? var_1 : var_16));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 = (min(var_5, (((~(arr_1 [i_0]))))));
        var_23 = ((((((arr_1 [i_0]) ? (((31606 ? (arr_0 [i_0]) : var_16))) : 1408275942))) && ((((arr_1 [4]) - (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = (max(1379846338172906107, 288230376151646208));
        var_24 = var_7;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_25 = (((17066897735536645524 > 1) ? ((min((arr_1 [i_2]), (arr_0 [i_2])))) : -1379846338172906092));
        var_26 = (+((((min((arr_7 [i_2]), (arr_2 [14])))) ? 4225566493 : 1)));
        var_27 = (arr_0 [i_2]);
        var_28 = var_17;
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_29 = (max(var_29, (((var_16 ? ((((arr_4 [i_3]) ? 1 : 36765))) : (((arr_10 [0]) ? 1379846338172906103 : 112)))))));
        var_30 = ((arr_2 [i_3]) + (arr_3 [8] [i_3]));

        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
        {
            var_31 = (max(var_31, (-var_19 && 1379846338172906091)));
            arr_14 [i_3] [i_4] = 17066897735536645484;
            var_32 = (var_19 ^ 96);
            var_33 = (((((arr_10 [i_3]) ? (arr_11 [10]) : (arr_8 [i_4]))) <= (arr_10 [i_3])));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_34 = (max(var_34, (((!(arr_9 [i_5]))))));
                var_35 = (!var_6);
                var_36 ^= (31606 ? 255 : (arr_17 [i_5]));
            }
            arr_19 [i_3] = (arr_0 [i_3]);
            var_37 = ((-((1 ? 4294967281 : 32767))));
            arr_20 [i_5] &= (((arr_16 [i_3] [11] [i_5]) ? (arr_17 [i_5]) : (arr_9 [i_5])));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_38 = (min(var_38, ((((arr_2 [i_3]) ? (arr_1 [i_3]) : 23380)))));
            var_39 = 1;
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_40 += (arr_24 [i_8]);
            var_41 = (~((0 ? 33921 : (arr_9 [i_3]))));
            var_42 = ((~(arr_24 [i_3])));
            var_43 = (arr_15 [i_3] [i_8]);
            var_44 = (((arr_4 [i_8]) ? (((arr_16 [i_8] [i_3] [i_3]) - 131071)) : 30977));
        }
    }
    for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
    {
        arr_29 [i_9] [i_9] = var_8;
        var_45 = (min(var_45, (((((((~(arr_21 [i_9] [i_9])))) ? var_7 : (min(788881201, 9))))))));
    }
    #pragma endscop
}

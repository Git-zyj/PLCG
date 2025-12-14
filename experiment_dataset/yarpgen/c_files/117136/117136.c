/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((((min(var_14, var_3)) == ((max(var_5, -4929037330923930152))))))));
    var_16 = (max(var_16, (((((var_1 ? var_12 : (~14989301008260824167))) < ((~((-421528651112524726 ? 0 : 8898818982804249591)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_17 = 1;

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_18 *= 270215977642229760;
                var_19 = (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (arr_0 [i_1]) : ((((var_0 <= (arr_0 [i_1])))))));
                var_20 = (arr_1 [i_0] [i_0]);
                arr_8 [i_1] = (~(arr_1 [i_1] [i_1]));
            }
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_0] = ((arr_12 [i_0] [i_3]) ? ((-2207541732213334892 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : var_4)) : (((~(arr_10 [i_3] [i_0])))));
            arr_14 [i_0] [i_0] |= (((~1) || (var_5 == 0)));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_4] = (((arr_16 [i_0] [i_0]) ? 1 : (arr_10 [i_0] [i_0])));

            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                var_21 = (arr_10 [i_5 + 1] [i_5 - 1]);
                var_22 = (max(var_22, ((((arr_7 [i_0] [i_0] [i_5 + 1]) ? (arr_18 [i_0] [i_0] [i_4] [i_5]) : ((var_5 ? var_5 : var_3)))))));
            }
            arr_21 [i_0] = (((arr_15 [i_4] [i_0] [i_0]) ? 6572928593972722212 : (arr_15 [i_0] [i_0] [i_4])));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_23 += (((((((arr_10 [i_0] [i_6]) && var_12)))) != (~var_12)));

            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                var_24 = ((((((arr_16 [i_7] [i_7]) == (arr_5 [i_0] [i_0])))) * (arr_10 [i_0] [i_0])));
                arr_28 [i_6] [i_6] [i_7] = arr_3 [i_0];
                arr_29 [i_0] [i_6] [i_6] = var_4;
                arr_30 [i_6] = (arr_0 [i_0]);
            }
            arr_31 [i_6] [i_0] [i_6] = (((arr_2 [i_0]) % (arr_2 [i_0])));
        }
        arr_32 [i_0] = var_6;
        arr_33 [i_0] [i_0] = 9223372036854775807;
        arr_34 [i_0] = var_8;
        var_25 = (((((var_12 ? var_9 : var_6))) ? (!2967059448962877862) : (arr_12 [1] [i_0])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        arr_38 [i_8] = ((var_11 ? (arr_7 [7] [i_8] [i_8]) : (arr_11 [i_8] [i_8])));
        var_26 = (max(var_26, (((arr_19 [i_8] [i_8] [i_8] [i_8]) ? (arr_18 [i_8] [i_8] [i_8] [i_8]) : ((((12368913914003611003 == (arr_12 [i_8] [3])))))))));
        arr_39 [i_8] [i_8] = (var_12 ? (arr_24 [i_8] [i_8] [i_8]) : (arr_20 [i_8]));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_27 *= (((arr_42 [i_9]) ? (arr_43 [i_9]) : var_0));
        arr_44 [i_9] = (((((arr_41 [i_9]) < (arr_42 [i_9]))) ? (arr_43 [i_9]) : (var_5 >= var_12)));
    }
    for (int i_10 = 3; i_10 < 21;i_10 += 1)
    {
        arr_48 [i_10] = (max((((!((min(var_9, var_8)))))), (min(17544192358485500932, ((min(var_13, var_9)))))));
        arr_49 [0] = (((max(var_14, (arr_45 [i_10 - 1] [i_10]))) / 9223372036854775802));
    }
    #pragma endscop
}

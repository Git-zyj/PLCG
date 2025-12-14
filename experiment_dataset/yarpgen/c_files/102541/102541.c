/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = var_12;
        var_15 = ((arr_1 [i_0] [i_0]) + ((max(var_3, var_9))));
    }

    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_16 = min((max(var_0, var_0)), (arr_6 [i_1] [i_1]));

        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_1] [i_1] [i_1] = max((max((arr_0 [i_2 + 2] [13]), (arr_6 [i_2 - 2] [i_2 + 2]))), (((arr_6 [i_2 - 2] [i_1]) % (arr_0 [i_2 - 1] [i_2 - 1]))));
            var_17 = arr_0 [0] [13];
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1) /* same iter space */
        {
            var_18 = max(18, (4294967281 & 4294967263));
            var_19 = var_10;
        }
        for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                var_20 = var_13;
                var_21 = var_13;
                arr_23 [10] [10] [i_5] [i_5] = ((-(((!(arr_5 [i_1] [i_5 - 2]))))));
                arr_24 [i_5] [8] [i_5 + 1] [i_5 - 1] = (13 | 578452174);
            }
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_22 = (max(var_22, (((((arr_26 [i_4] [i_4]) ^ ((var_3 ^ (arr_14 [10] [10]))))) & ((max((arr_18 [i_4] [i_4]), (arr_13 [i_1]))))))));
                var_23 = ((max((((arr_6 [i_6] [i_6]) * (arr_22 [i_4] [i_4]))), var_6)) * var_5);
            }
            var_24 = var_8;
            var_25 = (max(var_25, var_1));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_32 [i_1] [i_7] [4] = (max((arr_11 [9] [i_1]), (arr_11 [i_1] [i_1])));
            var_26 = max(-var_13, (arr_21 [i_7] [8] [i_7] [12]));
        }
        arr_33 [i_1] = ((var_10 < ((((!(arr_4 [i_1] [7])))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        arr_36 [18] |= ((((((arr_34 [i_8]) || 2263848773)))) - 1826857185);
        arr_37 [i_8] = arr_34 [i_8];

        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            var_27 += arr_38 [i_9 - 1] [12] [i_9 + 1];
            var_28 += arr_35 [i_9 + 1];
            arr_40 [i_9 + 1] [i_9] [i_9 - 1] = var_3;
            var_29 = ((var_13 ^ var_13) & var_3);
            arr_41 [i_9] = (((!var_11) || var_3));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_30 = (arr_42 [i_8] [i_10] [i_8]);
            var_31 = (arr_42 [i_10] [i_10] [i_10]);
            var_32 = (((arr_43 [i_8] [i_8]) > (arr_39 [i_10])));
        }
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            arr_46 [i_8] [i_8] [i_8] = arr_42 [i_8] [i_11] [i_8];
            var_33 = (4157251729 / 42);
            arr_47 [i_8] = var_4;
            arr_48 [i_8] = (~(arr_42 [i_8] [i_11] [i_8]));
        }
        var_34 = (min(var_34, (arr_44 [i_8])));

        for (int i_12 = 2; i_12 < 19;i_12 += 1) /* same iter space */
        {
            arr_51 [9] [9] [i_8] = arr_35 [i_12 - 2];
            var_35 = (arr_45 [i_8]);
        }
        for (int i_13 = 2; i_13 < 19;i_13 += 1) /* same iter space */
        {
            var_36 = arr_35 [i_8];
            var_37 = var_7;

            for (int i_14 = 1; i_14 < 16;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    var_38 = var_6;
                    var_39 = arr_57 [i_14] [i_14] [i_13] [i_14 + 4] [5];
                    var_40 = (((arr_53 [i_8] [i_13]) && var_0));
                    arr_61 [i_13] [7] [i_13] [i_13] = (arr_55 [i_8] [9] [11]);
                }
                arr_62 [i_13] = ((arr_44 [6]) ^ (arr_58 [i_8] [i_8] [i_14 + 1] [i_8]));
            }
            arr_63 [i_13] = arr_60 [i_8] [i_8] [i_8] [4] [i_8] [i_13];
        }
        for (int i_16 = 3; i_16 < 19;i_16 += 1)
        {
            var_41 ^= (arr_59 [i_16 + 1] [i_16] [i_16] [i_16] [i_16]);
            var_42 = var_1;
            arr_66 [i_8] [i_8] [i_16] = (arr_56 [i_8] [i_16 - 1] [i_16]);
        }
    }
    for (int i_17 = 2; i_17 < 14;i_17 += 1)
    {
        arr_71 [i_17] = (arr_49 [i_17 - 2] [i_17 - 2] [i_17 - 2]);
        var_43 = (-(arr_50 [i_17] [i_17]));
        var_44 = (((min((max((arr_57 [i_17] [i_17] [i_17] [i_17 - 1] [i_17]), (arr_34 [i_17 - 2]))), (max(var_6, var_0)))) <= (max((arr_2 [i_17 - 2]), (arr_2 [i_17 - 2])))));
        arr_72 [i_17 + 1] = var_12;
    }
    for (int i_18 = 0; i_18 < 24;i_18 += 1)
    {
        var_45 = ((var_10 != (arr_75 [i_18])));
        var_46 = max((((!(var_2 % var_7)))), (max((4294967292 & 133169152), (min((arr_73 [i_18]), var_5)))));
    }
    var_47 = (((max((max(var_5, var_6)), var_12)) == var_12));
    #pragma endscop
}

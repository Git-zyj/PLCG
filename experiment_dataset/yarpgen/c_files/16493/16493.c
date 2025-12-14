/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [i_1] = (arr_5 [i_0] [i_0] [i_1] [i_2]);

                for (int i_3 = 1; i_3 < 11;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_2] = -65;
                    arr_13 [i_1] [i_1] [i_2] [i_3 - 1] = 1876637829;
                    arr_14 [i_2] [i_1] [i_1] [i_1] = (!90);
                    arr_15 [i_1] = (~200);
                }
                for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_2] [i_1] = (((((-(arr_6 [i_4 + 1] [i_1] [i_1] [i_0])))) ? (((-(arr_16 [i_0] [i_0] [11] [i_1] [i_2] [i_4])))) : ((~(arr_17 [i_1] [i_1] [i_2] [i_4])))));
                    arr_19 [i_2] [i_1] = (!190);
                    arr_20 [i_1] [i_2] [i_1] = ((76 ? (!59) : (185 ^ 32)));
                    arr_21 [i_2] [i_1] [i_2] = (((53 ? (arr_5 [i_2] [i_2] [i_2] [i_2]) : (arr_5 [i_0] [i_1] [i_2] [i_4 - 1]))));
                }
            }
            arr_22 [i_1] [i_1] [i_1] = -48;

            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                arr_26 [i_0] [i_1] [i_5] = ((max(32767, 18446744073709551609)));
                arr_27 [i_1] [i_1] = 51;
                arr_28 [i_0] [i_0] [i_1] = ((((max(1487585238449312470, -2))) || ((((min(-22842, 216)))))));
                arr_29 [i_1] = (((!29) ? 35 : (24 & -113)));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                arr_33 [i_1] = 44;
                arr_34 [i_0] [i_1] [i_0] = (((arr_31 [i_0] [6] [i_6]) && (arr_31 [i_6] [i_1] [i_0])));

                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_1] [10] = 48;
                    arr_39 [i_0] [i_1] [i_6] = 36;
                    arr_40 [i_0] [i_0] [6] [i_0] = 1;
                    arr_41 [i_1] = ((~((1 ? 1 : 35))));
                    arr_42 [i_0] [i_1] [9] [i_0] = ((~((0 ? 2564821803808211045 : -113))));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    arr_45 [i_1] [i_1] = (arr_4 [i_1] [i_1] [i_6] [i_8]);
                    arr_46 [6] [i_1] = (27 < 1462079606);
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            arr_49 [i_9] [i_9] = 68;
            arr_50 [i_0] [i_9] = (((((15171530293533546049 ? 15 : 19))) && -59));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            arr_54 [i_10] [1] [i_0] = (~1);

            for (int i_11 = 0; i_11 < 13;i_11 += 1)
            {

                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        arr_62 [i_13] [i_12] [i_12] [i_11] [i_10] [i_0] [i_0] = (((((60 ? 44 : 281474976710655))) ? 127 : (((arr_1 [i_11] [i_10]) | 40))));
                        arr_63 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [8] = -950074603;
                    }
                    arr_64 [i_0] [i_10] [i_10] [10] [10] [1] = 14721567046674812247;
                    arr_65 [1] [i_10] [i_11] [i_11] [i_12] = -71;
                }
                arr_66 [i_10] [i_11] = (1 << 14);
            }
            arr_67 [i_0] [i_0] [i_10] = 127;
        }
        arr_68 [i_0] = ((((max(117, 24561))) && ((min(-127, -1)))));
    }
    var_14 = 98;
    var_15 = var_8;

    /* vectorizable */
    for (int i_14 = 0; i_14 < 19;i_14 += 1)
    {
        arr_73 [i_14] [i_14] = 9;
        arr_74 [i_14] = ((arr_71 [i_14] [i_14]) && 2);
        arr_75 [i_14] = 113;
    }
    #pragma endscop
}

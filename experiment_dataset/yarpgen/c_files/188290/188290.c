/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_8;
    var_16 = var_9;
    var_17 = (max(var_17, var_3));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_18 = (min(var_18, ((((arr_1 [i_0] [i_0]) ? 72 : 227)))));
        var_19 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] = 3589670303263747145;
                            arr_16 [i_1] [i_2] [i_3] [i_4] [i_4] [i_5] = ((~(arr_4 [i_1])));
                            var_20 = (min(var_20, ((!(arr_11 [i_1] [i_2] [i_3] [i_4] [i_5] [i_5])))));
                        }
                    }
                }
                arr_17 [i_1] [i_1] [i_3] = 189;
                var_21 &= (arr_13 [i_1] [i_1] [i_1] [i_2] [i_3] [i_3] [i_3]);

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_22 = (((-67 ^ -1963034860) < 84));
                        var_23 = (min(var_23, ((((arr_13 [i_1] [i_2] [i_2] [i_6] [i_2] [i_7] [i_7]) != (arr_20 [0] [i_2] [i_3] [i_6] [i_7]))))));
                        var_24 = (max(var_24, (((arr_18 [i_1] [i_1] [i_1] [0]) ? 1963034841 : var_5))));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        var_25 = (!-6605);
                        arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_22 [i_8] [i_2] [i_3] [i_6] [i_8] [i_1]);
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        var_26 = (arr_8 [i_1]);
                        arr_31 [i_9] [i_1] [i_6] [i_6] [i_3] [i_1] [i_1] = (((arr_18 [i_6] [i_2] [i_3] [i_1]) ? 6366933545673074899 : (((var_7 ? var_14 : 2018931828)))));
                        var_27 = (max(var_27, 30836));
                        var_28 = 1963034859;
                        var_29 = (arr_19 [i_1]);
                    }
                    arr_32 [i_1] [i_2] [i_3] [i_6] = ((6596 ? 160 : -13780));
                }
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    arr_36 [i_1] = (arr_29 [i_1] [i_1]);

                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        var_30 = (arr_35 [i_2] [i_1] [i_10] [i_11]);
                        var_31 = (arr_1 [i_1] [i_11]);
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((!(arr_21 [i_12] [i_10] [i_1] [i_2] [i_1])));
                        var_32 = ((var_9 ? 86 : ((~(arr_24 [i_12] [i_10] [i_1] [i_1] [i_1] [i_1])))));
                        arr_44 [i_1] [i_2] [i_2] [i_3] [i_10] [i_12] [i_12] = (arr_35 [i_1] [i_1] [i_10] [i_12]);
                        arr_45 [i_1] [i_2] [i_1] [i_10] [i_12] = (arr_29 [i_1] [i_1]);
                        arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_25 [i_1] [i_3]);
                    }
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        var_33 = 30827;
                        arr_50 [i_1] [i_1] [i_1] [i_1] = (arr_49 [i_1] [i_2] [i_3] [i_10] [i_1]);
                        var_34 = (max(var_34, (((~(arr_27 [i_1] [4] [i_2] [i_10]))))));
                    }
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        arr_53 [i_14] [i_1] [i_3] [i_1] [i_1] = (arr_28 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        arr_54 [i_1] [2] [i_3] [i_10] [i_14] &= 37913;
                    }
                }
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    var_35 |= var_12;
                    var_36 ^= 1;
                    var_37 += -30828;
                }
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    arr_61 [i_1] [i_1] [i_1] [2] |= (((arr_19 [i_1]) ? (arr_0 [i_1]) : (((83 < (arr_41 [i_1] [6] [i_3] [i_16]))))));

                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        arr_64 [i_1] [i_1] [i_1] [i_1] [i_1] = (~6366933545673074899);
                        arr_65 [2] [i_2] [i_2] [i_2] [i_2] [i_2] &= (var_8 > var_4);
                    }
                }
                arr_66 [i_1] = (((arr_55 [i_1] [i_1] [i_1] [i_1]) ? (arr_40 [i_1]) : -24975));
            }
            var_38 = (arr_49 [i_1] [i_2] [i_1] [i_2] [i_1]);
            var_39 = (min(var_39, (arr_19 [i_1])));
        }
        arr_67 [i_1] = (((arr_27 [i_1] [i_1] [i_1] [i_1]) ^ ((((((arr_27 [i_1] [i_1] [i_1] [i_1]) & (arr_4 [i_1]))) < 13780)))));
        arr_68 [i_1] = ((+((((arr_10 [i_1] [i_1] [i_1] [i_1]) < (arr_10 [i_1] [i_1] [i_1] [i_1]))))));

        for (int i_18 = 0; i_18 < 10;i_18 += 1)
        {
            var_40 ^= ((((-26408 ? -var_10 : (arr_60 [0] [i_18] [i_18]))) < (((min(-126, 1))))));
            arr_71 [i_1] [i_1] = (((((~(arr_20 [i_1] [i_18] [i_1] [i_1] [i_1])))) >= (((arr_20 [i_1] [i_18] [i_1] [i_18] [i_18]) ? (arr_19 [i_1]) : (arr_20 [i_1] [i_18] [i_18] [i_18] [i_18])))));
        }
        arr_72 [8] &= (((arr_18 [4] [i_1] [i_1] [4]) < ((((arr_59 [i_1] [i_1] [i_1] [i_1] [i_1] [1]) < (-6382164863456902859 != -104))))));
    }
    #pragma endscop
}

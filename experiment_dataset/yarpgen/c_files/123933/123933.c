/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (max(var_4, (((4060431233819862139 | 1743970820549625869) ^ -1743970820549625870))));
    var_11 = var_5;
    var_12 = (min(var_12, var_6));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_13 = ((-(min(6, var_2))));

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_7 [i_0 + 1] &= (!var_0);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_14 = ((~(((arr_4 [i_0] [i_0 + 1] [i_0 - 1] [i_0]) ? (arr_2 [6] [i_2] [i_2]) : (arr_2 [i_0 - 1] [5] [i_0])))));
                            var_15 = (arr_9 [i_2] [i_1] [i_2] [i_3]);
                            var_16 *= (arr_0 [i_0]);
                            arr_15 [6] [i_1] = var_3;
                        }
                    }
                }
                arr_16 [i_0] [i_2] [i_1] [i_0] &= ((8400522140662059161 <= (arr_11 [i_0 - 1] [i_1] [i_1] [i_1])));
                arr_17 [i_2] [i_2] [i_1] [i_0 + 1] = -6022;
                var_17 = (arr_9 [1] [i_0 - 1] [i_0] [i_0 - 1]);
            }
            var_18 = (min(var_18, var_9));
            var_19 = (arr_2 [i_1] [9] [11]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_20 = -23;
            var_21 -= var_8;
        }

        /* vectorizable */
        for (int i_6 = 3; i_6 < 10;i_6 += 1)
        {
            arr_24 [i_0 - 1] [i_6] [i_6] = ((var_8 ? (arr_11 [i_0] [i_0 + 1] [i_6 - 3] [i_6]) : (arr_11 [i_0 + 1] [i_0 + 1] [i_6 + 2] [i_6])));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_22 = ((var_8 + ((2757321981 ? (arr_6 [i_7]) : 121))));
                arr_27 [10] [10] &= ((!(arr_12 [i_0] [8] [i_0] [i_6 + 1] [i_6 - 3] [i_7] [i_7])));
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        {
                            var_23 = (max(var_23, (((((arr_21 [i_0] [4] [4]) % var_8))))));
                            arr_36 [i_0] [i_6] [9] [9] [i_10] = (((arr_32 [i_6] [0] [i_9] [i_10]) ? var_9 : (arr_30 [2] [i_6 + 1] [i_6] [i_6 - 1])));
                            arr_37 [i_0] [i_6] [i_0] [i_0] [i_0] = 0;
                        }
                    }
                }
                arr_38 [i_6] = (((-10757 ? 4095 : (-127 - 1))));
            }
            arr_39 [i_6] = var_3;
        }
        for (int i_11 = 2; i_11 < 8;i_11 += 1)
        {
            arr_43 [i_0] [i_11] [i_11 + 4] = var_7;
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        {
                            arr_53 [i_11] = (max((arr_46 [i_13 - 2] [i_13 - 1]), var_5));
                            arr_54 [i_0] [i_11] [i_11] [3] = ((max(((((arr_33 [i_0] [i_0] [i_0 - 1] [i_0] [1]) ? -1743970820549625876 : 1537645315))), var_1)));
                            arr_55 [i_0] [i_11] [i_12] [i_12 + 2] [i_13] [i_13 + 1] [i_11] = ((+(((((arr_45 [i_11]) ? var_8 : 4294967295)) & ((((arr_51 [i_0]) ? var_4 : 7)))))));
                        }
                    }
                }
            }
        }
        for (int i_15 = 2; i_15 < 11;i_15 += 1)
        {
            var_24 &= ((((2622591990 ? -679807950 : 4434)) - ((-(((!(arr_29 [i_15]))))))));
            var_25 &= (((min((((-902752779 + 2147483647) >> (((arr_34 [i_15]) - 1893178781640359983)))), (arr_51 [i_0 + 1])))) ? var_3 : (4294967295 || 0));
        }
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 17;i_16 += 1)
    {
        var_26 = (((arr_59 [i_16 + 3]) / (arr_60 [i_16 + 3])));
        var_27 = ((((563288837 ? var_7 : 1)) < 113));
        arr_61 [i_16] = (((arr_59 [i_16 - 1]) && ((!(arr_60 [i_16 + 1])))));
    }
    #pragma endscop
}

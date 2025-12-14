/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
        {
            var_10 &= (arr_0 [i_0 - 3]);
            arr_5 [i_0 + 2] = (((arr_1 [i_0 - 3]) ? (arr_1 [i_0 - 2]) : var_5));

            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {

                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    var_11 = (((8890669419539801980 & var_7) * ((((arr_9 [2] [7] [i_0]) ? 4 : (arr_3 [i_0] [i_1] [i_2]))))));

                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        var_12 += (1 || -1);
                        arr_14 [i_0] [i_0] [i_0 - 3] [i_0] [i_2] = var_1;
                        var_13 += var_1;
                        var_14 *= ((((var_3 * (arr_7 [i_0] [10] [i_2]))) > ((((arr_6 [1] [i_1]) ? (arr_13 [1] [i_3] [i_2] [i_1] [1]) : var_1)))));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        arr_17 [10] [10] [4] [4] [10] &= (((arr_7 [i_3 + 3] [2] [i_3 + 2]) != (arr_7 [i_3 + 2] [12] [i_3 - 1])));
                        var_15 = (3013895248629506305 + 11171071797219698011);
                    }
                }
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    var_16 = (((arr_1 [i_2 + 3]) != (arr_1 [i_0 - 1])));
                    var_17 = (((((!(arr_7 [i_0 - 1] [i_2] [11])))) > ((((arr_6 [i_2] [i_2]) <= 2559097996)))));

                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        var_18 = (((arr_9 [i_0 - 2] [i_0 - 2] [i_2 + 2]) > (((arr_3 [i_0] [i_1] [i_6]) % var_3))));
                        var_19 = (((((var_1 ? var_9 : (arr_3 [i_0 - 1] [i_0 - 2] [i_0])))) ? (arr_4 [i_0 + 2]) : var_0));
                        var_20 ^= ((((((arr_19 [i_6 + 1] [i_6 + 1] [8] [9]) & var_7))) & (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) | (arr_7 [i_0] [4] [0])))));
                        arr_23 [i_2] [i_6] [i_2] [6] [i_2] = ((17 >> (613648991875677603 - 613648991875677586)));
                        var_21 = ((789854548284602738 > (arr_10 [i_0 + 1] [i_6 + 3] [i_0 + 1] [3] [i_7])));
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        arr_27 [i_2] [i_2] [i_6] [i_2 + 3] [i_2] [i_0] = -1545090360;
                        var_22 *= (((arr_13 [10] [i_1] [10] [i_6] [10]) ? (arr_13 [10] [i_6] [i_2 + 1] [i_6] [i_8]) : (arr_13 [0] [0] [0] [i_6] [i_6])));
                        var_23 = var_3;
                    }
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        var_24 = (arr_1 [i_0]);
                        arr_30 [i_2] [i_2] [i_2] [i_2] [i_2] = ((199 ? 9556074654169749646 : -51));
                    }
                }
                arr_31 [i_2] = -36;
                var_25 ^= var_3;
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_26 = var_3;
                var_27 = (!(arr_10 [i_0] [i_0 - 3] [i_1] [i_0 - 3] [i_1]));
                var_28 *= (arr_0 [i_0 - 1]);
                var_29 = arr_19 [i_0 - 2] [i_0 - 2] [i_10] [i_10];
            }
            for (int i_11 = 1; i_11 < 11;i_11 += 1) /* same iter space */
            {
                var_30 = ((-(11171071797219698014 > var_6)));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_31 = 12163;
                            var_32 = (-23318 + var_3);
                            var_33 &= ((((((arr_40 [i_13] [i_12] [7] [i_1] [10]) ? var_8 : 79))) ? (arr_40 [i_0 - 3] [i_0 - 2] [0] [i_11 - 1] [i_13 + 1]) : var_0));
                            var_34 = (38960 | 28672);
                        }
                    }
                }
            }
            for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
            {
                var_35 = (0 % var_3);
                var_36 = ((var_7 ? (arr_21 [i_0 + 2] [i_0 + 2] [i_14] [i_14] [i_14]) : ((8890669419539801984 ? (arr_10 [0] [i_1] [i_1] [0] [0]) : (arr_26 [i_0 - 2] [i_14] [i_14] [10] [i_0] [i_0])))));
            }
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
        {
            arr_47 [i_0] [i_15] [i_15] = (((min((var_7 / var_7), ((max(38, var_5))))) | (((((((163 <= (arr_32 [i_15] [i_15] [i_15])))) >= ((~(arr_35 [i_15] [i_0] [i_0])))))))));
            var_37 = ((((((arr_36 [i_0 - 1] [i_0 + 2] [i_0]) ? (arr_36 [i_0 + 1] [i_0 - 2] [i_0]) : var_5))) ? (arr_26 [i_15] [i_15] [10] [i_0] [i_15] [i_0]) : ((~((var_9 ? var_9 : (arr_29 [i_0] [i_0] [i_0] [i_0])))))));
            var_38 = (min(var_38, ((min(((36865 << (((arr_4 [i_15]) - 72)))), var_0)))));
        }
        var_39 += (((var_0 ? (arr_6 [10] [i_0 - 3]) : (arr_22 [2] [i_0 + 1] [2] [i_0 + 1] [2] [i_0]))));
    }
    var_40 = (max((max((var_4 < var_0), (var_2 - var_9))), (((~(var_2 > var_1))))));
    #pragma endscop
}

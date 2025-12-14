/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 |= (arr_2 [i_0]);

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] = (((max(-21601, (arr_1 [i_2 - 3] [i_2 + 2])))));
                arr_9 [i_0] [i_1] [i_2] = ((!((min(((21608 ? var_2 : 21600)), (arr_2 [i_0]))))));
                arr_10 [i_2] [i_0] [i_0] = (((arr_4 [i_2 + 1] [i_1 + 2] [0]) ? (((arr_4 [i_2 - 1] [i_1 + 3] [2]) ? 1 : (arr_4 [i_2 - 3] [i_1 + 1] [i_1]))) : ((min((arr_4 [i_2 - 2] [i_1 + 1] [i_1]), (arr_4 [i_2 + 1] [i_1 - 1] [i_1]))))));
            }
            for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
            {
                var_14 = var_7;
                var_15 = var_4;
                var_16 = ((1140338018 - ((577685199 - (32 / -64)))));
                var_17 = ((251 / ((1 ? 1287475187 : 32764))));
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 8;i_4 += 1) /* same iter space */
            {
                arr_15 [i_4] [i_0] [i_0] = ((!6) ? var_9 : -55);

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_18 = (((((arr_4 [i_1] [i_4] [i_4]) ? (arr_14 [i_1]) : (arr_7 [i_0] [i_5]))) != (arr_1 [i_1] [i_1 - 1])));
                    var_19 = 127;
                }
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    var_20 = (min(var_20, (arr_19 [i_6] [0] [i_4] [0] [i_4])));
                    arr_20 [i_0] [i_6] [i_4] = var_12;
                }
                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    var_21 = (~197);
                    var_22 = 35044;
                    arr_23 [i_7] [i_1] = (((arr_22 [i_1 + 3] [i_4 + 2]) <= var_11));
                    var_23 = (((arr_11 [i_4 - 2] [i_1 + 2]) ? (arr_13 [i_0] [i_1] [i_4] [i_0]) : (arr_7 [i_1 + 2] [i_1 + 1])));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {

                    for (int i_9 = 3; i_9 < 7;i_9 += 1)
                    {
                        var_24 = (((((arr_1 [i_9 - 1] [i_4 - 1]) ? var_8 : var_4)) | 15604));
                        arr_29 [i_0] [i_1 - 1] [i_8] [i_8] [i_9] = var_6;
                        var_25 = (max(var_25, ((((2810939780925948960 != 51529) ? ((1 ? 24514 : var_4)) : 235)))));
                    }
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        var_26 = ((arr_19 [i_4 - 3] [i_8] [i_4] [i_8] [i_10]) ? (arr_7 [i_4 + 2] [i_1 + 1]) : (arr_19 [i_4 + 2] [i_8] [i_4] [i_8] [i_1 + 1]));
                        var_27 = (5 ? (arr_2 [i_0]) : (arr_2 [i_0]));
                        var_28 = ((!((var_1 == (arr_24 [i_1])))));
                    }
                    var_29 = 24514;
                    var_30 = (arr_13 [i_1 + 3] [i_4 + 2] [i_4 - 2] [i_4]);
                    arr_33 [i_8] [i_8] [i_4] [i_1] [i_0] [i_8] = (~16);
                }
            }
            var_31 = (!var_11);
        }
        var_32 *= ((!((((var_8 == (arr_21 [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_33 = 4054580951;
    #pragma endscop
}

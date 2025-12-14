/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min(var_1, ((-(min(var_2, var_2))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = ((!(((+(((((arr_0 [1]) + 2147483647)) << (((arr_1 [i_0] [i_0]) - 29731)))))))));
        var_13 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 = (max(2665279453, (((var_6 ? 12 : 244)))));
        arr_5 [i_1] |= ((((min(225, 3720218030))) ? (((~(arr_3 [i_1])))) : (arr_3 [i_1])));

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_15 = 225;
                var_16 += var_8;
                arr_11 [i_1] [i_2] [i_3] = (max((arr_6 [i_2] [i_2 + 1] [i_2 - 1]), var_9));
            }
            var_17 = (arr_8 [i_1] [i_2] [i_1]);
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_18 = var_5;
                var_19 += (arr_12 [i_1]);
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_20 = (arr_8 [i_1] [i_1] [1]);
                var_21 = ((((max((arr_6 [i_1] [i_4] [i_1]), (arr_12 [i_4])))) ? (min(-8161606034086693944, -20157)) : (~32767)));
                arr_20 [i_1] [i_6] [i_6] = (~224);
                var_22 = (((max((!-1152921504606846976), ((var_4 ? (arr_18 [i_1] [i_1] [i_1] [i_1]) : (arr_19 [i_1]))))) >> var_5));
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_24 [i_7] = max((((((min(var_1, var_4))) < ((~(arr_12 [i_7])))))), (max(((var_8 ? (arr_14 [i_1]) : var_5)), var_1)));
                arr_25 [i_1] [i_4] [i_7] = (((((var_2 / (arr_13 [i_4])) * (max((arr_12 [i_1]), var_2))))));
                var_23 = var_10;
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_28 [i_1] [i_1] [i_1] [i_1] = (((max((min((arr_13 [i_1]), (arr_16 [i_1] [i_1]))), 215)) / (arr_7 [i_1] [i_1] [i_1])));
                var_24 = ((((min((max(var_9, 44317)), (((41 >> (221 - 211))))))) ? (((arr_16 [10] [i_8]) ? ((-20 ? 2982 : -8161606034086693944)) : (24885 >= 16711680))) : var_7));
            }
            var_25 = ((min((min((arr_6 [i_1] [i_4] [3]), (arr_4 [i_1]))), (!var_0))));
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_26 = (arr_23 [i_9] [i_9] [i_9] [i_9]);
        var_27 = var_4;
    }
    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
    {
        var_28 = (-((~(12 ^ 2222691167))));
        var_29 = (((((((~(arr_9 [i_10] [i_10] [i_10] [i_10])))) ? ((~(arr_7 [i_10] [i_10] [7]))) : (min((arr_16 [i_10] [i_10]), var_1)))) >= var_0));
    }
    #pragma endscop
}

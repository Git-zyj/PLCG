/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 = (((arr_0 [i_0] [i_1]) & (arr_0 [i_1] [i_1])));
            arr_6 [i_0] [i_0] = (arr_2 [i_1]);
            var_16 = (min(var_16, (((17 ? 4294967278 : 0)))));
            var_17 = (max(var_17, (((!(((var_7 ? (arr_2 [i_0]) : (arr_5 [i_0] [i_0] [i_0])))))))));
            var_18 = (((arr_4 [i_1] [i_1] [19]) ? (arr_1 [i_0]) : var_8));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = var_2;
            arr_10 [i_2] [i_2 + 1] = -9411;
        }
        for (int i_3 = 2; i_3 < 16;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
            {
                arr_16 [i_0] [i_0] [i_4] [i_4] = (max((((arr_13 [i_0]) ^ (((arr_14 [i_0] [i_0]) ? (arr_7 [i_0] [i_0]) : 4294967291)))), ((min(((((arr_1 [i_0]) % (arr_0 [i_3] [i_3])))), (arr_12 [i_4 + 1] [i_4 + 1] [i_4]))))));

                for (int i_5 = 2; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_4] [1] [1] = ((1 ? var_5 : 1));
                    var_19 = (max(((((var_11 ? (arr_15 [i_5] [i_4 + 1] [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))), (arr_12 [15] [i_3] [i_0])));
                }
                for (int i_6 = 2; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    var_20 = 11321;

                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_21 = arr_18 [i_4] [1] [1] [1];
                        var_22 = (min(var_22, (((-((max(var_7, 95))))))));
                        var_23 = ((((~var_4) ? (arr_3 [12] [i_3] [i_4]) : (((~(arr_8 [i_0])))))));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [i_6 + 1] [i_4] [i_4] [i_4] [i_3] [i_4] [i_0] = ((((!((!(arr_20 [i_0])))))));
                        var_24 = (max(var_24, (((((!(arr_25 [i_3 - 1] [i_3] [i_3] [16] [i_3 + 1])))) % (arr_2 [i_3])))));
                        var_25 *= (arr_26 [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_26 = (min(var_26, 121));
                        var_27 = ((!(((0 ? 13853834721700221085 : (arr_28 [i_4]))))));
                        var_28 = (min(var_28, (!var_7)));
                    }
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_4] [i_6] [i_0] = ((~((var_7 ? (arr_18 [i_4] [i_3] [i_3] [i_6]) : (arr_25 [i_3 + 3] [i_4] [i_4] [i_6 - 1] [i_10])))));
                        var_29 = var_7;
                        arr_38 [i_0] [i_4] [i_4] [i_4] [i_6 - 1] [i_4] = (((var_0 ? (arr_12 [i_0] [i_3] [8]) : 1)));
                        var_30 &= (min((arr_17 [i_4] [i_3] [i_4] [i_6] [i_10 - 1]), ((-(arr_17 [7] [i_6] [i_4] [7] [7])))));
                    }
                }
            }
            for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
            {
                var_31 = var_2;
                var_32 = (max(var_32, (((var_8 ? (((((((!(arr_36 [i_0] [3])))) >= (((!(arr_7 [i_3 + 4] [i_3 + 4])))))))) : (((var_9 ^ (arr_33 [i_11] [i_3] [i_0] [i_0] [i_0])))))))));
            }
            arr_42 [i_0] [i_3 + 4] [1] = var_12;
        }
        arr_43 [i_0] [i_0] = ((((max((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_5))) ? (((~(-578614369 & 4294967295)))) : (((~-578614369) & ((~(arr_26 [i_0] [i_0])))))));
        var_33 = (127 % 53458);
    }
    #pragma endscop
}

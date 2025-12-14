/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = var_7;
                var_18 = ((((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_0])))) ? ((min(var_14, (arr_0 [i_0] [i_1])))) : ((var_2 ? (arr_0 [i_0] [i_0]) : (arr_4 [i_1])))));

                for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
                {
                    var_19 = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_20 = ((-4899078868219596186 >= (!-4899078868219596184)));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((var_0 > (((arr_5 [i_0] [i_0] [i_2] [i_0]) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_0)))))) % 7900036663531536165));
                                arr_15 [i_4] = (min((((arr_12 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_4]) + (arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))), ((((arr_11 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_4]) || var_12)))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] [i_4] = ((+((var_3 ? (arr_9 [i_3 - 1] [i_3 + 2] [i_3] [i_3]) : (arr_9 [i_3 + 3] [i_3 + 1] [i_3] [i_3 + 3])))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_21 = (arr_3 [i_6] [i_1]);
                        var_22 = (min(((max(41763, 458752))), (min((min(3640574154, 8881225504460297079)), 0))));
                    }

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        var_23 = 13672158283817294004;
                        var_24 = ((!(!var_15)));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_28 [i_0] [i_1] [i_5] [i_8] [i_5] = -13849;
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((0 ? ((((((arr_0 [i_0] [i_0]) ? var_1 : (arr_12 [i_0] [i_0] [i_1] [i_0] [i_1])))) ? var_8 : (arr_17 [i_8] [i_1]))) : ((min(((-807086461991650893 ? var_7 : (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((-(arr_20 [i_8] [i_1])))))))));
                        arr_30 [i_0] [i_1] [i_5] [i_8] = arr_18 [i_0] [i_5] [i_0] [i_5];
                    }
                    for (int i_9 = 2; i_9 < 24;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            var_25 = var_13;
                            var_26 = (arr_8 [i_9 - 2] [i_10 + 1] [i_5]);
                        }
                        for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_27 = (min((max(120, (arr_3 [i_0] [i_1]))), (arr_3 [i_0] [i_0])));
                            var_28 *= ((((((!127) ? ((((arr_6 [i_1]) || var_14))) : ((min(63921, var_11)))))) ? (arr_23 [i_0] [i_0] [i_0] [i_0]) : var_1));
                        }
                        var_29 = (arr_27 [i_0] [i_1] [i_1] [i_9]);
                        arr_39 [i_9] [i_9] [i_9] [i_9] = var_7;
                    }
                    var_30 = (min(var_13, ((((min(var_8, (arr_38 [i_0] [i_1] [i_1] [i_0] [i_5])))) ? (arr_10 [i_1]) : 0))));
                }
            }
        }
    }
    var_31 = var_12;
    var_32 = ((min(3921841164824258740, (4294967232 ^ 1874318742))));
    #pragma endscop
}

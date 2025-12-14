/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_2 ? ((494 ? (arr_1 [i_0]) : (arr_1 [i_0]))) : ((max((min(4095, (arr_1 [i_0]))), 255)))));
        var_14 = 23;
        var_15 = ((min(((-(arr_0 [i_0]))), (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_16 = (((~(arr_3 [i_1]))));
        var_17 = ((((((arr_4 [i_1] [i_1]) ? 4095 : ((min((arr_4 [i_1] [i_1]), (arr_4 [8] [8]))))))) <= var_0));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] [i_2] = (arr_6 [4]);
        var_18 = -32;
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = ((((1831444011 ? var_5 : var_12))));

        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_19 = (arr_15 [i_5 + 4] [i_5 - 3] [i_5 + 1] [i_5 + 1]);
                            arr_22 [i_3] [i_4] [i_4] [i_6] [i_7] = 1;
                            var_20 = -495;
                            arr_23 [i_3] [i_4] [i_5] [i_6] [i_3] [i_5 - 2] [i_5 + 2] = -57;
                        }
                    }
                }
                var_21 = 168;
                arr_24 [i_3] [15] [i_5] = ((-3223 ? (((arr_17 [i_4] [i_4] [i_5] [i_5 + 2] [i_5]) ? (arr_17 [i_4] [i_4] [i_4] [i_5 + 2] [i_5]) : (arr_17 [i_5] [i_5] [i_5] [i_5 + 2] [0]))) : -11893));
                arr_25 [i_5] [i_4] [i_3] = (((23 ? (min(var_1, 12309333880571364267)) : 1845)));
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                arr_29 [i_3] = (max((((15263 ? -11893 : 255))), (arr_26 [i_8] [i_3] [i_3] [i_3])));
                arr_30 [i_3] [i_3] = 11895;
                arr_31 [3] [3] [i_8] = (max((((min((arr_16 [i_8] [i_8] [i_3] [i_3]), var_0)))), (((max(50273, (arr_20 [i_8] [i_8] [i_8] [i_4] [i_3] [i_3]))) / (((-101 ? 494 : var_4)))))));
                arr_32 [i_3] [i_3] [i_3] = arr_15 [1] [1] [i_4] [i_3];
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_22 = 2147483647;
                            var_23 = ((~(max(-9, var_5))));
                            var_24 = (max((min(((-(arr_34 [i_3] [i_4] [i_4] [i_9] [i_10]))), ((1 << (11893 - 11890))))), (((!(((1 ? -477 : (arr_26 [i_3] [i_4] [i_8] [10])))))))));
                            var_25 = 3656328833;
                        }
                    }
                }
            }
            var_26 = var_9;
        }
    }
    #pragma endscop
}

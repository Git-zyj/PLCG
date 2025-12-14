/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 = (((arr_2 [i_0]) ? var_17 : 4026531840));

        for (int i_1 = 3; i_1 < 19;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_21 = (((arr_14 [i_2] [i_1 - 3] [i_1]) ? (arr_5 [i_0 - 2] [i_1] [8]) : ((((min((arr_9 [i_0]), 51744))) ? (arr_8 [i_0 - 2] [i_1]) : (arr_12 [i_1])))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((min(13812, 13792)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    {
                        var_22 = (((arr_4 [i_1] [i_1] [16]) ? ((((arr_8 [i_1] [i_1]) ? var_9 : (arr_11 [i_0] [i_0] [i_1] [i_6] [i_0])))) : (arr_2 [i_0 + 1])));
                        var_23 = (min(var_23, (arr_4 [i_0] [i_5] [i_0])));
                        var_24 = ((~(arr_14 [i_0 - 1] [i_1 - 1] [i_1 - 1])));

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_25 -= 33423360;
                            var_26 = (min(var_26, (31840 < 51744)));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_24 [i_1] [i_1] [i_5] [i_6] [i_8] = -10409963621103472242;
                            arr_25 [i_8] [i_6] [i_1] [i_0] [i_0] = (((((arr_8 [i_0 - 1] [i_1]) > (arr_2 [i_0 - 1]))) ? ((min((arr_8 [i_0 - 1] [i_1]), var_17))) : (arr_8 [i_0 - 1] [i_1])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 3; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_27 = (max(var_27, (((4294967291 ^ (arr_13 [i_9 - 2] [18] [i_0] [i_0] [i_0] [i_0 - 1]))))));
            arr_28 [i_0 - 2] [i_9] [i_9] = (arr_19 [i_9] [i_9] [i_9 - 2] [i_9] [i_9]);
        }
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                var_28 += ((52 ? 15 : (arr_7 [i_0] [i_0] [i_0] [i_0 - 1])));
                var_29 = (min(var_29, ((min(((min(var_17, (arr_22 [i_10 + 2] [i_10 - 1] [i_10 - 1])))), ((var_10 ? (arr_22 [i_10 + 3] [i_10 + 1] [i_10 + 3]) : (arr_22 [i_10 + 2] [i_10 + 1] [i_10 + 1]))))))));
                arr_33 [i_0] = (arr_6 [i_0 - 2] [i_0] [i_10]);
            }
            arr_34 [i_10 + 1] [i_0 + 1] [i_0] = (arr_23 [i_10 + 2] [i_0 - 1] [i_10 + 1] [i_0 + 1] [i_0 - 1]);
        }
        var_30 = ((!((((arr_21 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]) ? (arr_21 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1]) : (arr_21 [i_0] [i_0 - 1] [i_0 + 1] [i_0] [2] [i_0]))))));
    }
    for (int i_12 = 4; i_12 < 9;i_12 += 1)
    {
        arr_38 [i_12 - 2] = 10409963621103472242;
        var_31 += var_7;
    }
    var_32 += var_19;
    var_33 = var_19;
    var_34 = var_11;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((max((max(var_7, var_12)), var_11)));
    var_14 = (max(var_14, (max(var_12, ((((((var_1 ? var_4 : 6819))) == (max(var_5, var_10)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_1 [13] [0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
                            {
                                var_15 ^= ((!((min((arr_7 [12] [16] [i_4] [i_4] [12]), (arr_7 [i_0] [2] [i_4] [i_4] [i_0]))))));
                                var_16 = var_9;
                                var_17 ^= (arr_8 [10] [i_1] [18] [4] [i_3] [i_4]);
                                var_18 = (max(var_18, (((min((max((arr_8 [i_0] [i_0] [i_1 - 2] [12] [12] [i_4]), (arr_1 [i_2] [i_4]))), var_5)) << (((((((-(arr_2 [2])))) ? (arr_6 [i_4] [i_1 + 1]) : (max(-94, var_3)))) - 14895843595336926464))))));
                            }
                            for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
                            {
                                var_19 = (min(var_19, ((((((((arr_12 [8] [i_1] [8] [i_5] [2]) ? 14874695898708090633 : (arr_11 [i_0] [i_0] [i_0] [18] [i_0] [i_0] [3])))) ? (arr_12 [i_1] [i_1] [i_1 + 1] [i_5] [i_1 + 1]) : (arr_13 [4] [4] [i_5] [0] [4] [8] [8])))))));
                                var_20 -= min(65535, (arr_14 [14] [i_1] [i_1 + 1] [i_1]));
                                var_21 ^= ((!(arr_11 [i_0] [i_0] [i_1 - 3] [i_1 - 3] [11] [i_3] [i_5])));
                                var_22 = (((((arr_0 [i_1 - 2] [i_1 + 1]) - (arr_3 [i_1 + 1] [i_1 - 2]))) * ((var_11 - (arr_0 [i_1 - 1] [i_1 - 1])))));
                                var_23 |= (((arr_14 [16] [i_2] [16] [6]) ? (!var_6) : (min((((arr_2 [15]) ? (arr_13 [i_2] [8] [i_5] [i_3] [i_2] [2] [8]) : var_4)), var_11))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                            {
                                var_24 ^= ((!(arr_5 [i_1 + 1] [i_1 + 1])));
                                arr_17 [i_0] [8] [i_2] [11] [i_1] = var_12;
                            }

                            for (int i_7 = 0; i_7 < 19;i_7 += 1)
                            {
                                arr_20 [i_3] [i_1] = -1;
                                var_25 -= 39577;
                            }
                            var_26 = (((((min(var_12, -1))) ? 9121 : var_12)));
                        }
                    }
                }
                arr_21 [8] [8] &= (min((arr_13 [i_0] [4] [12] [i_0] [i_1 - 3] [0] [i_0]), (((((var_11 ? 17054176336256119295 : 47816))) ? (max(var_3, (arr_12 [i_0] [i_1 - 1] [i_1 - 1] [4] [2]))) : -5638))));
            }
        }
    }
    var_27 -= var_5;
    var_28 = ((min((max(var_12, var_3)), ((max(15094, 64))))));
    #pragma endscop
}

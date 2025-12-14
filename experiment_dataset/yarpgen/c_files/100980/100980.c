/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max(((var_9 ? var_6 : -265643564)), (var_10 + var_5))), 7814));

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        arr_3 [3] &= (((((~((var_3 + (arr_1 [i_0 - 3])))))) ? (arr_2 [i_0]) : (((var_4 ? ((-(arr_1 [i_0]))) : var_8)))));
        var_19 = (((min((arr_0 [i_0 - 1] [i_0 - 2]), var_14)) >> (((var_6 >= ((68 ? -54 : var_6)))))));
        var_20 = (max(var_20, (((((max((var_9 && var_4), var_10))) ? (arr_1 [i_0 - 3]) : (arr_2 [i_0 - 3]))))));
        var_21 = (((min(((var_12 - (arr_2 [i_0]))), (((2319071239 >> (6325190993881946653 - 6325190993881946652)))))) << ((((var_5 ? (arr_2 [i_0 - 2]) : var_2)) - 7120383624825531461))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_1] [i_3] [i_2] [i_3] [i_3] [i_2] = var_8;
                            var_22 = -708648357;
                        }
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            var_23 = (((arr_5 [i_6] [i_2]) ? (arr_22 [19] [i_4] [i_2] [i_2] [i_1]) : (arr_17 [i_2] [i_3] [i_3] [i_4] [i_6 - 1])));
                            var_24 = var_1;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_25 = (min(var_25, (40760 & var_10)));
                            arr_26 [i_2] [i_2] [i_7] = ((var_10 >> (var_6 - 13712619826163704199)));
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = var_7;
                            var_26 = ((8191 >> (2044979371 - 2044979368)));
                        }
                        var_27 = (((((var_12 << (var_8 + 68)))) == var_17));
                    }
                }
            }
        }
        var_28 = (((var_0 / -708648364) / (12121553079827604963 >> var_4)));
        arr_28 [i_1] [i_1] = 265643564;
        arr_29 [i_1] = ((var_12 ? var_16 : (arr_22 [i_1] [1] [i_1] [i_1] [i_1])));
    }
    var_29 = (((((!var_17) ? (~var_5) : ((var_10 ? 15899 : var_6)))) << (((var_10 * var_5) - 2252030135))));
    #pragma endscop
}

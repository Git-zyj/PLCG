/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [5] [i_0]) != 11020451197743735379));
        var_11 = (max(var_11, ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_1)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_12 = (min(var_12, (((((((((arr_8 [i_1] [3] [3]) - var_5))) ? (arr_4 [i_4]) : -var_5)) | var_5)))));
                        arr_17 [i_1] [i_1] [7] [i_4] = (~-45572);
                        arr_18 [i_1] = (arr_11 [i_3] [i_3] [i_3]);
                        arr_19 [17] [i_1] [i_1] [i_2] [i_1] [i_4] = (-(((arr_5 [i_2 - 2]) ? var_8 : (arr_4 [i_2 + 1]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        var_13 = ((125 ? (arr_13 [14] [i_2 + 2] [14] [i_3]) : (arr_14 [i_2 - 3] [i_5 + 2] [i_5])));
                        arr_22 [11] [i_1] [1] [9] [i_5 + 2] = (((arr_20 [i_1] [i_1] [12] [7]) ? (arr_20 [i_1] [i_2 - 3] [17] [i_5 + 1]) : var_1));
                        arr_23 [i_1] [12] [i_3] [i_1] [i_5 - 1] = (arr_4 [i_3]);
                        var_14 = (max(var_14, 8647853044376193009));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        var_15 = (!8592586183966701785);
                        var_16 *= ((~(var_4 / var_3)));
                        var_17 = (min(var_17, (arr_13 [i_2 - 2] [i_2 + 1] [i_1] [i_2 + 1])));
                        var_18 = (~16885190004709345632);
                        var_19 = 51601;
                    }
                    var_20 = (min(var_20, (min((min((arr_14 [i_1] [6] [i_2 - 2]), ((1561554069000205996 ? (arr_21 [14] [14]) : 1717419300)))), ((-(arr_9 [18] [0] [0])))))));
                }
            }
        }
        var_21 = (max(var_21, ((min((((arr_6 [8]) ? (((arr_14 [16] [16] [i_1]) ? 46737 : (arr_13 [i_1] [i_1] [i_1] [i_1]))) : (arr_8 [i_1] [i_1] [i_1]))), var_5)))));
    }
    var_22 = (max(var_22, (((1765994680 ? 46 : 12989361012804048174)))));
    #pragma endscop
}

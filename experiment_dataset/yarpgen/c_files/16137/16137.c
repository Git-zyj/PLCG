/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [i_2] [8] [i_0] [i_1] = ((!(arr_7 [1] [i_0] [i_1] [i_2 + 1])));
                    arr_10 [i_0] [i_2] [i_0] [i_0] = -74;
                }
            }
        }
        arr_11 [1] [1] = (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : 0));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_14 [11] [i_3] = ((((((min((arr_13 [1]), 4294967295))) && ((min(var_3, (arr_13 [i_3])))))) ? (arr_13 [i_3]) : (~var_8)));
        var_15 = (max((arr_13 [i_3]), (arr_13 [i_3])));
        arr_15 [i_3] = (min(var_9, var_4));
        arr_16 [i_3] = (((((-(arr_12 [i_3])))) <= ((-var_14 / (((1546793581 ? var_7 : (arr_12 [i_3]))))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_27 [i_3] = (((arr_18 [i_3]) ? (((min((arr_18 [i_6]), (arr_17 [i_3] [i_3]))))) : (min((arr_25 [i_3] [i_3] [i_4]), var_4))));
                        var_16 = (((max(var_8, var_9)) + (~var_2)));
                        var_17 = ((-((var_11 ? (199 == var_14) : (max((arr_25 [i_3] [i_4] [i_5]), (arr_12 [i_3])))))));
                        arr_28 [i_3] [i_5] [i_4] [i_3] [i_3] = (max((arr_20 [i_6] [i_3]), ((77 >> (((arr_22 [i_3] [i_3]) + 31788))))));
                        var_18 = ((((((((arr_22 [i_6] [i_3]) ^ 0))) ? (((-5295 ? (arr_19 [i_3] [i_3] [i_3]) : 4294967295))) : (arr_23 [i_3]))) < (((((((arr_25 [i_3] [i_4] [i_4]) || (arr_26 [i_3] [i_4] [i_4] [i_4] [i_4] [i_6])))) << ((var_11 ? 1 : 1)))))));
                    }
                }
            }
        }
    }
    var_19 = var_2;
    #pragma endscop
}

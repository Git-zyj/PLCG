/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~(min((27055 >= var_5), (max(var_0, 140720308486144))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = (arr_4 [i_0] [i_1] [i_0]);
                    var_16 = (min(var_16, var_10));
                    var_17 = ((-(arr_1 [i_0] [i_0])));
                    var_18 = (!8631935705493892372);
                }
            }
        }
        arr_8 [i_0] [i_0] = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (((arr_10 [i_3]) ? (arr_10 [i_3]) : (~66)));
        var_19 += ((!(arr_9 [i_3])));
        var_20 = (min(var_20, (arr_9 [i_3])));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = (max(16443794415442415142, 16443794415442415142));
        arr_16 [i_4] [19] = ((((~(arr_12 [i_4] [i_4]))) | ((~(arr_12 [i_4] [i_4])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_21 |= ((((((min(var_0, (arr_10 [16])))) ? (arr_12 [2] [i_6]) : (arr_14 [i_4]))) << (10389419273881151799 - 34)));
                    arr_22 [i_4] [i_5] [i_6] = var_6;
                    arr_23 [i_6] [i_5] [i_4] = (arr_10 [i_5]);
                    arr_24 [i_4] = ((+(((var_0 & 137405399040) & (0 ^ var_5)))));
                }
            }
        }
        arr_25 [i_4] |= (arr_17 [i_4] [i_4]);
        var_22 = (8589934591 + 1576586656);
    }
    #pragma endscop
}

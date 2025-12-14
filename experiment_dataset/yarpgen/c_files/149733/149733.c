/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (!992535113);

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_20 &= ((+(((~-1425849286) ? ((max((arr_3 [i_1]), 52932))) : (arr_3 [i_0])))));
            arr_7 [i_0] [i_0] [i_0] = (((((-7586595177559943557 ? 2205001549156603824 : 2205001549156603824))) ? ((((arr_6 [i_0] [i_0] [i_1]) || var_4))) : (7586595177559943571 && 2205001549156603830)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_21 -= ((1 >> (24492 - 24475)));
            arr_10 [i_0] [i_0] &= (((arr_0 [i_0] [i_2]) ^ (arr_2 [i_2] [i_0])));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_22 ^= ((((~(arr_8 [i_2] [i_3]))) < (arr_12 [i_0])));
                var_23 += 4452;
            }
        }
    }

    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_24 = (max(var_24, (((~((29110 * ((((arr_12 [i_4 + 1]) > (arr_12 [i_4])))))))))));

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_18 [i_4 + 2] [i_5] = (arr_13 [i_5] [i_5]);
            arr_19 [i_4] [i_5] = (((!var_5) * ((8415111207051132174 ? 1209387302 : 61440))));
        }
        var_25 = ((~((var_8 ? 7586595177559943559 : (arr_6 [i_4] [i_4 + 2] [i_4 + 2])))));
        var_26 = (min(((var_18 ? -6036280690035073096 : (min(-2205001549156603824, var_14)))), (((var_15 ? (((arr_17 [i_4] [i_4] [i_4]) / var_9)) : (arr_0 [i_4 + 2] [i_4 + 3]))))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        arr_24 [i_6] = (((((1 ? 7748849122449419820 : 37))) ? ((((arr_9 [i_6] [i_6] [i_6]) >= (arr_9 [i_6] [i_6] [i_6])))) : (((arr_9 [i_6] [i_6] [i_6]) ? (arr_9 [i_6] [i_6] [i_6]) : var_1))));
        arr_25 [i_6] = -7586595177559943564;
    }
    var_27 = var_17;

    /* vectorizable */
    for (int i_7 = 1; i_7 < 10;i_7 += 1)
    {
        var_28 = (((arr_8 [i_7 + 1] [i_7 - 1]) ? (arr_4 [i_7 - 1] [i_7 + 3]) : (((arr_20 [i_7 + 1]) + (arr_21 [i_7] [i_7 + 3])))));
        var_29 -= (((((arr_8 [i_7] [i_7 + 3]) + 2147483647)) << (((arr_27 [i_7]) - 45301))));
        arr_28 [i_7 + 2] = var_13;
    }
    var_30 = ((!(((((var_15 ? 1 : 10746))) >= var_7))));
    #pragma endscop
}

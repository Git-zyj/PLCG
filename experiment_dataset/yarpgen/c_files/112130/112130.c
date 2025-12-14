/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((-(((arr_4 [i_0] [3]) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_1] [i_1])))));
                arr_6 [i_0] [i_0] [i_0] = ((!((max((arr_3 [i_0]), ((max(var_9, 1))))))));
            }
        }
    }
    var_14 = (max(var_14, (max(((-(!var_10))), var_7))));

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_11 [i_2] = (((arr_7 [i_2] [i_2]) ? ((max((arr_9 [19] [i_2]), var_1))) : ((~(arr_9 [i_2] [i_2])))));
        arr_12 [i_2] = ((!((max(1738, (arr_7 [i_2] [i_2]))))));
        arr_13 [i_2] = (arr_8 [i_2] [i_2]);
        var_15 = (min(var_15, var_4));
        var_16 = (((var_0 & var_3) ? (~var_8) : (1 + var_3)));
    }
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        arr_16 [i_3] [i_3 + 1] = ((((((max(-1073741824, 44344)) == ((48575 | (arr_8 [i_3] [1])))))) << (24168 - 24153)));
        arr_17 [i_3] = 16960;
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
    {
        arr_21 [i_4] [i_4] = ((((arr_19 [i_4]) || (arr_20 [i_4] [i_4]))));

        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            arr_26 [i_5] = (var_2 ? 0 : (((!((max(14101484386535415614, var_2)))))));

            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                var_17 = (max(var_17, 0));
                var_18 *= (((~(-18332 / 16))));
            }
        }
        var_19 -= ((arr_8 [i_4 + 3] [i_4]) ? (arr_22 [i_4] [i_4] [11]) : 0);
        var_20 = (min(var_20, ((-(max(var_12, (!38416)))))));
        arr_30 [i_4] = (((arr_25 [5] [i_4] [i_4 - 1]) % (arr_15 [i_4] [i_4])));
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1) /* same iter space */
    {
        arr_34 [i_7 + 2] = (min(((-(arr_24 [i_7 + 3] [6] [i_7]))), ((-(arr_23 [i_7 + 1])))));
        var_21 = var_2;
    }
    #pragma endscop
}

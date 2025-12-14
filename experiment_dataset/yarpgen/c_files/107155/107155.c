/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_0 - 1] [i_0] [i_2] = (~(var_8 / var_2));
                    arr_11 [i_0] [i_0] [1] |= 6;
                }
                for (int i_3 = 1; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    var_19 = (max((arr_13 [i_1] [i_1] [i_0] [i_3]), (~65535)));
                    arr_14 [i_0] [i_1] [i_1] [i_3] = (arr_4 [i_0] [i_1]);
                    var_20 = ((!((((~885254268806768249) ? var_0 : ((~(arr_12 [i_3] [i_3] [i_3] [3]))))))));
                    arr_15 [i_0 + 1] [i_3] [i_3] = 5347;
                    var_21 = var_11;
                }
                for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                {
                    var_22 = -var_2;
                    arr_19 [i_0] = ((!((((arr_7 [i_4] [i_1] [i_0]) ? -var_17 : (arr_1 [i_0]))))));
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    var_23 = (max(var_23, var_18));
                    arr_22 [i_0] [1] [i_1] [i_5 + 1] = 18446744073709486080;
                    var_24 ^= ((~(max(65536, ((max((arr_16 [i_0 - 1] [i_1] [i_0 - 2] [i_5 + 1]), 190)))))));
                    var_25 = (max(var_25, -87));
                }
                var_26 = (arr_9 [i_0] [0] [i_0] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                arr_28 [i_6] [i_7] = (min((arr_25 [i_6] [i_7]), var_13));
                arr_29 [i_6] = (arr_24 [i_6]);
            }
        }
    }
    var_27 = (18446744073709486065 - -5573774130107800585);

    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        var_28 = (max((min(18446744073709486080, 1274010038400023227)), 18446744073709486080));
        var_29 ^= ((((max((max(var_13, -1414795632)), (~15497)))) != ((-(arr_30 [i_8])))));
        var_30 = (max(var_30, (arr_30 [2])));
    }
    #pragma endscop
}

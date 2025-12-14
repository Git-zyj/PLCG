/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [1] [i_0] = (min(-106, (119 <= 12002684514530426898)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [4] [i_0] [i_3] &= ((((((-1574222713 && (arr_11 [i_0] [0] [i_2] [i_3] [10]))) ? (max(-106, (-9223372036854775807 - 1))) : (((var_3 ? 4294967295 : (arr_1 [i_0])))))) < 1485498073));
                            var_14 = (((arr_3 [i_0] [i_0]) ? (min(132, (arr_6 [i_3] [i_1]))) : 1));
                        }
                    }
                }
                var_15 ^= ((-1 < ((1 / (arr_11 [10] [10] [10] [i_0] [9])))));
            }
        }
    }

    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        arr_19 [i_4] = ((1052185357 ? ((((!1) >= (arr_17 [3])))) : (arr_18 [i_4 + 2])));
        var_16 = (-106 ? 2766563026 : 1528404287);
        arr_20 [6] = ((((-(arr_16 [i_4 + 3]))) * ((((arr_17 [i_4 + 1]) >= (arr_15 [i_4 + 2]))))));
        arr_21 [i_4] [i_4 - 1] = ((arr_18 [i_4 + 3]) ? (((arr_18 [i_4 + 2]) % (arr_18 [i_4 + 2]))) : ((((arr_18 [i_4 + 3]) && 1751466861))));
        arr_22 [10] = (!1052185357);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (arr_24 [12])));
        var_18 *= (((arr_24 [i_5]) / (arr_23 [i_5] [i_5])));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_19 = (arr_25 [11]);
        var_20 = 1052185357;
        var_21 = ((min(1894158057754728689, (arr_27 [i_6] [i_6]))));
        var_22 = (min(var_22, (arr_26 [i_6])));
        arr_29 [8] = (!((((arr_23 [i_6] [i_6]) ? var_5 : (arr_23 [i_6] [i_6])))));
    }
    #pragma endscop
}

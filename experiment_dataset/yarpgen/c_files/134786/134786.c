/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 1;
    var_14 += ((-((((((1 ? var_10 : 134152192))) && var_4)))));
    var_15 = (min(var_15, ((min(var_12, (min(var_5, -var_0)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] = arr_1 [i_1 - 1];
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = arr_1 [i_1];
                        arr_12 [i_0] [i_0] [7] = -18446744073709551615;
                        arr_13 [i_0] [1] = (((arr_0 [i_1 + 2] [i_1 + 1]) ? (arr_2 [i_1 - 1]) : (arr_7 [i_1 - 1])));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_16 [i_0] = (min(18446744073709551610, ((((arr_14 [i_0] [i_0] [i_4]) ? (arr_14 [16] [i_4] [i_0]) : 1)))));
            var_17 = (((((min((arr_11 [i_0] [4] [i_0] [i_0]), 7325129083338983491)) >> (((((arr_1 [i_0]) + var_9)) - 4137113486478172734)))) ^ (((((arr_15 [i_0] [i_4]) != (arr_4 [i_0])))))));
        }
        var_18 -= 18446744073709551598;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 15;i_7 += 1)
                {
                    {
                        var_19 = (((-529 ? 736 : 134152212)));
                        var_20 ^= var_8;
                        arr_25 [i_0] [9] [i_0] [9] [i_5] [i_0] = ((-(min((arr_7 [i_7 + 2]), -134152199))));
                    }
                }
            }
        }
        var_21 ^= (min((((arr_23 [i_0] [i_0]) ? ((7729547783333556940 ? 134152197 : 14483933784257928945)) : ((min((arr_3 [i_0] [i_0] [i_0]), (arr_20 [i_0] [12] [6])))))), (arr_20 [i_0] [i_0] [i_0])));
        var_22 &= (((var_5 != (min((arr_0 [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_0]))))));
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_23 = (max(var_23, ((((min((arr_10 [i_8] [i_8]), -160911449)) != ((((arr_10 [i_8] [i_8]) ? 3904830698744460737 : var_5))))))));
        arr_28 [i_8] [i_8] = 8243766221563069543;
        var_24 *= (((~(arr_6 [i_8]))));
    }
    #pragma endscop
}

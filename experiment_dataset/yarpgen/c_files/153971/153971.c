/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 ^= ((var_13 | ((((max(var_1, var_1))) ? (~48) : -382131378))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_15 = var_3;
            var_16 &= ((~((-2677 ? (-80 + 382131351) : (((-9223372036854775807 - 1) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_3 [i_0] [i_1] [i_1])))))));
            var_17 ^= (~-382131383);
            arr_5 [i_0] [18] [i_1] = ((!((var_8 || (((-382131378 ? var_2 : 7499756237546871189)))))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [i_2] = ((arr_0 [i_2] [i_0]) ? (((((arr_6 [i_0] [i_2] [i_2]) == (((arr_3 [i_0] [i_0] [i_2]) ? 44034 : 18446744073709551610)))))) : (((((60 ? var_0 : 58681))) & ((1962723089241992268 | (arr_1 [i_2]))))));
            var_18 *= ((var_11 ? (((((min(var_8, (arr_8 [20])))) ? ((~(arr_3 [i_0] [i_0] [i_2]))) : 0))) : ((var_10 ? 4830188080445195143 : (arr_7 [i_0] [i_0])))));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
        {
            var_19 += (min(var_3, (arr_11 [15] [i_0])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 20;i_5 += 1)
                {
                    {
                        var_20 = (max(var_20, ((min(((((((arr_3 [i_3] [1] [10]) | -382131385))) ? ((1 | (arr_1 [i_4]))) : (((~(arr_18 [i_5] [i_4] [i_3] [i_0])))))), var_7)))));
                        var_21 ^= (((((((-19404 ? 0 : (arr_15 [1] [14] [i_4] [i_5] [i_3] [i_4]))) ^ ((max(-118, 127)))))) ? (min(18446744073709551610, -2272090728676958855)) : ((((((~(arr_7 [8] [i_4])))) - (arr_13 [i_0] [i_5 + 1] [i_5] [i_5 - 1]))))));
                    }
                }
            }
            var_22 = (min(var_22, var_4));
        }
    }
    var_23 ^= 1;
    #pragma endscop
}

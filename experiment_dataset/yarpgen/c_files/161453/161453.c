/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 = ((~(1289510164003664038 ^ 9223372036854775807)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = (max(var_16, ((((arr_2 [i_0 + 1] [i_0]) ? (arr_2 [i_0 + 1] [i_0]) : (arr_2 [i_0 + 1] [i_0]))))));
        var_17 = 1;
        var_18 = ((((((arr_3 [18]) + (arr_3 [i_0])))) ? (arr_0 [i_0] [i_0]) : ((((arr_0 [i_0] [6]) >= (arr_1 [i_0 + 1]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_19 = (arr_4 [9] [9]);
        var_20 = (((((((((arr_6 [18]) / (arr_6 [i_1])))) <= (arr_5 [i_1])))) ^ (arr_6 [4])));
        var_21 = (arr_6 [i_1]);
        var_22 = ((((arr_6 [i_1]) ^ (arr_4 [1] [i_1]))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_23 = ((((((arr_5 [i_2]) ? (((arr_0 [i_2] [19]) + (arr_7 [i_2] [i_2]))) : -7))) ? ((((-(arr_2 [i_2] [i_2]))) ^ 0)) : (((arr_4 [i_2] [i_2]) * 8386560))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_24 = (arr_5 [i_2]);

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_25 = (((((~(arr_2 [15] [15]))) & (arr_1 [i_3]))));
                            arr_19 [i_2] [i_3] [i_3] |= (((arr_5 [i_3]) && (arr_3 [i_4])));
                        }
                        var_26 = (((arr_14 [i_2] [i_2] [i_4]) ? (arr_5 [i_2]) : (arr_5 [i_2])));
                    }
                }
            }
        }
        var_27 = ((arr_5 [i_2]) >= (arr_5 [i_2]));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            arr_12 [i_0] [i_2] [i_2] [i_3] [i_4] = -var_0;
                            var_11 = (min(var_11, (arr_0 [i_4 - 1] [i_0 - 1])));
                            arr_13 [i_0 + 1] [i_2] [i_4] = var_5;
                            arr_14 [i_2] [i_2] = var_10;
                        }
                        arr_15 [i_2] [3] [i_2] [3] [i_2] = ((!(((max(-27346, (arr_8 [i_2])))))));
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_12 ^= max((min((max(7255389662389197813, var_3)), 7255389662389197834)), (((!((min(914488653, var_6)))))));
                            arr_20 [i_2] [i_2] = max(((-(((arr_4 [i_0] [14]) ? 9198324849368440190 : (arr_19 [i_0] [i_0] [17]))))), (max((arr_17 [i_1] [i_2] [i_1] [i_5]), (((var_7 ? (arr_4 [i_5] [i_5]) : (arr_18 [i_2] [i_2] [15] [15] [15])))))));
                            var_13 = ((((~(max(var_3, var_0))))) ? (arr_4 [i_6] [i_1]) : (min(var_6, ((74 ? var_5 : var_9)))));
                            var_14 = ((~(arr_16 [i_0 + 1] [i_1] [i_1] [i_1 - 2])));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_0 + 1] [i_2] [i_0] = -165513199;
                            var_15 = (max(var_15, var_4));
                        }
                        var_16 = (~var_3);
                    }
                    arr_24 [i_2] [i_1 + 1] [i_1 + 1] [i_2] = (-((((min(7255389662389197820, 33553408))) ? 914488653 : (max(0, 288230374004228096)))));

                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        arr_27 [i_0] [i_2] [4] [i_8] = (min(-var_10, (min((((arr_10 [2] [2] [i_2] [i_2] [i_2] [i_1 - 1]) ? var_1 : (arr_18 [i_2] [i_2] [i_2] [i_2] [i_8]))), 1558916078))));
                        var_17 = ((max(var_7, -4555814427934661525)));
                    }
                }
            }
        }
    }
    var_18 = 14675;
    #pragma endscop
}

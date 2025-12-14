/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = ((-84 ? (arr_0 [i_0 + 3] [i_0 + 1]) : (arr_0 [i_0] [i_0 + 3])));
        var_16 = (((arr_1 [i_0]) >> 511));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = 356796297;
                            arr_14 [i_0] [i_3] [i_2] [i_0] [i_4] = ((-(arr_1 [i_0])));
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            var_17 = (min(var_17, (((arr_7 [i_0 + 1]) ? (((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_11 [0] [0] [i_2] [i_3]) : (arr_10 [i_2]))) : (arr_12 [i_0] [i_1] [i_2] [i_5 + 3])))));
                            arr_17 [i_0 + 2] [i_0] [i_0] = 72;
                            var_18 = (max(var_18, (((((((var_12 | (arr_8 [i_0] [10] [10] [17]))) + 2147483647)) >> (-84 + 100))))));
                            var_19 = (max(var_19, (arr_16 [i_0 - 2] [i_0 - 2] [i_5] [i_0 - 2] [i_5 + 2])));
                        }
                        var_20 = (max(var_20, ((((arr_5 [i_0 - 1]) ? 8380416 : (((150180109 ? -27 : (arr_10 [i_3])))))))));
                    }
                }
            }
        }
        var_21 = 44699;
    }
    var_22 = (max(var_22, var_14));
    #pragma endscop
}

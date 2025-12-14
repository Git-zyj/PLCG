/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (1 ? 1554717671 : 1397230616);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = (min(var_14, (((+((var_11 ? (arr_9 [i_0] [i_4] [i_0] [i_4]) : ((1685200507 << (-77 + 103))))))))));
                                var_15 = (+-208);
                                arr_16 [i_0] [i_3] [i_3] = (max((arr_3 [i_0]), (arr_3 [2])));
                                var_16 = (arr_9 [i_0] [i_1] [i_1] [i_4]);
                            }
                        }
                    }
                    arr_17 [i_2] [i_1] = (arr_6 [i_0]);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_17 = (arr_19 [i_5]);
        var_18 = var_12;
        var_19 += 16;
    }
    var_20 = (min(var_20, ((((((max(3124, 25063)))) ? var_0 : var_3)))));

    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_21 = -4071996682;
                        var_22 = (arr_25 [7] [7] [i_9]);
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 13;i_10 += 1)
        {
            var_23 = (min(var_23, ((((((~(max(0, (arr_30 [i_6] [i_10] [10])))))) ? (min((min((arr_21 [i_10] [i_6]), var_7)), (((20 ? var_11 : 2740249639))))) : ((max((max(var_2, (arr_28 [1]))), (arr_2 [i_6] [i_10])))))))));
            var_24 = (min(var_24, (((((min(var_12, (var_0 + var_5)))) ? (((min((arr_2 [i_6] [i_6]), (var_3 || var_10))))) : (~0))))));
            var_25 = (!4899253066315985342);
        }
    }
    #pragma endscop
}

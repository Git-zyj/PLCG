/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            var_12 = ((((-(arr_0 [i_0] [18]))) ^ ((min(var_10, 35131)))));
                            var_13 = (max(var_13, (((((((((-(arr_2 [i_0] [5])))) ? (max(-697808028755734628, -697808028755734627)) : (30404 ^ var_3)))) ? (arr_1 [i_1 + 1]) : ((((!(1 ^ var_0))))))))));
                            var_14 = var_8;
                        }
                        var_15 = (min(var_15, (((-((-1 ? ((max(var_9, var_7))) : (26 * -2))))))));
                        arr_12 [i_0 + 1] [i_0] [17] [10] = 35131;
                        var_16 = (min(var_16, (55 > 7495)));
                    }
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_21 [i_0] [i_5] [i_2] [i_2] [3] [i_0] = (((((((var_2 ^ (-2147483647 - 1)))) ? 4047535771652663001 : (arr_0 [i_5 + 1] [i_1 - 1]))) & -30404));
                            arr_22 [20] [13] [i_0] [i_5] [i_1] = -564227409639301550;
                            var_17 = (max(var_0, (min((var_7 & var_8), (arr_14 [i_5])))));
                            var_18 = (max(var_18, ((((((-(arr_10 [i_0 + 1] [2] [10] [i_5] [i_6])))) ^ (arr_20 [i_0] [i_0] [19] [i_0] [1] [i_0] [i_0]))))));
                            var_19 = ((!(arr_15 [i_6] [i_0] [i_0] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_20 = ((-(max(var_5, (arr_19 [i_7] [15] [i_7] [i_2] [13] [i_0 + 1] [i_0])))));
                            var_21 = (max(var_21, ((max((((arr_3 [i_1]) ^ (arr_3 [i_1]))), ((((arr_5 [i_1] [i_1 - 2] [i_7]) <= ((-697808028755734627 ? 25 : (arr_6 [i_1 - 1] [i_2] [16] [i_7])))))))))));
                        }
                        var_22 = ((((min((arr_9 [i_0 - 1] [i_5 + 1] [i_5] [i_0] [i_5 - 1] [i_5]), (arr_18 [i_5 - 2] [i_1 - 1] [i_1 - 2] [0] [i_0 + 1])))) ? ((((arr_18 [i_5 - 1] [i_1 + 1] [i_1 - 2] [i_0] [i_0 + 1]) >= (arr_18 [i_5 + 1] [i_1 + 1] [i_1 + 1] [i_0 - 1] [i_0 - 1])))) : ((-(arr_18 [i_5 + 1] [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0 + 1])))));
                        var_23 = (4294967295 ^ 0);
                    }
                    var_24 |= var_9;
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_18 = (((~19819) ? (arr_3 [i_1] [i_1]) : ((((arr_3 [i_0] [i_1]) ? (arr_0 [i_0]) : var_1)))));
            var_19 = (((arr_4 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_1])));
            var_20 = ((((((arr_2 [i_1] [i_1]) & (arr_2 [i_0] [i_0])))) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1])));
        }
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            arr_8 [i_0] [8] = (((arr_6 [i_2] [i_2]) != (arr_6 [i_0] [5])));
            var_21 = ((var_3 >= (arr_2 [i_0] [6])));
            var_22 = (49504 % 8420);
            arr_9 [i_0] [i_2] = ((!(arr_6 [i_2] [i_2 - 1])));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_23 = ((!(arr_13 [i_4] [i_4] [i_6 - 2] [23])));
                            arr_19 [i_4] = ((var_10 >> (((arr_15 [i_0] [i_5] [i_4 + 1]) + 3932963563811865083))));
                            var_24 = var_15;
                        }
                    }
                }
            }
            arr_20 [i_0] [2] [2] = (((arr_10 [i_0] [i_3] [i_3]) || (-2147483647 - 1)));
        }
        for (int i_7 = 3; i_7 < 22;i_7 += 1)
        {
            arr_24 [i_0] [i_7 - 2] |= (arr_21 [i_0] [i_7 - 3]);
            var_25 += (arr_18 [i_0]);
            var_26 = (17167 | 20045);
            arr_25 [i_0] [i_7 + 2] [i_7] |= (!var_1);
            arr_26 [i_7] [i_7] [i_7] = (((((896111238 ? (arr_3 [0] [i_7]) : 56348))) ? 610989009 : 22281));
        }
        var_27 = ((-var_5 ? (((arr_22 [16]) ? (arr_5 [15] [i_0]) : (arr_0 [9]))) : (((arr_7 [i_0]) << (((arr_12 [5] [i_0]) - 40397))))));
    }
    #pragma endscop
}

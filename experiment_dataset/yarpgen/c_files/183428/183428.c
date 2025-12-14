/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2452664041013397729;
    var_19 = ((var_15 == (((var_10 % var_9) ? (min(18219759932961835328, var_14)) : 18219759932961835330))));

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (max((((!(arr_1 [i_0])))), 226984140747716291));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 = (max(((((2029697848771890730 ? 27 : 1)))), 18219759932961835317));
            var_21 = (max(((((var_2 / (arr_0 [7]))))), ((var_6 ? 16417046224937660883 : 8))));
            var_22 = var_0;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_23 = var_4;
            var_24 &= (~(max(((-4722 ? var_1 : var_10)), ((min(var_16, var_15))))));

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_25 = (((40 + ((var_16 ? 4721 : var_16)))));
                var_26 += ((max(((max(var_13, 53576))), (arr_10 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2]))));
                arr_11 [8] = (min(0, -18903));
                arr_12 [i_3] [i_2] [i_2] [i_0] = (((arr_9 [i_0] [i_2] [1]) / (min((arr_9 [i_0 + 1] [i_0 - 3] [i_0 + 1]), ((18219759932961835328 ? 18219759932961835342 : 8))))));
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_27 = (arr_16 [i_0 - 2] [1] [i_4] [i_5] [20] [i_6]);
                            arr_20 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] = (min((arr_0 [i_4]), 1006632960));
                        }
                    }
                }
                var_28 = 4294967295;
                var_29 = ((var_0 != 228) ? 18219759932961835326 : (arr_5 [i_4]));
                var_30 = (((var_14 ? -8111359786090949351 : (arr_4 [i_0 + 1] [i_4]))));
            }
            arr_21 [i_0] = (min(-18902, var_12));
        }
        arr_22 [i_0] = (max(((((var_8 ? 0 : var_7)))), (((arr_18 [1] [16]) ? 53552 : var_1))));
    }
    #pragma endscop
}

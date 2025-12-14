/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(-376092357, ((-1 | (3658155995220941282 - -7767084971118357928))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = -6;
                                var_20 = ((((((-(arr_13 [i_4] [i_3 + 2] [i_1] [i_2] [i_1] [i_0 + 1]))) << ((((min((arr_11 [i_0] [i_0] [i_0] [17] [i_0] [9]), -13))) - 35606)))) > (((min(-1, -1644784673))))));
                                var_21 = (arr_4 [i_3] [i_1]);
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_4] [i_0] = (arr_1 [i_2] [i_2]);
                                arr_15 [1] [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = 981440840;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_22 [i_0 - 1] [i_0 - 1] [i_6] [i_0 + 1] [7] [i_0 - 2] [i_0] = ((((((arr_8 [i_0] [i_0]) && ((max((arr_11 [i_0] [11] [11] [i_5 - 1] [i_6 + 1] [i_0]), 65535))))))));
                                var_22 = ((max((min(255, -3221298558322388467), (!-1644784673)))));
                                arr_23 [0] [i_5] [13] [i_6] [i_7 + 1] = 184;
                            }
                        }
                    }
                }
                var_23 = ((25 | ((((~(arr_7 [i_1 - 1] [i_0 - 2] [12]))) | (arr_20 [1] [i_0] [i_0] [1])))));
                var_24 = ((-((-(((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) << (5871409613591098940 - 5871409613591098919)))))));
                var_25 = ((!((!(!108)))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((-43 - var_4), var_7));
    var_13 = -115;
    var_14 = (((((-5818 ? 60259 : 4070388141) >> ((((var_10 ? var_10 : var_4)) - 608949071696983392))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_0] = (((((var_9 ? var_1 : var_5))) ? ((((var_9 > (arr_4 [i_1]))))) : var_9));
            arr_6 [i_0] [i_0] = (arr_2 [i_1] [i_1]);
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_15 = ((~(((arr_12 [i_4] [i_0] [i_0] [i_1] [i_0]) ? -172 : -24030))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = (var_7 < 11042017829648804273);
                        }
                    }
                }
            }
            arr_16 [i_0] = (max(var_4, (((!var_9) ? (arr_4 [i_1]) : ((-5818 ? 6168216719813419442 : var_4))))));
        }

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 4; i_6 < 19;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                            arr_29 [i_0] [i_5] [i_5] [i_5] [i_5] = var_2;
                            arr_30 [i_0] [i_0] [i_0] = var_6;
                            arr_31 [i_0] [i_0] [i_5] [i_6] [i_6] [i_0] [i_8] = ((11042017829648804273 * ((((arr_20 [i_0] [i_5] [i_6 - 3]) - (var_4 * var_4))))));
                            arr_32 [i_0] = (((5823 | var_11) << (((((((arr_22 [i_8] [i_6 - 1] [i_6]) ? -115 : var_11)) + 136)) - 21))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        arr_39 [18] [i_0] [i_5] [i_9 - 1] [i_10] = (-5824 * var_4);
                        arr_40 [i_0] [i_0] [i_9 + 1] = (var_0 != 96);
                        arr_41 [i_0] [i_10] [i_10] [i_10] [i_5] = ((((((max(var_9, -5))) ? (arr_12 [i_9] [i_9 + 1] [i_9 - 1] [i_9] [i_9 - 1]) : (arr_19 [i_0] [i_0] [i_0])))) ? (max((min((arr_7 [i_0] [i_0] [i_0]), var_10)), var_10)) : (((((min((arr_33 [i_0] [i_0] [18]), (arr_12 [i_0] [i_0] [i_0] [i_9] [15])))) ? ((max((arr_33 [i_5] [i_0] [i_5]), var_8))) : (~var_5)))));
                        arr_42 [i_0] [i_0] [i_10] = (min((min(122, 11042017829648804273)), -114));
                    }
                }
            }
        }
    }
    #pragma endscop
}

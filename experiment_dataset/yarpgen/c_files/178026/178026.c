/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = (min((((arr_0 [i_0 - 2]) ? var_18 : (arr_0 [i_0 - 2]))), ((min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_21 = ((15 ? 1 : (((!(arr_2 [i_0 + 2] [i_2 - 2]))))));
                        arr_9 [i_3] [i_3] = -821544588;
                        arr_10 [i_0] [i_0] [i_0 + 1] [i_3] = (max(2147483638, (arr_7 [i_0] [i_0] [i_0 + 2] [i_3] [i_3] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_22 = (max(var_22, (((((max(-1547178303148749367, (arr_12 [i_4] [i_4] [i_2] [i_1] [i_0 + 1])))) ? (~1) : 1)))));
                        var_23 *= (arr_1 [i_4] [i_4]);
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        var_24 = (min(var_24, ((((max((min(3097021898724726898, var_11)), (arr_15 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]))) / 17306)))));
                        arr_17 [i_0] [i_1] [i_2] [i_5] = var_0;
                        var_25 = ((-((min(0, 902434175)))));
                    }
                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {
                        arr_22 [i_0 - 2] [i_2] [i_2 - 1] = var_7;
                        arr_23 [i_2] [i_1] [i_2] [i_6] [i_6] [i_1] = ((((arr_12 [i_6 - 2] [i_2] [i_2] [i_1] [i_0 - 1]) + 2147483647)) << ((((-(-16169 % var_10))) - 16169)));
                        var_26 = (max(var_26, ((min(1, (max(var_4, (arr_21 [i_0] [i_0 - 2] [i_1] [i_2 - 2] [i_6 - 4] [i_6]))))))));
                    }
                    var_27 ^= 3334;
                    arr_24 [i_0 + 2] [i_1] [i_2] = 367503504325021197;

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_28 = (arr_2 [i_7] [i_7]);
                        var_29 = 768;
                    }
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        var_30 = (min(var_30, ((((arr_5 [i_0] [i_1] [i_2]) ? ((((((arr_2 [i_0] [i_0]) + 17306))) ? ((238 ? 5529 : 11599)) : (arr_13 [i_0] [i_0] [i_0] [i_0 - 2] [i_2 - 3]))) : (-1635893939 > var_1))))));
                        arr_31 [i_2] [i_8] [i_8] = max(-821544588, ((((-(arr_21 [i_2] [i_1] [i_2] [i_2] [i_0] [i_2]))) * (arr_2 [i_2] [i_0]))));
                        arr_32 [i_8] [i_0] [i_0] [i_8] [i_0] = arr_21 [i_8] [i_2] [i_1] [i_1] [i_0] [i_0];
                    }
                    for (int i_9 = 2; i_9 < 9;i_9 += 1)
                    {
                        var_31 = (arr_13 [i_9] [i_0] [i_2] [i_1] [i_0]);
                        arr_35 [i_9] [i_1] = (max((arr_8 [i_9] [i_9]), 238));
                        var_32 *= 902434180;
                    }
                }
            }
        }
    }
    var_33 = (~-414104745);
    var_34 = ((var_7 ? 4467570830351532032 : var_17));
    #pragma endscop
}

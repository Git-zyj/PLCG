/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = -31791;
        var_16 = (min(1981569241, ((~(arr_1 [i_0])))));
        arr_3 [i_0] = 1981569246;
        var_17 = ((((~10) ? (max((arr_1 [i_0]), 6974246057367175475)) : (~-1981569251))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = ((3519527325279887739 > (((2147483647 ^ ((54970 ? -512 : -1981569258)))))));
        var_18 = 1981569241;
        arr_8 [i_1] [i_1] = 1981569260;
        var_19 = (min(var_19, (((-(((((-94 ^ (arr_4 [i_1] [i_1])))) * (arr_5 [i_1]))))))));
        arr_9 [i_1] = ((((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (76 & 167) : (arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_20 &= ((-((3214601489 ? ((min(-16996, -91))) : ((min(-117, 0)))))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_21 = 1981569258;
                        arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = (((18040 > 1) || (((~(arr_14 [i_2]))))));
                    }
                }
            }
        }
        var_22 += 158;
    }
    var_23 = 3519527325279887755;
    var_24 = var_12;
    var_25 ^= ((705591009 ? -1981569242 : var_5));
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            {
                var_26 -= (((arr_12 [i_6 + 1] [i_7] [i_7 - 1]) ? 710634781 : (arr_16 [i_6] [i_6] [i_7] [i_7])));
                arr_24 [i_6] = ((-((~((-(arr_14 [i_6])))))));
                arr_25 [i_6] = ((-((((min(4200889354, 22602))) ? (((~(arr_19 [i_7 - 3] [i_6])))) : (min(6777660255570450806, (arr_14 [i_6])))))));
                arr_26 [i_6] = (max(1, 2013265920));
            }
        }
    }
    #pragma endscop
}

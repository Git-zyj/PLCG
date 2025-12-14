/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (min(var_3, var_12));

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    {
                        var_18 = var_4;
                        var_19 = ((((min((~-1), (var_16 | 15536)))) ? (~15536) : ((~(arr_3 [i_3 - 1] [i_0 + 1])))));
                        var_20 = (max((arr_3 [1] [5]), (1460959413 <= -15537)));
                    }
                }
            }
            var_21 = (arr_9 [i_0]);
        }
        var_22 = ((((-(arr_5 [i_0 + 1]))) + ((((min(4095, 1)))))));
    }
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                {
                    var_23 = (max((((arr_5 [i_6]) ? -var_7 : (((min(15536, 15536)))))), ((+(((-9223372036854775807 - 1) / var_6))))));
                    var_24 = max(21506, var_1);
                    var_25 = 15;
                    var_26 = (((((((-(arr_0 [i_4])))) ? ((var_3 ? 845793963326651453 : (arr_8 [i_4] [4] [i_5] [i_5]))) : (var_5 / 4094))) / -var_6));
                    var_27 = (max((1 != 26148), -var_0));
                }
            }
        }
        var_28 = ((((((min((arr_6 [i_4 + 2] [i_4 + 2] [i_4 + 2]), 16383))) ? (44029 - 7098766952962590469) : -var_2)) < (((-((min(0, 26148))))))));
        arr_18 [i_4] |= ((min(21506, -9393)));
    }
    var_29 = (--0);
    var_30 = (max(var_30, (min(var_3, var_17))));
    #pragma endscop
}

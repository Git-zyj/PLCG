/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((21459 ? 21459 : 14668205416237952680))));
    var_14 = ((((max(((max(var_12, var_6))), ((var_9 ? 1 : var_0))))) ? (~var_3) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((~(((arr_3 [i_0] [i_1]) / var_6))));
                var_16 = (~(min((arr_0 [i_0]), (arr_0 [i_0]))));
            }
        }
    }
    var_17 = var_12;

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_3] = ((((((arr_8 [i_2] [i_4]) * (arr_8 [i_2] [i_3])))) ? (((arr_8 [10] [i_3]) - (arr_8 [i_2] [1]))) : (arr_8 [i_4] [i_3])));
                    var_18 = (max(var_18, ((((((~(arr_11 [i_3] [i_2] [i_3] [i_2])))) ? ((-(arr_11 [i_4] [i_3] [i_4] [i_3]))) : (arr_11 [i_4] [i_4] [i_3] [i_2]))))));
                    var_19 = ((!((max((arr_7 [9]), (arr_8 [i_2] [i_4]))))));
                }
            }
        }
        arr_14 [i_2] [i_2] = arr_8 [i_2] [i_2];

        for (int i_5 = 2; i_5 < 12;i_5 += 1)
        {
            var_20 = 60;
            var_21 = (min(var_21, ((((10657249587792890282 ? (max(7208093877269399934, (arr_6 [i_5] [i_5])) : (~9223372036854775807))))))));
            arr_17 [i_5] [i_5] [i_5] &= (13103 != 6517907914040636019);
            arr_18 [i_2] [i_2] [i_5] = (max((((!3778538657471598944) || (!363449880))), ((!(arr_10 [i_5 - 1] [i_5 + 1])))));
            var_22 = ((-(max((((arr_15 [i_2] [i_2]) ? var_2 : var_2)), (((arr_8 [i_2] [i_5 + 1]) * (arr_11 [i_2] [i_2] [i_5 - 2] [i_5])))))));
        }
        arr_19 [i_2] [i_2] = (16 || -66);
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_22 [i_6] &= (109 / 1218579296);
        arr_23 [i_6] = ((-(arr_20 [i_6])));
        var_23 = (arr_21 [i_6]);
    }
    #pragma endscop
}

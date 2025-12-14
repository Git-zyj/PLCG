/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (min(((((max(51144, var_1))) ? var_3 : 0)), (!var_15)));
    var_18 = (min(var_18, ((max(var_8, var_1)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_19 |= (max(((+((((arr_0 [i_0]) >= var_3))))), ((~(~var_12)))));
        var_20 = (min(var_20, (((-((((min((arr_1 [i_0 + 2]), -10558))) ? var_12 : (arr_0 [i_0]))))))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, (arr_9 [i_1] [i_2] [i_3] [i_3])));
                    var_22 = (max(var_22, ((max((min(857562132, (min((arr_7 [i_1] [i_1] [i_1]), 0)))), -1206728950)))));
                    arr_10 [i_1] [i_2] [i_2] [i_3] = (132 && 188);
                    var_23 = (min(var_23, ((((819926764 && ((max(var_7, (arr_0 [i_2]))))))))));
                }
            }
        }
        arr_11 [4] = var_2;
    }
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_17 [i_4] [i_5] = ((var_10 ? ((((((max(15, 21))) && ((min(0, 3815641411))))))) : (arr_15 [16] [i_5] [i_5])));
            var_24 = (max(var_24, ((min(var_16, ((((arr_12 [i_4 - 1]) < (arr_12 [i_4 + 1])))))))));
        }
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            arr_20 [i_6 + 1] [i_6] [15] = (min(((((((arr_12 [i_4]) ? (arr_18 [i_4] [i_6] [i_6]) : var_0)) < 2684036943))), (arr_16 [i_4] [i_4] [i_6])));
            var_25 -= 11;
            var_26 -= var_10;
        }
        var_27 ^= max((min((arr_14 [i_4 - 1] [i_4 - 1] [i_4 + 1]), (arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 1]))), (max((arr_14 [i_4 - 1] [i_4 + 1] [i_4 + 1]), var_4)));
    }
    var_28 ^= (((max(var_9, var_13)) < var_2));
    var_29 ^= ((-(max(((var_10 ? var_6 : var_2)), ((max(1, var_0)))))));
    #pragma endscop
}

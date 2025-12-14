/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_17 = ((-((((!(arr_0 [i_0]))) ? ((var_2 ? (arr_1 [i_0]) : var_13)) : var_14))));
        var_18 = ((!((min(232, 9)))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 = ((!(arr_10 [i_0 - 2] [i_1] [i_1 + 3] [i_3 + 1] [i_3] [i_3])));
                        var_20 |= (var_7 ? (arr_6 [i_0] [i_0] [i_0]) : (max(((min((arr_11 [i_3] [i_2] [i_1] [i_0]), (arr_7 [i_0] [i_1] [i_2] [i_3])))), ((120 ? var_2 : var_7)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_21 = ((min(var_15, 190)));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 7;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_21 [i_7] [i_6] [i_5] [i_4] = (~6876053032809547349);
                        arr_22 [i_7] [i_5] [i_6] [i_7] = var_9;
                    }
                }
            }
        }
        var_22 = (max(var_22, (arr_16 [i_4] [i_4] [i_4] [i_4])));

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_23 = (max((((var_0 ? (arr_7 [i_4] [i_8] [i_4] [i_8]) : (arr_7 [i_8] [i_4] [i_4] [i_4])))), (max((((90 && (arr_0 [i_4])))), (max(var_8, var_6))))));
            var_24 = (((((((max((arr_16 [i_4] [i_4] [i_4] [i_4]), var_12))) ? var_4 : 232))) >= (((27336 || -16825) ? ((var_3 ? 85 : 10315088809713805466)) : 28))));
            var_25 = var_9;
        }
    }
    var_26 = var_3;
    #pragma endscop
}

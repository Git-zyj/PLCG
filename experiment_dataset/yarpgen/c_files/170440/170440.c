/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 &= (max((arr_3 [i_2 + 3]), (min(182, (arr_3 [i_2 + 3])))));
                    var_11 = (min((max((arr_7 [i_0 - 1]), (arr_7 [i_0 - 1]))), (var_8 > var_0)));
                }
            }
        }
        arr_8 [9] = ((min((arr_3 [i_0 - 1]), -344755384)));
        var_12 = (max(var_12, (((!-var_9) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (max((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]), 15964353945994633052))))));
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        var_13 = (arr_9 [4]);

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_14 = (max(var_14, ((!((!(!var_1)))))));
            var_15 = ((!((max((((arr_15 [i_3]) ? var_6 : -4479826725884390834)), 1)))));
            arr_16 [i_4] [i_4] = (min(4294967270, (max(((625893504639439817 ? var_6 : 9223372036854775792)), var_3))));
        }
        for (int i_5 = 3; i_5 < 15;i_5 += 1)
        {
            var_16 *= var_8;
            arr_19 [i_3 - 1] [10] [i_3] &= ((var_8 ? ((((min(var_3, var_7))) ? (arr_3 [1]) : var_0)) : (arr_12 [i_3] [i_5])));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 16;i_7 += 1)
                {
                    {
                        var_17 = var_2;
                        var_18 = ((((max((((!(arr_13 [i_3] [i_3])))), var_7))) ? ((~(arr_0 [6]))) : var_5));
                    }
                }
            }
        }
    }
    var_19 = var_7;
    var_20 = var_6;
    #pragma endscop
}

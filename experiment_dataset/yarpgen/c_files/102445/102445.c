/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((min((var_2 + 32766), (min((((126 ? 0 : 255))), (min(-78, var_0)))))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        var_13 = (-1669856256544565872 % -11);
                        arr_8 [i_0 - 1] [i_1] [i_0] [i_2] [i_3 - 2] = (862079176171197487 >= 1);
                        var_14 = (arr_6 [i_0] [i_1] [i_2] [i_0] [i_2] [i_0 + 1]);
                        var_15 |= -10258;
                        arr_9 [i_3] |= var_0;
                    }
                }
            }
        }
        var_16 = min(((((((arr_5 [i_0] [i_0] [i_0] [i_0 - 1]) ? var_1 : var_8))) ? (((0 ? 1 : 32767))) : 13)), (max((arr_1 [i_0] [i_0]), (min((arr_5 [i_0] [i_0] [i_0] [i_0]), 2147483647)))));
    }
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        var_17 += (max(((max(237, ((var_4 ? var_3 : 3496949125))))), 15735822590697863525));
        var_18 = (min(((max(174, (((!(arr_10 [i_4] [i_4 + 2]))))))), -1105234892));
        var_19 = (min(var_19, ((min(14875472240064836400, 930857161)))));
    }
    #pragma endscop
}

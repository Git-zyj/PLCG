/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = min(-192, var_3);
    var_15 = var_9;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [2] [2] = ((+(((arr_1 [i_0]) >> (-6005459650300370626 + 6005459650300370642)))));
        arr_3 [3] = (min((max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))), (arr_1 [i_0 - 1])));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (min(190, 194));
        var_16 ^= 1819471152350654733;
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    {
                        var_17 = (max(var_17, (((((arr_11 [i_2 + 1] [i_3] [i_4]) / (arr_13 [i_5] [i_2 - 1])))))));
                        var_18 = (arr_10 [i_2 - 1]);
                        arr_18 [i_4] [i_2] = (max((max((arr_13 [i_2 + 1] [i_4]), 182)), var_12));
                    }
                }
            }
        }
        var_19 = (min(var_19, ((((36847975 - (arr_13 [i_2] [i_2 - 1])))))));
    }
    #pragma endscop
}

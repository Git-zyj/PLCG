/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((var_11 || (!255)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (((((!12499702869285334758) / (arr_1 [i_0]))) >= (arr_1 [8])));
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = var_9;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_13 [i_0] = (!1);

                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            var_13 = (min(var_13, (2413582831341486093 != 0)));
                            var_14 = (min(var_14, ((((arr_11 [i_4] [i_4 - 2] [i_4] [i_2 - 1] [i_1 - 1]) ? (arr_0 [i_0]) : (7 / 87))))));
                            var_15 = (min(var_15, (-16 & 683209285)));
                        }
                    }
                }
            }
        }
    }
    var_16 = (~var_10);
    var_17 = var_1;
    #pragma endscop
}

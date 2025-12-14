/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = ((-(((((~(arr_5 [i_1] [i_1] [i_1])))) ? (max(var_14, (arr_4 [i_0] [i_0] [i_1]))) : (((min(var_8, 0))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 = (((((arr_5 [i_1] [i_1] [i_1]) ? (arr_3 [i_0]) : (arr_4 [i_0] [i_0] [i_2]))) != ((var_6 ? var_6 : var_17))));
                    var_20 = ((((((arr_2 [i_2]) - (arr_0 [i_0])))) ? (arr_4 [i_0] [i_1] [i_2]) : 103));
                    arr_8 [i_2] [i_1] [i_1] = (((arr_2 [i_1]) <= 1));
                    arr_9 [i_1] = ((var_2 ? (!8737210381687331635) : (arr_0 [i_0])));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((min((min(-0, var_16)), (((arr_3 [i_0]) ? 0 : (((-13084 + 2147483647) << (4294967283 - 4294967283))))))))));
                                var_22 = (max((min(((max(-81, 4549034223632161354))), (arr_12 [i_1] [i_4] [i_1]))), (((+(((arr_5 [i_1] [i_1] [i_1]) ? (-32767 - 1) : var_8)))))));
                                var_23 = (min((-32767 - 1), -110));
                            }
                        }
                    }
                    arr_19 [i_1] [i_1] [i_1] [i_1] = var_10;
                }
            }
        }
    }
    var_24 = ((var_14 ? ((((((var_1 ? var_6 : (-32767 - 1)))) * (min(1490582772, var_5))))) : (((((-32767 - 1) == 58)) ? (((-31902 ? var_17 : 3888999289))) : 12562307302446408462))));
    #pragma endscop
}

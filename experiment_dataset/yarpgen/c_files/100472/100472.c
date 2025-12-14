/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((((((arr_3 [i_0]) ? (arr_0 [i_0] [i_0]) : var_8))) ? 52 : (((((max(0, (arr_3 [i_0])))) == (arr_3 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_10 = (((arr_10 [i_0] [i_2] [i_0] [i_0]) ? (arr_9 [i_0] [i_1] [i_2] [i_3]) : (((((-(arr_9 [i_3] [i_2] [i_1] [i_0])))) ? (arr_7 [i_0] [i_1] [i_2] [i_2]) : (arr_0 [i_0] [i_1])))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = (max(2962925369, (arr_0 [i_0] [i_1 + 2])));
                        var_11 = (((~15666) * (((((((arr_0 [i_2] [i_0]) || (arr_1 [i_2])))) * ((min(18, var_2))))))));
                    }
                }
            }
        }
        var_12 = ((((arr_5 [i_0] [i_0] [i_0]) / 747140548921210510)));
        arr_13 [i_0] = ((((65506 ? (arr_8 [i_0] [i_0] [i_0]) : 4461306928691479019)) * (131071 == 65535)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_13 -= (arr_7 [i_4] [i_4] [i_4] [14]);
        arr_16 [i_4] [i_4] = 27;
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_14 = (min(var_14, (((~(arr_1 [i_5]))))));
        arr_19 [i_5] = (arr_5 [i_5] [i_5] [i_5]);
        var_15 = (max((arr_10 [i_5] [0] [i_5] [i_5]), 5792555890135881777));
    }
    var_16 = 1;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 *= 5653209772715810510;
        var_15 = 1;
        var_16 = ((-((1 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_11 [i_1] [3] [17] [i_4] = (var_9 - var_10);
                        arr_12 [i_1] [i_3] = (arr_2 [3]);
                        var_17 = arr_8 [i_4] [i_4] [i_4];
                        var_18 = (((((-(arr_8 [i_4] [i_2] [i_1])))) - var_5));
                        arr_13 [i_1] = (var_10 <= ((((arr_10 [i_1] [i_1] [i_1] [i_1]) != (((arr_6 [i_1] [5]) ? (arr_5 [1] [i_2] [i_3]) : var_1))))));
                    }
                }
            }
        }
        var_19 = ((var_7 ? ((~(arr_6 [i_1] [i_1]))) : (!64)));
    }
    var_20 = var_2;
    #pragma endscop
}

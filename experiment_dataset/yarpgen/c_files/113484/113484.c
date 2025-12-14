/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((((((((arr_1 [i_0]) ? var_3 : var_6))) ? (min(var_2, var_4)) : 0)) <= (((-2224 ? 1 : 1)))));
        arr_2 [16] = var_0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 -= (((-(~var_5))) << ((((arr_7 [i_1 + 1] [1] [1]) > (arr_7 [i_1 + 1] [i_1] [13])))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] |= (min((arr_4 [i_0] [i_0]), (arr_5 [i_1] [i_1])));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    {
                        var_13 ^= (0 > 1);
                        arr_20 [i_3] [i_5] [18] [i_3] = ((((-(max((arr_18 [i_3]), var_8)))) > (~var_1)));
                        var_14 = (min((var_8 | var_8), ((-((var_2 ? var_2 : (arr_16 [i_3 + 1] [i_3] [4])))))));
                    }
                }
            }
        }
        arr_21 [i_3] [20] = (arr_14 [i_3] [i_3]);
        var_15 = min((arr_17 [i_3]), (max((((arr_10 [12]) ? (arr_10 [i_3]) : 18446744073709551615)), ((min(var_2, var_1))))));
    }
    var_16 = var_3;
    var_17 = (max((~1), (var_4 - 0)));
    #pragma endscop
}

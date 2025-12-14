/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (arr_0 [i_0]);
        var_13 = ((((!(arr_0 [i_0]))) ? (((1513144838 ? (arr_0 [i_0]) : 14133))) : (((arr_1 [i_0]) | 0))));
    }
    var_14 = (max(var_14, var_5));

    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_15 = (0 ? -14163 : -6);
        var_16 = (((((arr_4 [i_1]) / ((var_0 ? (arr_2 [i_1]) : (arr_2 [i_1]))))) <= ((var_0 / (~50231)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_17 = (arr_8 [i_2] [i_4]);
                    var_18 = ((-((-611236654 / (arr_7 [i_2] [i_3 - 1] [i_3 - 1])))));
                }
            }
        }
        var_19 = ((-766866357 ? 4294967295 : 3430));
        var_20 ^= (958572644 != 22043);
        var_21 = -22043;
    }
    #pragma endscop
}

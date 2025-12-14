/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (min(var_2, var_4));
    var_11 = max(1, ((var_5 ? var_7 : ((var_4 ? 134217727 : -134217748)))));
    var_12 *= ((var_8 || (((127 ? ((var_3 ? var_4 : var_2)) : ((min(-8984656558679270485, 3674112209735140171))))))));
    var_13 -= var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (((((arr_5 [i_1] [i_1] [i_1 - 3]) ? (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_1 [12]))) : (arr_3 [i_1]))) & (((-127 - 1) ? (((arr_0 [i_0]) ^ (arr_3 [i_1]))) : var_2))));
                    var_15 *= (min(((16383 ? 33726 : 2665127966)), var_6));
                }
            }
        }
        var_16 = (min(var_16, var_6));
        var_17 = ((!(arr_3 [i_0])));
        var_18 = var_3;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                {
                    arr_13 [i_0] [i_0] [i_0] &= (max((arr_10 [i_3 + 1] [i_3 + 1] [i_3 + 2] [i_3 + 2]), (((arr_1 [i_0]) ? (max(2245493328, var_3)) : (arr_8 [i_0] [i_0] [i_4])))));
                    var_19 -= (arr_1 [i_3]);
                    var_20 *= ((~(((arr_10 [i_3] [i_3 + 2] [i_3 + 2] [21]) | 63))));
                }
            }
        }
    }
    #pragma endscop
}

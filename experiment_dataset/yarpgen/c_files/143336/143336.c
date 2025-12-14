/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 += (arr_1 [i_0] [i_0]);
        var_16 = ((!((max((((arr_2 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0]))), 3756005586)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_17 -= (arr_5 [10]);
        var_18 = (max(var_18, (!5517)));
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    arr_15 [i_3] [i_3] [i_4] &= ((!((!((max((arr_8 [i_4]), 31744)))))));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        var_19 = (min(((((((arr_18 [i_2] [i_2]) ? var_2 : 9530))) ? ((min((arr_17 [i_2] [i_2 + 1] [i_2 + 1] [4] [i_2]), (arr_8 [i_2])))) : (((arr_5 [i_3]) ? 0 : 8378902462408490124)))), (((-((var_1 ? (arr_9 [i_4]) : (arr_1 [i_3] [i_3]))))))));
                        arr_19 [i_2] [i_2] [i_4] [i_5] [i_4] = ((2284108373 & (arr_11 [i_2] [i_3] [i_2])));
                    }
                }
            }
        }
        var_20 = (!-79);
        var_21 = (!65535);
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        var_22 = (25 << 5);
        var_23 = ((-(arr_21 [i_6 + 1])));
    }
    var_24 = (~var_6);
    #pragma endscop
}

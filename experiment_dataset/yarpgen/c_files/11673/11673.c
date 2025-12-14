/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [i_0] [i_0] |= (arr_1 [i_0]);
        arr_5 [i_0] [23] = (((arr_3 [i_0]) == (arr_3 [i_0])));
        var_10 = (min(var_10, (var_6 | var_9)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_11 = (max(var_11, var_4));
        arr_9 [9] = 1;
        arr_10 [2] = (((arr_2 [i_1] [i_1]) << (((!(var_8 & var_2))))));
        var_12 &= -3795;
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_13 = (max(-var_7, ((((arr_12 [i_2]) > (arr_7 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_14 = (((((!(arr_11 [1] [3])))) | (!0)));
                    var_15 ^= (max(((min(var_2, 1229659205))), ((~(0 & -12602)))));
                }
            }
        }
        arr_19 [i_2] = (((min(((32767 ? 0 : -32759)), ((((arr_13 [i_2] [i_2]) <= (arr_6 [i_2])))))) > ((max(1, 33560)))));
    }
    var_16 = ((!((((var_8 || var_6) >> (((min(32762, -1229659222)) + 1229659232)))))));
    #pragma endscop
}

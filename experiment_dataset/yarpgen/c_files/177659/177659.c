/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_12 ? var_16 : (((!(3000369611756340416 >= var_14))))));
    var_20 ^= ((var_5 && ((max(var_18, (15446374461953211213 + var_17))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    {
                        var_21 |= (!((((((3 ? var_2 : 3000369611756340416))) ? (((14 ? (arr_8 [i_3] [i_2]) : var_18))) : -15446374461953211213))));
                        arr_10 [i_0] &= ((((!(((3000369611756340427 ? var_10 : (arr_4 [i_0] [i_1] [i_0])))))) ? var_17 : ((54 ? (var_12 == var_11) : (arr_5 [i_0] [i_1] [i_3 + 1])))));
                    }
                }
            }
        }
        var_22 = (min((arr_4 [i_0] [i_0] [i_0]), (~var_16)));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_23 = (max(var_23, (((arr_11 [i_4 + 1] [8]) ? var_0 : 58633))));
        var_24 |= (((arr_12 [i_4 + 1]) <= var_17));
        var_25 &= ((var_14 ? (127 <= var_2) : (!var_5)));
        var_26 &= (arr_11 [i_4 + 1] [6]);
        var_27 -= ((((-7531850641557194242 ? (arr_12 [i_4]) : 0)) / 51227));
    }
    #pragma endscop
}

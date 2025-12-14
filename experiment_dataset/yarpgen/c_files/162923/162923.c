/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_10 = (max(var_10, (((22027 || (((2587770388 ? ((var_2 - (arr_0 [i_0]))) : (((arr_0 [i_0]) ? var_6 : var_8))))))))));
        var_11 ^= ((!((((arr_1 [i_0]) / 43509)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (!((((-(arr_6 [i_0] [i_1] [15] [i_0]))) < 22027)));
                    var_12 |= (max(((~(arr_7 [i_1] [i_1] [i_2 + 1]))), (arr_7 [i_1] [i_1] [i_2 - 1])));
                    var_13 = min(-125, (((arr_5 [i_1] [i_1] [i_2 - 1]) ? (arr_5 [i_0] [i_1] [i_2 - 2]) : var_6)));
                }
            }
        }
        arr_9 [i_0] [12] |= ((~(((!(arr_5 [i_0] [i_0] [i_0]))))));
        var_14 -= 4294967290;
    }
    var_15 = (max(var_15, (((-3323 % (((max(-8055398554636626508, var_4)) % -var_5)))))));
    #pragma endscop
}

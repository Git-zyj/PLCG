/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_12 ^= (((((arr_0 [i_3]) + (arr_7 [i_0] [9]))) + (((arr_0 [i_3]) ? (arr_7 [5] [i_1]) : (arr_6 [i_0] [i_1] [1] [i_3])))));
                        var_13 += ((((((arr_8 [i_1]) ? (arr_1 [i_1] [i_2]) : (arr_3 [i_1])))) ? (((arr_0 [i_2]) ? (arr_7 [i_1] [i_2]) : (arr_1 [i_3] [0]))) : ((((arr_3 [i_0]) || (arr_3 [i_3]))))));
                        var_14 ^= (((((arr_5 [11] [i_1] [i_2] [i_3]) && (arr_1 [i_0 + 2] [i_1]))) ? (((arr_6 [i_0 - 3] [i_1] [i_2] [i_3]) ? (arr_8 [8]) : (arr_7 [10] [0]))) : (((arr_7 [i_2] [i_3]) ? (arr_0 [i_2]) : (arr_7 [i_1] [i_1])))));
                        var_15 -= (((((arr_1 [i_0] [i_1]) ? (arr_1 [i_0 + 1] [i_2]) : (arr_9 [i_0 + 2] [i_3] [i_3]))) - ((((arr_3 [6]) - (arr_1 [3] [i_1]))))));
                    }
                }
            }
        }
        arr_10 [i_0 - 1] [5] = ((((((arr_9 [i_0] [3] [i_0 + 2]) + (arr_4 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_8 [i_0 + 2]) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : (arr_9 [1] [i_0] [i_0]))) : ((((arr_5 [i_0] [i_0] [i_0] [i_0]) + (arr_5 [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                {
                    arr_19 [i_4 + 1] = (arr_17 [9] [i_6]);
                    var_16 = ((32 ? -16 : 4170592044));
                }
            }
        }
    }
    var_17 &= (((((1600207184 || 25161) ? var_7 : ((var_10 ? var_0 : var_3)))) <= var_4));
    #pragma endscop
}

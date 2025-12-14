/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = var_4;
        var_11 = arr_0 [i_0];
        arr_4 [i_0] = (min((((+(((arr_2 [i_0] [i_0]) ? var_7 : 2879400269))))), (max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
        var_12 &= (1 | 1);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_13 ^= var_3;
        arr_9 [i_1] [i_1] = (((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (arr_8 [i_1]) : ((~(arr_1 [i_1]))));
    }
    var_14 = ((~(((var_9 != var_10) / var_10))));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                arr_15 [i_2] [i_3] [i_2] = ((((((arr_1 [i_2 - 1]) ? 1 : ((~(arr_0 [i_2 - 1])))))) ? ((-10 ? (1 ^ 1415567040) : (!10287))) : (!166635661)));
                arr_16 [i_3] [i_2] [i_2] = ((((max((arr_7 [i_2 + 1]), (arr_6 [i_2 + 1])))) ? (((2879400276 ? (arr_0 [i_3]) : 166635666))) : (arr_11 [i_2])));
                var_15 += ((((((arr_13 [i_2] [i_3] [i_2 - 1]) ? 27 : (arr_12 [i_3])))) ? 1 : (((arr_6 [i_2 + 1]) ? var_3 : -1))));
                var_16 = var_5;
            }
        }
    }
    var_17 &= var_6;
    #pragma endscop
}

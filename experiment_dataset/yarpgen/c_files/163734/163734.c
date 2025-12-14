/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 28;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [9] [i_0] &= (((!1) % (arr_1 [i_0])));
        arr_5 [i_0] [i_0] = arr_0 [i_0];
        arr_6 [i_0] = (4486007441326080 * (arr_3 [i_0] [i_0]));
        arr_7 [i_0] = (~184);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 *= (((~(arr_9 [i_1]))));
        arr_12 [i_1] &= ((max(((99 ? 1 : 1)), (arr_11 [i_1]))));
        var_22 = ((1 >> (((arr_8 [i_1] [i_1]) + 4720684169848123020))));
    }
    var_23 |= var_15;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_18 [i_2] [i_2] = (i_2 % 2 == zero) ? ((((-(arr_13 [i_2 - 1]))) >> (((arr_13 [1]) ? (arr_14 [i_2]) : (arr_14 [i_2]))))) : ((((-(arr_13 [i_2 - 1]))) >> (((((arr_13 [1]) ? (arr_14 [i_2]) : (arr_14 [i_2]))) - 113))));
                var_24 *= (((90 & 1) * ((((arr_11 [i_2]) & ((((arr_15 [10] [i_3]) || (arr_11 [i_2])))))))));
                arr_19 [i_2] [i_2] = ((min((arr_8 [i_2 - 1] [i_2 - 1]), (arr_8 [i_2 - 1] [i_2 - 1]))));
            }
        }
    }
    #pragma endscop
}

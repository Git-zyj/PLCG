/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [5] [8] |= ((~(arr_0 [i_0 + 3])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [12] [i_1] [i_2] = (arr_7 [i_2]);
                    arr_10 [i_0] = (max((arr_1 [i_0 - 1]), (arr_0 [i_0 - 2])));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        arr_13 [i_3] = ((((min((min((arr_12 [i_3]), var_10)), (((-(arr_12 [i_3]))))))) ? (((arr_12 [i_3 - 4]) ? ((min((arr_11 [i_3]), (arr_12 [18])))) : ((var_5 ? 18446744073709551615 : (arr_12 [20]))))) : (((((arr_12 [i_3]) > (((arr_12 [16]) ? var_1 : (arr_12 [4])))))))));
        var_14 = (min(var_14, (((((-(arr_11 [12]))))))));
    }
    var_15 = var_11;
    #pragma endscop
}

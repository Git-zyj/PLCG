/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 = (max(var_12, ((((-((252 ? var_9 : 65526))))))));

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_13 = (min(var_13, (arr_3 [i_0])));
            var_14 = (((~var_8) ? (arr_4 [i_1 - 1] [i_1 + 1]) : (arr_1 [9])));
        }
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        arr_9 [i_2 + 1] = ((~(((arr_0 [i_2] [3]) ? ((min(130, (arr_8 [i_2])))) : ((20413 ? 65526 : 20415))))));
        var_15 = (min(var_15, 65527));
        arr_10 [i_2] |= ((arr_0 [i_2] [i_2 - 1]) ? (((-(arr_8 [i_2 + 1])))) : (((arr_0 [i_2] [i_2 + 2]) ? var_1 : 16808393610463434242)));
        arr_11 [1] = ((((((arr_4 [i_2 + 2] [i_2 + 1]) + (arr_4 [i_2 - 1] [i_2 + 1])))) ? -20412 : ((-(arr_4 [i_2 + 1] [i_2 + 2])))));
    }
    var_16 *= var_6;

    /* vectorizable */
    for (int i_3 = 4; i_3 < 15;i_3 += 1)
    {
        var_17 &= (((arr_2 [i_3 + 3]) <= 194));
        arr_14 [i_3 + 2] = ((23 ? 196 : 32));
        var_18 = (min(var_18, (arr_0 [i_3 + 2] [i_3])));
    }
    #pragma endscop
}

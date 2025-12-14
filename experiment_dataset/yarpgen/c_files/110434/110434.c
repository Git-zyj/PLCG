/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_6 <= (var_4 == 183)));
    var_11 = (max(var_11, -var_1));
    var_12 = ((+(((~var_4) ? ((-9 ? var_7 : var_8)) : (-2041459689407976522 - var_8)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 += ((2041459689407976545 ? (3339383034941177240 > 8981020143532065552) : -20965));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_14 = ((~(arr_0 [i_1 - 1])));
            var_15 = (max(var_15, (arr_1 [i_1 + 1])));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_16 = (min(var_16, var_9));
                var_17 = ((var_2 % (arr_8 [i_1 + 2] [i_0])));
            }
        }
        arr_11 [1] [6] = (max(121, 9588701220281629903));
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_4] [i_5] = (min(((~(max(var_6, -20969)))), (arr_14 [i_3] [i_3])));
                    arr_20 [i_3] [i_3] [11] = var_9;
                    var_18 = ((8623573057372832564 || (arr_17 [i_3 + 3] [i_3] [i_4 - 1] [i_3 + 1])));
                }
            }
        }
    }
    #pragma endscop
}

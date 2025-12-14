/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (min(2, 244));
        var_14 = ((((!((max(12, 11))))) ? (max((arr_0 [i_0]), (max(28, (arr_1 [i_0] [13]))))) : (arr_0 [12])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_15 = -93;
        var_16 ^= (((!var_4) ? 245 : (arr_4 [14])));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (+((((arr_1 [i_2] [i_2]) > (arr_1 [i_2] [3])))));
        var_17 = ((-((0 - (arr_7 [i_2])))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    var_18 = (max(3918054502163427092, 0));
                    var_19 = ((-(max(0, 0))));
                    arr_14 [12] [13] [i_4 - 1] [i_4 - 1] = ((-2223188633125672109 ? 1 : 41714));
                }
            }
        }
        arr_15 [1] = (min((!1), ((23822 & (arr_12 [i_2] [i_2] [i_2] [i_2])))));
    }
    var_20 &= var_12;
    #pragma endscop
}

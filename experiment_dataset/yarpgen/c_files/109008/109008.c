/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(((var_5 ? var_11 : -286506464)))));
    var_13 |= ((var_11 ? (max(((var_4 << (286506463 - 286506403))), var_9)) : (((-286506464 ? ((-592117380 ? var_8 : -460635032)) : (1 + var_8))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = 460635031;
                        arr_8 [i_1] [1] [i_2 + 3] [i_3] &= (arr_2 [11] [i_0]);
                        var_15 = ((21221098 ? 61440 : 460635010));
                        var_16 = ((-732493334 ? 54823 : 47));
                        var_17 = (arr_5 [14] [i_1] [i_2] [i_0 + 1]);
                    }
                }
            }
        }
        arr_9 [1] [10] |= (((arr_7 [1] [4] [i_0 + 1]) * ((16 ? -14 : 983495638))));
        arr_10 [i_0] [i_0 + 1] = (arr_1 [i_0 - 1] [i_0]);
        var_18 ^= ((((((arr_5 [i_0 + 1] [i_0] [14] [i_0]) * var_3))) ? 4294967295 : 40595));
        var_19 = (arr_5 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2]);
    }
    var_20 = ((~(~var_7)));
    #pragma endscop
}

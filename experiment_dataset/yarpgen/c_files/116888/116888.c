/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 45934;

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_20 -= var_4;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = ((((max((arr_0 [i_0 + 3]), var_4))) << (((((arr_8 [i_0] [i_1] [i_1]) + 6063001760145915681)) - 25))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = (max(7097, 1));
                }
            }
        }
        var_22 ^= (((arr_3 [i_0] [4] [i_0 + 4]) & ((min((arr_7 [i_0] [i_0]), (arr_4 [i_0 + 1] [3] [i_0 - 1]))))));
        arr_10 [0] &= ((var_1 || ((((var_3 ? 10167050812534476033 : (arr_7 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_23 -= 221;
        arr_13 [i_3] [i_3] &= (arr_11 [i_3]);
        arr_14 [i_3] [11] = ((34 ? ((650612358 ? 1739278410 : 835537904)) : 19613));
    }
    #pragma endscop
}

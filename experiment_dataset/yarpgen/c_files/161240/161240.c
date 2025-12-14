/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -32758;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (arr_2 [i_0 + 1]);
        var_14 *= 23051;
        arr_4 [i_0] [i_0] = -32757;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] = (arr_2 [i_2]);
                    var_15 = ((~(((arr_7 [i_0 + 1] [i_0 + 1]) + var_3))));
                    arr_11 [i_0] [i_1 + 1] [i_2] = ((var_6 >= (arr_9 [4] [1] [i_2 + 2])));
                    arr_12 [i_1] [11] = 32755;
                }
            }
        }
    }
    var_16 = ((-(min((var_7 + var_7), var_4))));
    var_17 = ((!(((1620 ^ -32757) && var_8))));
    #pragma endscop
}

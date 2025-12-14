/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (arr_1 [i_0 + 2] [i_0]);
        var_12 = (((arr_0 [i_0 + 2] [i_0 + 2]) ^ (arr_0 [i_0 + 2] [i_0 + 1])));
        var_13 = var_10;
        var_14 = ((((4433203963999418927 % (arr_1 [i_0] [i_0]))) - (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_15 = ((1 ? 745387333088225307 : 0));
                    arr_9 [i_1] [i_1] = (arr_5 [i_2 + 3] [i_2] [i_1 - 1]);
                }
            }
        }
        var_16 = ((!((((arr_5 [i_1] [i_1] [i_1]) ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1]))))));
    }
    var_17 = (((((((max(var_8, var_2))) << (((8 | var_6) - 61))))) ? ((((((var_8 >> (var_4 - 2110887410)))) ? 13 : ((min(var_0, var_7)))))) : ((((max(var_5, var_8))) ? var_9 : 14))));
    #pragma endscop
}

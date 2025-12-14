/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 = (-127 - 1);
        arr_3 [7] [i_0] = (arr_1 [i_0]);
        arr_4 [i_0] = (53924 - 53921);
        var_12 = (arr_0 [i_0]);
        var_13 = (max(var_13, ((((arr_1 [i_0]) ? 53927 : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = ((53925 && ((((min(var_7, 574208952489738240)) % (((((arr_6 [i_1]) || (arr_5 [i_1]))))))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_14 = ((((((arr_8 [i_1] [i_1] [0]) ^ (arr_9 [i_2 + 2] [1] [i_3 + 2])))) ? (max(((((arr_9 [i_1] [i_2 - 1] [1]) ? -118 : 53943))), (max((arr_6 [i_1]), var_6)))) : var_9));
                    var_15 = (arr_12 [i_3 + 1] [i_2 + 2] [i_2 + 2]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_17 [i_4] [3] = 12573;
        arr_18 [0] = ((((((max(var_1, var_1))) && ((max(1986428696, (arr_9 [i_4] [i_4] [i_4])))))) || (var_2 && -1799045421)));
        var_16 = (min(var_9, (((((-1 ? (arr_13 [i_4]) : var_1))) ? 1 : var_1))));
    }
    var_17 = var_10;
    #pragma endscop
}

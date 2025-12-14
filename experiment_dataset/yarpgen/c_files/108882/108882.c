/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_11;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = var_11;
        var_14 *= ((((((~(arr_3 [i_0])))) ? (arr_0 [i_0 - 1]) : ((((arr_0 [i_0]) ? var_12 : var_10))))));
    }
    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] [9] = (((((~((max(var_9, (arr_6 [i_1]))))))) && (min(((!(arr_5 [i_1]))), var_1))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    arr_15 [i_2] |= arr_11 [i_1] [21] [21] [i_3];
                    var_15 *= (((~(min(0, (arr_10 [17] [13]))))));
                }
            }
        }
    }
    var_16 += var_3;
    #pragma endscop
}

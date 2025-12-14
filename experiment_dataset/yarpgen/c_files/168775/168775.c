/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(var_7, var_5)));
    var_15 = var_5;
    var_16 = (min(var_16, var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max(var_17, ((((!176) & ((((((var_13 ? var_7 : 79))) || var_9))))))));
        var_18 = 88;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 = var_1;
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_13 [i_2] = (((arr_4 [8] [i_2]) ? 79 : 251));
                        var_20 = (min(var_20, (((~(arr_5 [10] [10]))))));
                    }
                }
            }
        }
        arr_14 [i_1] = (arr_12 [i_1] [i_1]);
        arr_15 [21] = (((arr_8 [i_1] [20] [i_1] [i_1]) ^ 190));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5] [i_5] = ((((max(220, 17591))) ? ((-(arr_3 [i_5]))) : (((arr_11 [7] [i_5] [i_5] [i_5] [i_5]) ? (arr_11 [i_5] [i_5] [i_5] [11] [i_5]) : (arr_3 [i_5])))));
        var_21 -= (min((61 || 185), (max((arr_6 [i_5]), var_13))));
    }
    #pragma endscop
}

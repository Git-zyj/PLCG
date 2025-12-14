/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= (((max(51458, ((min(var_3, 56)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_17 -= (max(65523, (arr_1 [i_1] [i_2])));
                    arr_7 [i_1] [i_0] [i_1] = var_8;
                    arr_8 [i_0] [i_1] = (arr_5 [i_0] [i_1] [i_2]);
                    arr_9 [i_1] [i_1] = (((~(var_6 >= -1))));
                }
            }
        }
    }
    var_18 = ((1042456153 / var_13) ? -var_11 : (((var_7 || (((65510 ? var_8 : -7449102617676321557)))))));
    var_19 += var_14;
    var_20 = (max(var_20, var_6));
    #pragma endscop
}

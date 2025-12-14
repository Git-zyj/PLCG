/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_10 -= (((max((((arr_3 [i_0]) ? 16981196122020447250 : var_9)), ((max((arr_5 [i_1 - 3] [i_0]), 7127024260261852395))))) % var_1));
                arr_6 [i_1] [i_1] [i_1] = (1023 ? (arr_2 [i_0]) : (max((var_4 / 16189), (-2644580 - -9029736951880863642))));
                arr_7 [i_1] [i_1] = -var_3;
            }
        }
    }
    var_11 = ((var_5 ? (((-(var_7 > var_7)))) : ((var_9 ? var_4 : (var_1 || var_5)))));
    var_12 += 7127024260261852408;
    var_13 = ((~(((!(((var_8 ? var_4 : var_9))))))));
    #pragma endscop
}

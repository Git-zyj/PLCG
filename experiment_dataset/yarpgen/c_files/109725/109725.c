/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] = var_10;
                var_16 = (min((((arr_4 [i_0 + 2] [i_1]) ? (arr_6 [2] [i_0] [2]) : 4294967279)), ((min(var_1, var_15)))));
            }
        }
    }
    var_17 = (min(var_17, ((var_7 ? (min(var_0, (((var_2 + 2147483647) << (((var_2 + 148888212) - 13)))))) : (((!(((186 >> (var_10 - 4057656876)))))))))));
    var_18 = ((4052393262028813708 ? 1 : 1482542669518718561));
    #pragma endscop
}

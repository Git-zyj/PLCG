/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = (((((var_4 ? 15889 : 1)))) ? (~var_10) : (~var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 += var_3;
                    var_17 *= (((((8001458412422099376 - (arr_1 [i_1 + 1] [i_1 + 2])))) ? (((((((arr_3 [i_0] [0] [i_2]) ? var_2 : var_11))) || ((min((arr_1 [i_2] [8]), (arr_1 [9] [6]))))))) : ((((((var_13 ? var_11 : var_4))) && (var_2 && 14846))))));
                }
            }
        }
    }
    var_18 += ((((((var_4 << (var_4 - 1827430785)))) ? (var_8 >> var_8) : (var_4 != var_3))));
    #pragma endscop
}

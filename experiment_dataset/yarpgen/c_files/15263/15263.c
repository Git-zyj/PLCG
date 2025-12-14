/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-119 ? var_7 : var_5))) ? (min((var_11 - 1), -2040515999)) : ((-((max(32767, 29788)))))));
    var_16 = var_13;
    var_17 = ((32767 || (var_13 | 1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1 + 2] [i_1 - 1] = ((((((arr_0 [i_0 - 1] [i_1 + 1]) / (arr_1 [i_0 + 1])))) ? ((((arr_0 [i_0] [i_0]) >= (arr_1 [i_0 - 1])))) : (((arr_0 [i_0 + 1] [i_1 + 1]) << (var_5 - 8027)))));
                var_18 ^= ((!(32767 && 53)));
                var_19 = (((((-((var_0 ? var_2 : (arr_1 [i_0 - 1])))))) ? (((((arr_0 [i_0 - 1] [i_1 + 1]) && 16382)))) : ((((var_10 && (arr_2 [i_1 + 1]))) ? (var_2 / var_4) : (~4635)))));
            }
        }
    }
    #pragma endscop
}

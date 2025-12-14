/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_8;
    var_18 = var_12;
    var_19 = (min((max(110, (var_3 ^ 94))), var_16));
    var_20 = 162;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (+((~((532575944704 << (((-532575944704 + 532575944738) - 26)))))));
                arr_8 [i_0] [i_0] = ((((94 ? 161 : 97))));
                var_21 = (((((arr_1 [i_1 + 2]) + (arr_1 [i_1 - 1]))) >> (arr_1 [i_1 - 1])));
                var_22 *= (((((~(arr_3 [i_1 + 2])))) ? (((arr_3 [i_1 - 1]) ? (arr_3 [i_1 + 1]) : var_16)) : (((1 ? 0 : 64451)))));
            }
        }
    }
    #pragma endscop
}

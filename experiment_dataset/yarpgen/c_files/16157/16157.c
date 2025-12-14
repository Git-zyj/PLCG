/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= ((((max(var_6, var_2)))) ? (((~((max(var_13, var_13)))))) : ((1 ? (min(6836358410622320403, 96)) : var_7)));
    var_16 = (min(((((max(-2270, var_13))) ? (((min(var_10, var_9)))) : var_6)), var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((-113 ? -1 : 1)))));
                arr_5 [i_0] = (min((arr_1 [i_0] [i_1]), 12726625321593374118));
                var_18 += (((0 ? -8 : 16743425147382152924)) == (((max(-87, 127)))));
            }
        }
    }
    #pragma endscop
}

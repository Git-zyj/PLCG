/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (((!158) ? -64 : (((((((arr_1 [i_0]) ? 192 : (arr_1 [i_0])))) && -192)))));
        var_20 = ((52 ? -7685106238895489463 : 1));
        var_21 ^= -872308476;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = (min(192, (!11944821564693594339)));
        arr_6 [i_1] = (!8192);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] [i_2] &= ((((max((~var_8), (arr_2 [i_2])))) ? 64 : (70 && var_16)));
        var_23 = (max((((arr_9 [i_2]) ? (arr_9 [i_2]) : var_15)), (arr_9 [i_2])));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_24 = ((-(~41365)));
        var_25 = ((-((192 ? 1 : 14336))));
        var_26 = 11944821564693594324;
    }
    var_27 *= ((-((29 ? 66 : var_4))));
    var_28 = (min(8251580492940474470, -25));
    #pragma endscop
}

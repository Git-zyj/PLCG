/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [10] = (((arr_0 [8] [i_0]) ? (((arr_0 [i_0] [i_0]) ? 255 : 56)) : ((56 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))));
        var_18 -= arr_1 [i_0];
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1)
    {
        arr_7 [15] |= 42926;
        arr_8 [i_1] = min(40, 675);
        arr_9 [i_1] [i_1] = ((((-(arr_6 [i_1]))) > ((((max((arr_4 [i_1]), var_8))) ? (((arr_4 [0]) ? (arr_6 [17]) : (arr_5 [i_1] [3]))) : (((arr_6 [i_1]) - var_10))))));
        var_19 -= ((+(((255 / 1) ? ((35155 ? 0 : 0)) : (((arr_4 [i_1]) * var_6))))));
    }
    var_20 = (min(var_20, ((((min((~65535), var_7)) % ((~(~var_1))))))));
    #pragma endscop
}

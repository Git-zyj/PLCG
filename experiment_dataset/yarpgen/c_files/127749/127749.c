/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((min((30850 <= -23538), (min(1, var_4))))) ? (((max(36936, var_12)))) : (((max(var_10, 16326))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_17 ^= (((arr_1 [i_0 + 1]) / (arr_0 [i_0 + 1] [i_0 - 4])));
        var_18 = ((!(arr_1 [i_0 - 1])));
    }
    for (int i_1 = 4; i_1 < 16;i_1 += 1)
    {
        var_19 = ((((((((~49209) + 2147483647)) << (13240 - 13240)))) && ((max(30525, var_14)))));
        var_20 = (min(var_20, ((((~var_4) ? ((~((max((arr_0 [i_1] [i_1]), 0))))) : (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 2]) : 19512)))))));
        arr_4 [i_1] [i_1] = (((((837 ? var_8 : ((~(arr_3 [i_1] [i_1])))))) ? ((((max((arr_1 [i_1]), 125))) << (((((arr_3 [i_1 - 4] [i_1 - 1]) + 5335)) - 18)))) : (~-117)));
    }
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        var_21 -= (~-85);
        arr_8 [i_2] [i_2] = 1;
        var_22 = ((((((-1 ? 65525 : (arr_5 [i_2 - 2]))) == var_0)) ? (max((arr_5 [i_2]), ((-(arr_7 [i_2] [i_2]))))) : ((max(1, (max(-122, (arr_6 [i_2]))))))));
        var_23 = var_12;
    }
    var_24 = var_14;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [1] [i_0] = 0;
        arr_3 [i_0] [8] &= ((arr_0 [i_0]) || (((0 ? 534083730573625215 : (arr_1 [i_0])))));
        arr_4 [i_0] |= (((arr_1 [i_0]) || (arr_1 [i_0])));
        var_13 = (min(var_13, (((17912660343135926369 | (((253 & (arr_0 [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_14 *= 0;
        arr_7 [i_1] = (min(4611686018427387904, (min((((arr_5 [i_1 - 1] [i_1]) ? 24 : -7679829411943088169)), (((67 ? 246 : var_9)))))));
    }
    for (int i_2 = 3; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2 - 2] [i_2] = (min(((((((arr_6 [i_2 + 1]) | 19))) / (~7607895102649537749))), (arr_0 [i_2])));
        arr_11 [i_2] = 255;
        arr_12 [i_2 + 1] [i_2] = (min(3097830934220004011, (((arr_0 [i_2 - 3]) ? (min((arr_5 [i_2 - 2] [i_2 - 2]), 7607895102649537749)) : ((((!(arr_0 [i_2])))))))));
    }
    var_15 *= 17912660343135926400;
    var_16 -= ((!(((((var_2 << (var_9 - 89)))) || (((7607895102649537749 ? 2860989056101822338 : 534083730573625215)))))));
    var_17 += var_8;
    #pragma endscop
}

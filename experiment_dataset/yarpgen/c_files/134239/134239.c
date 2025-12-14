/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((+(((var_1 > var_11) ? var_4 : (!var_2)))));
    var_14 = (((var_4 ? var_11 : (~var_3))));
    var_15 |= (max(1035281580, (min((max(-1035281571, 1035281567)), -67))));
    var_16 = (min((max((((var_7 ? 1 : var_2))), (var_11 | var_3))), var_1));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (-1035281581 > -7146);
        var_17 ^= (max((min((1035281568 & var_9), (1 ^ var_1))), (~7161)));
        arr_3 [i_0] = (((((((max((arr_0 [i_0] [24]), (arr_1 [i_0])))) ? 0 : ((var_5 ? -7154 : (arr_1 [i_0])))))) ? (min((arr_1 [i_0]), ((-7151 ? 1 : var_11)))) : -131187137));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = ((72057594037927935 > (arr_5 [i_1] [i_1])));
        var_18 |= ((-(arr_5 [i_1] [i_1])));
        var_19 ^= ((((var_10 ? var_0 : var_12)) > (arr_0 [14] [14])));
        var_20 = (max(var_20, var_10));
    }
    #pragma endscop
}

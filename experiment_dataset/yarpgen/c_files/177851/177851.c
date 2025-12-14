/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 ^= (((--68) != ((-(((arr_0 [20]) & -353245693))))));
        var_11 = ((((18 >= (arr_1 [i_0] [i_0]))) ? (~54486) : (((arr_1 [i_0] [i_0]) | (~118)))));
        arr_2 [8] [i_0] = (~-18);
    }
    var_12 = ((~(((~var_0) ? var_7 : ((var_8 ? var_8 : -18))))));
    var_13 = 17;
    var_14 += var_8;
    #pragma endscop
}

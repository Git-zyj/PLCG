/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((-125 && (-32767 - 1))) || var_1));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [4] |= ((255 - (arr_1 [i_0] [10])));
        var_19 = ((-2122227262804942720 || (arr_0 [i_0] [i_0])));
        arr_4 [i_0] = (arr_2 [i_0] [i_0]);
    }
    #pragma endscop
}

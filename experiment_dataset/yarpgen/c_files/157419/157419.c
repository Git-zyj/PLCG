/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_6, (min(-1, 309428404))))) ? var_4 : ((((max(var_4, var_7))) ? (var_3 >= var_8) : var_2))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (17 ? 17 : 114);
        arr_3 [i_0] = (~18446744073709551599);
        arr_4 [i_0] [i_0] |= (!-1);
    }
    var_11 = 5726171391483909849;
    var_12 = (((12117250772565451196 ? 15 : 9724543595839743396)));
    #pragma endscop
}

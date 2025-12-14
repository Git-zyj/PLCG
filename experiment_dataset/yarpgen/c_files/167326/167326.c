/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min(var_2, ((19359 ? 1 : 1))))) || ((max(((-4818966222930755752 ? 19359 : var_6)), (!var_8))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [13] [i_0] = (((arr_1 [i_0] [6]) < (arr_0 [i_0] [i_0])));
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0] [i_0]) ? var_1 : 41))) ? var_10 : -24));
        var_16 = (!(((-(arr_0 [i_0] [i_0])))));
        arr_5 [14] [i_0] = (!4818966222930755751);
    }
    var_17 = -4708854352941090839;
    #pragma endscop
}

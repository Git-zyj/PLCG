/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = 46;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [1] = (((((((((arr_3 [i_0] [i_0]) ? -33 : 1))) ? var_2 : (!var_4)))) ^ (((((var_4 ? var_5 : var_15))) ? (!13629479069578003248) : (-1699566265 + 3150486827437671659)))));
        arr_5 [i_0] = (~((min((arr_0 [i_0]), var_7))));
    }
    #pragma endscop
}

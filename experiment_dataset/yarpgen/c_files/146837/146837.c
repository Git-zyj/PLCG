/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((0 - (255 <= 29))), 147)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0 + 1] |= (((arr_1 [i_0 + 1]) - (arr_0 [i_0 + 1])));
        var_12 = (max(var_12, ((((12 << (var_4 + 6884441577406812294))) >= ((((arr_0 [i_0]) > 250)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_13 = ((var_9 || (!0)));
        arr_5 [18] [i_1] = 0;
        arr_6 [i_1] [i_1] = (((arr_0 [i_1]) != (!var_4)));
    }
    var_14 = var_9;
    var_15 = 0;
    #pragma endscop
}

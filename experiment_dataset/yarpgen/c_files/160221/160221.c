/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_5 [1] = (((((((112 ? -20404 : -1))) ? ((88 ? 4746 : 168)) : var_6)) * ((+(((((arr_4 [16]) + 2147483647)) >> (arr_2 [i_1] [i_0])))))));
            arr_6 [i_0] [i_1] [i_0] = (min((min(-3782727717250113333, 0)), 12139));
            arr_7 [i_1] [1] [i_0] = var_12;
        }
        arr_8 [i_0] = ((-(arr_3 [i_0] [i_0] [i_0])));
    }
    var_14 = (~var_1);
    #pragma endscop
}

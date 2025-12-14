/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (min((arr_0 [i_0]), var_8));
        var_21 = -1434452749814692718;
        arr_2 [i_0] [i_0] = -1434452749814692713;
        arr_3 [i_0] = (((min(-7216464525352111382, (arr_1 [i_0] [i_0]))) >= (!3885)));
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_22 *= -25969;
        var_23 = (min((arr_4 [i_1 - 1] [i_1 + 2]), var_9));
    }
    for (int i_2 = 1; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] = ((1 ? ((min(((21446 + (arr_6 [i_2 - 1] [i_2]))), (((arr_9 [i_2 - 1]) - (arr_9 [i_2])))))) : 67645734912));
        arr_11 [i_2] = (!12102);
    }
    var_24 = (min(1, 1));
    var_25 = var_16;
    #pragma endscop
}

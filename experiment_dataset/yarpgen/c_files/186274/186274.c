/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (!0);
    var_13 = (var_4 ? ((((max(var_1, 23))) ? var_7 : (var_4 + 7305013842386515400))) : (((max(var_9, (min(1, var_8)))))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_14 = (min(-2666456038959929459, ((min(((((arr_0 [i_0]) && (arr_0 [i_0])))), (max(36, 65500)))))));
        var_15 = ((1 ? (max(5876161933951623384, (arr_1 [i_0]))) : 6075758749340029828));
        var_16 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_17 = (((1 & 0) ? (arr_2 [i_1]) : ((max((arr_4 [20] [i_2]), var_4)))));
            var_18 += ((8313478314390991838 ? (((127 == -5885917661631554764) ? -45 : (arr_3 [i_1] [i_2]))) : (((~(171 == 4147))))));
        }
        var_19 = 0;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += max((max(696480056, (1126785862 % 1976592401))), (min(((var_3 ? 3168181434 : var_12)), var_1)));
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = 0;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = ((255 | (min((1 + var_12), (18 - 4780304343885867726)))));
            arr_5 [i_0] [i_1] [i_0] = ((~((-((min(var_10, -25302)))))));
            var_16 = (var_4 ? (min(-25298, (arr_0 [i_0]))) : 17900);
        }
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((-((~(min(var_12, 122714053325799615))))));
        var_17 += (((((-(arr_7 [i_2 - 1]))) - ((max(var_9, var_2))))));
    }
    #pragma endscop
}

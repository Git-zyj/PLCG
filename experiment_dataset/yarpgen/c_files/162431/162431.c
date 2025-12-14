/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max((min(11625784191965993731, var_12)), (var_9 * var_2))) != ((min((min(131040, 59323)), var_0))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [12] &= (min((max(-131040, (~1))), (arr_1 [i_0])));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = (((min(-var_7, var_0)) <= (var_2 | 0)));
            var_15 = (max((var_10 ^ var_2), 397894675));
            var_16 = (max(var_16, (((0 / ((min((arr_0 [i_0] [i_1]), var_0))))))));
        }
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (((arr_5 [i_2] [i_2] [i_2]) ^ 41561));
        var_18 = max(((-((-(arr_8 [i_2] [i_2]))))), (min((arr_3 [i_2] [i_2]), (max((arr_3 [i_2] [4]), var_9)))));
        arr_11 [i_2] = (min((((arr_5 [0] [i_2] [i_2]) | -397894676)), (397894684 ^ 574405520)));
    }
    var_19 = ((max((max(var_2, var_4)), var_3)));
    #pragma endscop
}

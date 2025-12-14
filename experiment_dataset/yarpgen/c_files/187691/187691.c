/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(var_11, ((1 ? -1 : var_4)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_4;
        var_15 ^= var_10;
        var_16 = (var_1 >= 1);
    }
    var_17 = (min(var_11, (max((min(1, -1)), (var_7 == 1)))));
    var_18 ^= ((~(~0)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_1] [i_1] = (arr_7 [i_1] [i_1]);
                var_19 = (min(var_19, 0));
                var_20 = (max(var_20, var_9));
                arr_9 [i_1] = ((+(min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_2])))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_15 = (max(var_15, ((((max((var_12 % var_6), 85)) << ((((~((min((arr_0 [i_0]), (arr_0 [i_0])))))) + 128)))))));
        arr_2 [i_0] [7] = var_14;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 ^= var_4;
        var_17 += (arr_3 [12]);
        arr_5 [i_1] |= (arr_3 [i_1]);
    }
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_19 = (arr_6 [i_3]);
                var_20 = (min(var_20, ((max(32767, 3030)))));
                var_21 ^= var_9;
            }
        }
    }
    #pragma endscop
}

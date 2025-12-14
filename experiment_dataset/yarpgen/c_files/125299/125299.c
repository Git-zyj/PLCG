/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_0] [5] [i_2] [i_0] = arr_2 [i_0] [i_0];
                    var_14 = (min(var_14, ((((arr_2 [i_0] [i_0 - 1]) / (arr_5 [i_0] [i_0] [i_0]))))));
                }
            }
        }
        var_15 = (max(var_15, (((1 == 145) < var_2))));
        var_16 = (((arr_4 [i_0] [i_0] [9] [i_0]) ^ var_2));
        var_17 &= (arr_5 [i_0 + 1] [i_0] [i_0]);
        arr_7 [i_0] [i_0] = 255;
    }
    var_18 = var_13;
    var_19 = (max(var_19, var_2));
    var_20 = ((((min(var_0, var_9))) >> (var_2 - 2267159928)));
    var_21 = ((-(1 / var_12)));
    #pragma endscop
}

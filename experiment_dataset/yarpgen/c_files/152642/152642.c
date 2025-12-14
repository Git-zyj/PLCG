/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [1] [i_0] |= ((-(arr_1 [i_0])));
        arr_4 [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((max((min((arr_1 [i_1]), var_12)), ((-56 * (arr_5 [i_1]))))))));
        arr_7 [1] [i_1] = ((arr_1 [9]) >> (12060322701474967118 + 20923));
        var_15 = (var_2 >> var_12);
    }
    var_16 = (max(var_16, -56));
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_18 = var_3;
                arr_12 [i_2] [i_2] [i_3] = (((var_13 ? (arr_10 [0] [i_2] [i_3]) : 7680)));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(-1435235699184873732, 1);
    var_18 = var_8;
    var_19 = 1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(var_20, ((((3595 < 166) & (arr_0 [i_0 - 1]))))));
        arr_2 [i_0] = (arr_1 [i_0] [i_0 - 1]);
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_21 = (min((((-(arr_4 [6])))), (max(-7195342217893686394, (arr_1 [i_1] [i_1 + 1])))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_22 = (min(((min(-211719149, (arr_9 [i_2] [i_1 - 1] [i_2])))), ((var_2 + ((min((arr_10 [i_2] [i_2] [i_2]), (arr_0 [i_1]))))))));
                    var_23 *= (min(((((arr_1 [i_3] [i_2 - 1]) ? 1 : (arr_9 [i_1] [i_2] [i_2 - 1])))), 1));
                }
            }
        }
    }
    var_24 = var_15;
    #pragma endscop
}

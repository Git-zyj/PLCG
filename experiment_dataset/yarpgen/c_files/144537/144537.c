/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(-var_0, (((223 ? var_5 : var_7))))) - ((((var_6 - var_8) + (63538 - 192))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min(var_1, ((min(var_8, (var_10 == var_1))))));

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    var_12 = (min((((arr_3 [i_0]) & (arr_8 [i_0] [i_2]))), (max((arr_3 [i_0]), var_2))));
                    var_13 = var_10;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    var_14 = (max(var_14, (((((arr_9 [i_0]) & var_9))))));
                    arr_12 [i_0] [i_1 + 1] [i_3] &= (!-110);
                    var_15 ^= 4088;
                    var_16 = (((24693 << (var_6 - 54860))));
                    var_17 = (((arr_11 [i_3 + 2] [i_0] [i_1 + 1] [i_3 + 2]) + (arr_8 [i_1 - 2] [i_1])));
                }
            }
        }
    }
    #pragma endscop
}

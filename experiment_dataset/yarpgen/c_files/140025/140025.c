/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((var_6 ? ((1 ? var_9 : var_14)) : var_6))), ((((min(-16, var_8))) ? var_2 : (min(19, 576794662))))));
    var_18 = ((-(((((var_15 ? var_2 : var_14))) - (min(var_6, 576794684))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (i_1 % 2 == zero) ? (((((min(((var_8 >> (((arr_3 [i_1]) - 3257)))), (arr_2 [i_0] [i_1])))) || ((min((arr_4 [i_1 + 1] [i_1]), var_4)))))) : (((((min(((var_8 >> (((((arr_3 [i_1]) - 3257)) - 46669)))), (arr_2 [i_0] [i_1])))) || ((min((arr_4 [i_1 + 1] [i_1]), var_4))))));
                arr_5 [i_0] [12] &= (((((min((arr_2 [i_0] [i_0]), 3718172618)) >> ((((min((arr_4 [i_0] [i_0]), var_15))) - 75)))) <= (((((min((arr_4 [i_0] [i_0]), (arr_3 [i_0])))) + ((min(var_15, var_3))))))));
                var_20 = (17 < 576794679);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_21 = ((2048 + (((((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]) - var_5))))));
                            var_22 &= (arr_9 [i_1] [i_1 - 1] [i_1] [i_1] [i_1]);
                            var_23 += min((arr_2 [i_1 + 3] [i_0]), ((((arr_7 [i_1 - 3]) > (arr_7 [i_1 - 1])))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (((((min(var_2, var_4)) * 3718172642))));
    var_25 += ((var_9 ? (var_6 + var_8) : ((((32767 ? var_7 : var_5))))));
    #pragma endscop
}

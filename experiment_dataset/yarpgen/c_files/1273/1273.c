/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_9 ? ((var_8 ? var_0 : var_4)) : ((var_6 ? (!var_8) : (var_1 < var_0)))));
    var_11 = var_4;
    var_12 = (min(var_12, ((min((min(28, -0)), (min(var_8, var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 += (var_8 ? var_8 : ((min(25178, 2))));
                var_14 = (min((((!8396697770998982376) ? (~-25178) : -1)), ((~((max((arr_4 [i_0] [i_0]), 1)))))));
                var_15 = ((var_9 && (arr_4 [i_0] [i_0])));

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    var_16 = ((var_1 ? (((arr_2 [i_0] [i_1]) << (((arr_2 [i_0] [i_0]) - 10948495997617993501)))) : ((((-25178 >= (min(-908203300, (arr_5 [i_0])))))))));
                    var_17 *= ((min(36083, (-1113719479 <= -7839967603502311776))));
                    var_18 = (max(var_18, ((max((~var_3), (arr_2 [i_0] [i_2 - 2]))))));
                }
            }
        }
    }
    var_19 = (max(var_19, (var_8 || 0)));
    #pragma endscop
}

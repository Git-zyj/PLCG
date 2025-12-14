/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 *= var_6;
        var_16 = ((((arr_0 [i_0]) ? var_4 : (min(920666419, var_12)))) + ((min(((var_5 ? (arr_1 [i_0]) : 133)), ((2895565392 ? 2789138852 : 133))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_17 = (((arr_6 [i_2]) % var_1));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    {
                        var_18 = (((arr_9 [i_2] [i_4]) >> (((min(var_9, ((var_10 ? 123 : (arr_8 [i_1] [i_1]))))) - 108))));
                        var_19 = (arr_2 [i_1]);
                        var_20 = (((arr_6 [i_1]) ? 1505828450 : (((123 ? 145 : 17)))));
                    }
                }
            }
        }
        arr_15 [i_1] = ((((min(((min(var_4, (arr_13 [i_1])))), 2789138838))) ? (1280810641 > -34) : var_12));
    }
    var_21 -= ((-var_12 ? (min(var_7, ((var_2 ? -31327 : var_5)))) : var_8));
    var_22 = (var_4 + var_13);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_19 &= ((min(-14, (-127 - 1))));
            var_20 *= var_5;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        var_21 = (max(var_21, ((((min(((((arr_1 [i_0]) < var_16))), (min((arr_2 [i_0] [i_2] [i_2]), var_3)))) | (((((-127 - 1) && ((min(var_11, 968914544605985891))))))))))));
                        var_22 = -14;
                        var_23 = ((((-2930809934495546683 || (-2147483647 - 1))) ? (min((arr_11 [i_0] [i_0] [i_3] [i_3] [i_3] [22]), var_1)) : ((((arr_5 [i_4] [i_3] [i_0]) ? (arr_5 [i_0] [i_2] [i_3]) : (arr_10 [i_0] [i_2] [i_3] [i_4]))))));
                    }
                }
            }
            var_24 = (min(((((((var_2 ? (arr_9 [i_0] [i_2]) : var_4))) ? (var_13 > 0) : -0))), var_1));
        }
        arr_12 [i_0] = (max(-2126567366, (7693350222062212105 < 968914544605985891)));
    }
    var_25 = var_15;
    #pragma endscop
}

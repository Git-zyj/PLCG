/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (((((((var_3 ? 3633121799 : var_16)) / (arr_1 [i_1])))) ? (((arr_2 [i_0]) ? -var_0 : (arr_1 [i_1 - 1]))) : (((var_2 ? (arr_4 [i_1 + 1] [i_1]) : (arr_4 [i_1 + 1] [i_1]))))));
                var_19 = ((((max((arr_4 [i_0] [i_1 - 1]), 2693332827))) ? (((var_12 | (arr_4 [i_0] [i_1 - 1])))) : (((arr_4 [i_1] [i_1 - 1]) & -5261483195919723309))));
                arr_5 [i_0] [i_0] = (((-5261483195919723309 - 21109) ? (((arr_3 [i_1 - 1] [i_1 + 1]) ? (max((arr_3 [i_0] [i_0]), 5261483195919723309)) : (arr_4 [i_0] [i_0]))) : (((max((arr_2 [i_0]), 72))))));
                var_20 = var_8;
            }
        }
    }

    for (int i_2 = 1; i_2 < 13;i_2 += 1)
    {
        var_21 = (max(var_21, 1));
        var_22 += (min((var_9 / 28863), ((8184 ? 661845501 : (3633121785 <= var_3)))));
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        arr_10 [i_3] = ((2987604073813099046 / (((~var_10) ? (((min(35878, 1)))) : (arr_8 [i_3] [i_3 + 1])))));
        var_23 = (min(var_23, var_15));
        var_24 = var_5;
    }
    var_25 &= var_17;
    var_26 = ((!((((min(661845496, 137)) * ((var_0 ? 224 : var_10)))))));
    #pragma endscop
}

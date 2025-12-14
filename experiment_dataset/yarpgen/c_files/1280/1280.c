/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((((min(252, (var_12 - var_1))) == (10 || var_10))))));
    var_20 = ((-var_18 ? ((((max(23141, -124))) ? var_18 : var_5)) : 16529));
    var_21 = (((min((255 - var_8), var_9)) - (((var_15 | var_13) ? var_3 : var_1))));
    var_22 = ((((max(1, var_3))) ? var_1 : ((max(1, 22314)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_23 = ((arr_3 [i_0] [i_1 + 2] [i_0]) >= (min(((((arr_4 [i_1]) / 19))), ((var_16 | (arr_1 [i_0] [i_1 + 1]))))));
                var_24 *= (max(10704845718148715874, (((arr_0 [7]) - (arr_1 [i_1 + 4] [i_1 + 4])))));
            }
        }
    }
    #pragma endscop
}

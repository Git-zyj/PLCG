/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = var_2;
                    arr_8 [i_2] [10] [i_0] = ((54800 && (var_8 || 1)));
                    arr_9 [i_0] [i_1] [i_2] [1] = ((((max(((var_5 ? var_2 : 1)), var_2))) ? var_7 : ((((min(var_6, 1))) ? ((0 >> (-3227868017468091419 + 3227868017468091443))) : ((var_7 >> (var_0 + 9326)))))));
                    arr_10 [i_0] [12] [i_0] [14] = (((((19910 * (63432 < 1)))) ? (-1610612736 > 1) : ((-var_5 ? ((18446744073709551615 ? var_3 : 1588547043)) : (var_6 / var_10)))));
                }
            }
        }
    }
    var_13 = var_11;
    var_14 = (((1 ^ 19929) ? (19892 > 254) : (((~var_6) ? -var_1 : (max(2160466643, 89))))));
    var_15 = -449374980;
    #pragma endscop
}

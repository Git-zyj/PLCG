/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 *= ((var_6 ? 1 : (((var_15 * var_5) * (((var_14 ? 1 : 255)))))));
    var_21 = ((255 ? ((((((var_13 ? var_5 : 1542399173))) ? var_7 : var_5))) : ((-var_11 ? ((1 ? var_4 : var_10)) : var_0))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 *= (arr_0 [6] [i_1]);
                    var_23 = (min(var_23, var_8));
                }
            }
        }
    }
    #pragma endscop
}

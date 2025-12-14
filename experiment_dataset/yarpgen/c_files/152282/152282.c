/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 += (((((var_16 ? (arr_5 [i_0] [i_1]) : 0))) ? -var_2 : (arr_5 [i_0] [i_1])));
                var_20 += var_1;
                var_21 = (min(((max((~var_11), (arr_1 [i_0] [i_1])))), ((-(((-5793173222567999281 + 9223372036854775807) >> (var_14 - 50707)))))));
            }
        }
    }
    var_22 = ((((min((var_11 && var_13), ((var_2 ? 7070669658341955577 : var_2))))) ? (~var_12) : ((~((var_14 ? var_3 : var_4))))));
    var_23 += ((((min(var_13, (min(var_16, var_15))))) ? ((~((1 ? var_13 : var_7)))) : (((((var_0 ? var_12 : var_0))) ? var_9 : ((var_10 ? var_7 : var_11))))));
    var_24 |= var_12;
    #pragma endscop
}

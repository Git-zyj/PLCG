/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_2 ? ((((((min(var_11, var_16))) || var_9)))) : (((min(var_18, var_9)) * (var_7 != var_18))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min(((((((var_13 ? var_19 : var_2))) ? (var_19 >= var_3) : ((var_0 ? var_16 : var_1))))), ((((min(2075409742, 1))) ? 40 : ((227 ? 8354482553675790741 : -71))))));
                var_21 = ((((((var_10 ? var_8 : var_11)))) ? ((((var_14 ? var_17 : var_5)) ^ ((var_8 ? var_13 : var_17)))) : (((((var_10 ? var_11 : var_5))) ? ((var_18 ? var_11 : var_17)) : (max(var_2, var_19))))));
            }
        }
    }
    #pragma endscop
}

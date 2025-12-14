/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                var_14 = ((var_8 & (((3847975805526247850 ? var_11 : (arr_2 [i_1 + 1] [i_1 + 3]))))));
                var_15 = (((((var_4 ? var_0 : (((14598768268183303765 ? var_5 : 0)))))) ? (((((24785 ? (arr_2 [20] [i_0]) : var_4))))) : ((var_10 ? var_0 : (arr_5 [i_1] [i_1 + 2])))));
                var_16 = (arr_1 [i_1]);
                var_17 = ((!(((-((var_10 ? var_11 : (-127 - 1))))))));
            }
        }
    }
    var_18 = (((var_11 ? (((5107 ? var_7 : var_10)) : (min(var_0, var_5))))));
    var_19 = (min(var_19, (((-((((min(40750, var_10))) ^ (~var_6))))))));
    #pragma endscop
}

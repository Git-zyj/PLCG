/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((2035033530 & 1998339271621847999) <= ((((min(var_14, var_18))) ? (var_14 == var_17) : var_4))));
    var_20 = (!var_15);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 = ((var_11 ^ (((arr_3 [i_0] [i_0] [i_0]) + (min(5405, var_5))))));
                var_22 *= ((1998339271621847999 ? (arr_3 [i_0] [i_0 - 1] [i_0]) : (arr_3 [i_0] [i_0 - 1] [i_0])));
                var_23 = (((((min(var_14, 127))) ? (~var_6) : (~0))));
                var_24 = (((((+(((arr_4 [12] [i_1] [i_1]) ? 4 : 19))))) || (((((!(arr_5 [i_1]))))))));
            }
        }
    }
    var_25 = (((((((2064252095 ? var_0 : var_13))) ? var_6 : 2064252108)) | (((var_8 ? ((var_15 ? var_11 : var_2)) : 5384)))));
    var_26 |= (0 >= 6561260133806803022);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = ((((1 ? 1399689350 : var_7)) - 112));
                var_13 = ((2050989469 / (((0 ? (-5121051138276296908 / 1716695771) : 1073741823)))));
                var_14 = ((1 ? (max(2159706829287467972, (((3450084643 ? 127 : -3176330922192839180))))) : ((((-19251 != (arr_2 [i_0] [i_1 - 3])))))));
            }
        }
    }
    var_15 *= (((var_10 / var_2) || (var_5 + var_2)));
    var_16 = var_11;
    var_17 = ((max((var_2 || 46), (var_9 && 5452056088961049106))) ? ((0 ? 1 : 7278981467364787186)) : (!2243977827));
    #pragma endscop
}

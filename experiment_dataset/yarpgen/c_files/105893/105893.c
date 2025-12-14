/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(((((var_11 + 3) ^ (!15196952965492687963)))), (((var_5 | var_1) ? (((var_2 ? var_9 : var_15))) : (37393 | 3266741203916023564))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((!(arr_2 [i_0])));
                var_20 = (min(var_20, ((((195 << (var_8 - 146)))))));
                var_21 = ((arr_3 [i_0]) ? (max((((arr_0 [7]) ? (arr_0 [i_0]) : (arr_2 [i_0]))), (((27880 ? (arr_1 [4]) : (arr_3 [i_0])))))) : var_11);
            }
        }
    }
    var_22 &= (((((var_14 ? (var_15 ^ 1) : ((var_15 ? var_13 : -27881))))) ? (((var_14 >= 95) * var_3)) : ((81 ? (-32767 - 1) : (min(var_11, var_0))))));
    var_23 &= var_14;
    var_24 = (min(var_24, ((max((((((var_7 ? var_16 : var_1))) ? var_8 : (~-27889))), ((var_15 ? 0 : (((var_6 ? 15 : var_11))))))))));
    #pragma endscop
}

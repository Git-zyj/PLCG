/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 9007199254740991;
    var_21 = var_17;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (((((!(arr_0 [i_2 - 1]))) ? ((var_14 ? (arr_0 [i_2 + 2]) : (arr_0 [i_2 + 1]))) : (min((arr_0 [i_2 + 1]), var_8)))))));
                    var_23 = (min(var_23, ((((var_14 ? (arr_4 [i_1 - 2]) : 21))))));
                    arr_8 [i_0 - 1] [8] [i_1] [i_1] |= (0 == 1);
                }
            }
        }
    }
    var_24 = ((((min(((18446744073709551608 ? -40 : 1)), var_1))) ? ((((~-29) ? ((1478960073 ? var_13 : -9007199254740991)) : (var_2 & 823560960)))) : ((~(max(var_18, var_15))))));
    #pragma endscop
}

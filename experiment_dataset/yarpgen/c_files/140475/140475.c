/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(var_0, var_12))) ? 190 : ((134184960 ? -13 : var_7))))) ? (((((min(var_13, var_12))) ? ((var_14 ? var_8 : var_12)) : (-1 * var_1)))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (min(((24 ? ((1 ? (arr_2 [i_0]) : -16777216)) : (arr_3 [9]))), (--1)));
                var_18 = (min(var_18, ((max((((226 - 1183009246) - (978913588 / -4059716887505974116))), -1837387751)))));
                var_19 |= (((((((((arr_1 [i_1]) ? -3702165335394489671 : (-127 - 1)))) ? (-28251052 == var_3) : (((var_16 || (arr_5 [i_0]))))))) ? 8646911284551352320 : (((arr_3 [i_0]) ? (arr_0 [i_0]) : -1447003382))));
            }
        }
    }
    #pragma endscop
}

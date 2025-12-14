/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((2109695540 || (((4099264975645705718 ? var_16 : var_1))))) ? (-3 & -3) : ((((((var_14 ? -3 : var_12))) == ((var_17 ? var_16 : var_5)))))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_19 = (max(var_19, var_14));
        var_20 = ((min(8, (var_3 % var_2))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_21 = ((-110 < (arr_2 [i_1 + 2])));
        var_22 = (~var_11);
        arr_4 [i_1] = (((((8 ? var_6 : 4294967295))) ? (((-40 ? 4 : var_5))) : (arr_3 [i_1 + 4])));
        arr_5 [i_1] = ((58 ? (var_17 & var_16) : ((((arr_2 [i_1]) ? var_14 : (arr_2 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_10 [11] [11] = (((((arr_6 [i_2]) > 131071))) >> (var_6 - 95));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 20;i_4 += 1)
            {
                {
                    arr_16 [i_2] |= var_7;
                    arr_17 [i_4 - 3] [i_3] = (min(((((-1402618185 > 4294967287) < ((var_9 ? var_16 : var_16))))), ((-(arr_15 [i_2] [15] [15] [15])))));
                }
            }
        }
        arr_18 [14] = (min((arr_6 [i_2]), (min((arr_12 [i_2] [i_2]), (arr_12 [i_2] [i_2])))));
        arr_19 [i_2] = ((!((!((min(var_10, (arr_13 [i_2]))))))));
        arr_20 [5] = (min((arr_6 [i_2]), -328822350));
    }
    #pragma endscop
}

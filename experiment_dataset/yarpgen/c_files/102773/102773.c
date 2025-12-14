/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102773
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = ((((var_4 | (arr_1 [i_1 - 2])))) ? (((var_15 | (arr_1 [i_1])))) : (arr_5 [i_0] [i_0] [i_1]));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_0] [i_2] [i_0] = (min((min(-var_2, ((((arr_3 [i_0]) || var_13))))), ((var_11 & (var_11 | var_4)))));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_19 += ((-(min(((var_12 ? 1934863213746609740 : var_12)), (((-256 ? var_15 : 246)))))));
                        var_20 = (max(9290474972438261553, (min(3549213262374661544, var_14))));
                        arr_13 [20] [9] [i_2] [i_3] = (((arr_3 [i_2]) > ((var_11 ? var_1 : var_14))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_21 = var_9;
                        arr_17 [i_4] [i_2] [i_1 - 3] [4] [i_2] [i_0] = -256;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_22 = ((~(max((arr_14 [i_5] [i_2] [i_1] [i_0]), ((min(var_8, 262)))))));
                        var_23 = (min(((((-1934863213746609739 > 52) ? -var_6 : (max((arr_5 [i_1] [i_2] [i_5]), var_14))))), (max((11 / -1934863213746609717), 8))));
                        arr_20 [i_0] [i_1 - 1] [i_2] [i_0] = (min((max(var_2, var_6)), ((max((arr_11 [i_2] [i_2] [i_1 - 1] [i_5]), var_11)))));
                        arr_21 [i_5] [i_2] [i_2] [5] [i_5] = (-((((var_12 ? var_4 : var_5)) - var_15)));
                    }
                }
                arr_22 [i_0] [i_0] [4] = ((((arr_11 [i_0] [i_1 + 1] [i_1] [i_1 - 1]) | var_4)));
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_35 [i_6] [i_6] [3] [i_9] = (((1 >= (arr_9 [i_6] [i_8]))));
                        var_24 = 291236859;
                    }
                }
            }
        }
        var_25 = var_4;
        arr_36 [i_6] = 840353211320025984;
        var_26 = (((247 || 3289390780) - (39385 ^ 3684127784)));
    }
    #pragma endscop
}

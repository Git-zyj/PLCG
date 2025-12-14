/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_16;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (((((-(arr_1 [i_0]))))) + (min((-2192 - var_0), (arr_0 [i_0]))));
        arr_2 [i_0] = max(((((~2192) * (!-2192)))), (max(1, (arr_0 [i_0]))));
        arr_3 [1] = (!(!3357));
        var_22 -= ((((((min((arr_0 [8]), var_19))) ? (31396 % -31376) : (arr_0 [i_0]))) < (max((arr_0 [i_0]), (!-2192)))));
        var_23 -= ((((arr_1 [i_0]) == (((var_18 + 9223372036854775807) << (4441575788989759149 - 4441575788989759149))))));
    }
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_24 += (min(((((arr_6 [i_1 + 1]) % (arr_5 [i_1 - 1])))), (((arr_6 [i_1 + 1]) + var_18))));
        var_25 -= ((((((~(arr_6 [i_1])))) & (min((arr_6 [2]), var_18)))));
        var_26 = 34359738367;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_27 = (min(var_27, ((((((4441575788989759146 ? (((!(-32767 - 1)))) : (arr_8 [i_1 + 1])))) ? var_19 : (arr_4 [i_1]))))));

            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                var_28 -= 2626248241611866507;
                var_29 = var_14;
            }
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            var_30 = (min(var_30, ((((((((295592212 ? var_16 : 32767))) || ((!(arr_8 [7]))))) ? ((-(min(14005168284719792460, 1)))) : 4441575788989759146)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_31 = (min(var_31, (~-1184141607632412261)));
                        arr_21 [i_1] [i_1 + 1] [i_1] [i_4] = (min((min(1, (min(var_12, 0)))), (arr_11 [17] [i_4] [12] [i_6])));
                    }
                }
            }
        }
        var_32 *= 33554431;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_33 ^= ((-(arr_11 [i_7] [i_7] [i_7] [i_7])));
        var_34 = (((arr_17 [i_7] [i_7] [i_7] [i_7]) % var_8));
    }
    var_35 = (min((((((min(var_13, var_11))) >= 2626248241611866507))), (((((4441575788989759146 ? var_14 : var_5))) ? var_1 : ((max(var_5, var_15)))))));
    #pragma endscop
}

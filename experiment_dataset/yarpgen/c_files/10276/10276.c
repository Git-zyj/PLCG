/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((max((2147483647 % var_8), var_7)), (min(var_7, var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_15 = ((-((-24 ? 18158513697557839872 : 10729879878113554954))));
                    arr_9 [i_0] [0] &= 1456573185;
                    var_16 = (((var_9 ? ((4283988672 ? 10729879878113554926 : 27)) : (arr_8 [i_0] [i_1] [14]))));
                    var_17 = (arr_4 [6]);
                    var_18 = (((~(arr_5 [12]))));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_19 |= (((arr_8 [i_0] [i_0] [15]) ? (min((((arr_1 [12] [2]) ? 255 : 999780935720416825)), (arr_5 [i_0]))) : (min((arr_7 [i_1] [i_3] [i_3] [i_3]), 15104922119443988704))));
                    var_20 *= 11078;
                    var_21 -= ((((-(min(var_6, 3156840004)))) < (min((1713886379953184178 <= -8901379195885452175), (min(120259084288, 30))))));
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    var_22 = 9223372036854775791;
                    var_23 = (min(var_9, (((arr_3 [14] [i_1] [i_1]) / 4194304))));
                    var_24 = (((min(999780935720416825, (arr_6 [i_4] [i_1] [i_1] [i_0]))) >> (((min((((arr_0 [8]) - 281474975662080)), (((arr_12 [i_0] [1] [5] [i_4]) << (var_0 - 1870145677))))) - 7074839375908037171))));
                }
                var_25 = ((~((min((arr_8 [i_0] [i_0] [i_1]), (arr_8 [i_0] [i_1] [i_0]))))));
                var_26 = (min(var_26, ((((var_10 ? ((~(-127 - 1))) : var_7))))));
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_27 = (min(var_27, (arr_13 [11] [11] [16])));
                            arr_21 [i_0] [i_6] [i_5] [8] [i_0] = ((-(4157720236593084596 & var_2)));
                            var_28 |= (((min((((var_12 ? var_7 : (arr_3 [1] [i_1] [i_5])))), (min(var_11, 10729879878113554943)))) < ((((!13211566105589398323) << (16784640448091293130 - 16784640448091293112))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

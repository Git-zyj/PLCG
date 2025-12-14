/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-5497988067688648929 > -1519916704);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min(-1519916704, (((!(6080756263123710966 & 18188672688769233000))))));
                arr_8 [i_0] [i_0] [i_0] = 1;
                arr_9 [i_0] = ((((max(var_8, ((2517 ? 6072706444409389178 : 13590613052951264870))))) ? ((~(arr_1 [i_0 + 2]))) : (arr_6 [i_0 - 2] [i_0 + 2])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = (min((arr_5 [i_0] [i_0]), (((1589033947 <= ((~(arr_14 [i_2 + 1]))))))));
                            var_19 = (min(var_19, var_3));
                            arr_15 [i_3] [i_0] [i_0] [i_0 + 1] = (((((((var_11 * (arr_3 [i_2])))))) / (((arr_4 [i_0]) - (arr_2 [i_0 - 3] [i_0])))));
                            arr_16 [i_1] [i_1] [i_0] [i_0] = (((arr_11 [i_0] [i_0] [i_2]) ? var_11 : (((arr_6 [i_0 - 2] [i_2 + 1]) ? (~1) : (~-29072)))));
                            var_20 = (min(((max((arr_10 [i_0] [i_0] [i_0] [i_0]), 4294967295))), 6072706444409389178));
                        }
                    }
                }
            }
        }
    }
    var_21 = (((((63001 * (63000 > 16380)))) && -23293));
    var_22 &= ((((((4360746544254562565 ? var_11 : var_10)))) ? (max(var_5, 12985)) : (var_10 & -1519916702)));
    #pragma endscop
}

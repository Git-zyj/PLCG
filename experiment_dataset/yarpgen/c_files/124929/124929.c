/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((((-6310748194746383234 ? var_6 : ((173 ? 1151 : 7803))))) ? (((((var_1 ? 140737488355327 : var_7)) > (140737488355314 <= 82)))) : ((~(~1136308398)))));
    var_13 = (min(var_13, ((((((1890018345 ? (~var_9) : var_6))) * ((var_9 ? 140737488355319 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_2] = 140737488355327;
                            var_14 = ((-1382663284 <= (((-4957239216278671659 ? 13 : var_2)))));
                        }
                    }
                }
                arr_14 [i_0] [i_1] [12] = (((max(3582415968, var_5))));
                var_15 = var_1;
                var_16 = (min(var_16, ((((~(arr_5 [i_1] [i_0] [i_0] [i_0]))) + ((1702750004 ? -2147483631 : 805306368))))));
                var_17 = ((~((-(max(-1835501254, var_8))))));
            }
        }
    }
    #pragma endscop
}

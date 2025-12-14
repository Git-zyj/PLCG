/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_2, (max(var_4, var_8))));
    var_12 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = 105;
        var_14 = (((max((arr_2 [i_0] [i_0]), (((arr_1 [i_0] [i_0]) ? 32 : 3033037170))))) - -628622056643078079);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_15 = (max((((((max(1, -49))) && 3033037170))), (((!(arr_5 [i_0] [i_0] [i_2] [i_0]))))));
                    var_16 = ((!(arr_6 [i_1])));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = (((1 << 4171538246054274140) ? (!3280906587) : ((((arr_1 [i_2 + 1] [i_0]) <= (arr_6 [i_0]))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_17 = (max((((!1) + (min(3, -1965409143)))), (1261930126 && 9223372036854775807)));
        var_18 *= (min(1, (((var_3 * -1544) << (9223372036854775807 - 9223372036854775778)))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_12 [i_4] = ((var_9 ? (((-7126569526703358114 < 127) | 1)) : (max((((!(arr_8 [i_4] [i_4])))), ((var_3 ? 127 : 1))))));
        var_19 += ((((90 | (arr_10 [i_4])))) ? (((8965480496469324716 ? (arr_9 [i_4]) : 26))) : (((((arr_10 [i_4]) ? (arr_8 [i_4] [11]) : 2766664877906870306)) & (arr_9 [6]))));

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_20 *= (arr_15 [i_4] [i_4]);
                            var_21 = (max(16167358986007904622, (arr_14 [i_6] [i_7] [i_8])));
                        }
                    }
                }
            }
            var_22 *= 1;
        }
        var_23 = (!0);
        arr_25 [i_4] = (((1152441300097534555 != (min(303209608295214592, 9494864446713886999)))) ? ((7407271493722329633 ? 4294967275 : 1965409143)) : (max(((((arr_18 [i_4] [i_4] [i_4] [i_4]) == 117))), (1909569207 + var_4))));
    }
    #pragma endscop
}

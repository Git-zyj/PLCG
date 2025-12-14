/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_15 -= (max((((max(3929471150, (arr_1 [i_0]))))), (((arr_1 [i_0]) ? ((1173 ? var_11 : (arr_1 [8]))) : var_6))));
        var_16 += var_6;
    }
    for (int i_1 = 2; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_17 &= (max((((var_11 & (arr_3 [i_1])))), ((((-32767 - 1) ? 127 : 31)))));
        var_18 -= (max(var_12, (((arr_0 [i_1 + 1]) * (arr_3 [i_1 - 1])))));
        var_19 = 285561375;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_8 [i_2] [i_2] = ((var_5 == (arr_2 [i_2 + 2])));
        var_20 = (((210 ? 268435455 : 36028797018963936)));
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    arr_19 [i_3] |= ((!((min((min(750384001, (arr_4 [23] [23]))), 3186871821)))));
                    arr_20 [8] [i_4] [i_4] = (min(((268304384 ? (max(14513107588715008649, 819114889)) : ((var_4 ? var_10 : (arr_15 [i_5] [i_3] [i_3] [i_3]))))), var_12));
                    var_21 = ((((((!var_9) ? 3166973573 : (max(var_9, 4))))) ? (((((17 <= 17) && ((max((arr_18 [i_3 + 1] [8]), 3166973573))))))) : ((-var_0 ? (max(3186871836, var_8)) : var_2))));
                }
            }
        }
    }
    #pragma endscop
}

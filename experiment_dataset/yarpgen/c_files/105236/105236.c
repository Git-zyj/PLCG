/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_6;
    var_17 = (max((max(((0 ? var_10 : var_9)), 675019735)), ((max(var_3, var_14)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (((((arr_1 [i_0] [i_0]) > -675019736)) ? (((arr_0 [i_0] [i_0]) ? var_13 : 675019737)) : (arr_0 [i_0] [i_0])));
        var_19 = ((!(arr_0 [i_0] [i_0])));
        var_20 ^= (arr_1 [i_0] [i_0]);
        arr_2 [i_0] = 7;
        var_21 |= (var_3 % var_1);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_22 &= (-675019736 * 1);
        var_23 = (~0);
        var_24 = 138;
        var_25 = (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_26 = ((((min(-9183, ((max(var_8, 72)))))) ? (((!var_11) | (min((arr_7 [i_2]), -267460678530346023)))) : ((((!(var_12 && 178)))))));
        var_27 = ((((((675019728 <= (arr_6 [i_2] [i_2])) || 860)))));
        var_28 *= var_2;
        arr_8 [i_2] [i_2] |= ((((((var_11 ^ 1) ? (((~(arr_7 [i_2])))) : ((76 ? (arr_5 [i_2] [i_2]) : var_15))))) ? ((min((min((arr_7 [i_2]), var_8)), -17))) : (arr_5 [20] [2])));
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 17;i_5 += 1)
            {
                {
                    arr_19 [6] [i_4] [i_5] [i_4] = (min((((max(var_3, (arr_13 [i_3]))))), ((max(((min(115, 9191))), 1208550157)))));
                    var_29 ^= (min(24900, (max((((var_12 ? (arr_12 [i_4]) : 1))), (max(var_0, var_6))))));
                }
            }
        }
        var_30 = (!-30041);
    }
    #pragma endscop
}

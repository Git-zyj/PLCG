/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            var_20 = (min(var_6, (((((max(-15503, var_2))) != 1)))));
            var_21 = ((~(-15526 || var_14)));
            var_22 = ((-((var_14 ? (arr_4 [i_1 + 1] [i_1 - 1]) : 1))));
            var_23 = ((~((((min((arr_2 [i_0]), -583091360))) ? 84 : ((var_3 ? 15523 : var_5))))));
            var_24 = 15503;
        }
        var_25 = (min(var_25, ((min((((~(!15496)))), 15510)))));
        var_26 *= ((max(9223371899415822336, var_3)));
        arr_6 [1] [5] = min((var_15 + var_14), (!116));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_27 = ((((arr_8 [i_0]) ? 21 : (!var_18))));
                    var_28 = min(((9223372036854775807 ? 32714 : 1)), ((1 ? (((!(arr_8 [5])))) : (((var_9 && (arr_9 [i_2] [10])))))));
                    arr_13 [9] [i_3] [2] [i_0] = ((((max(1, (~62)))) ? (((var_17 % 32821) % (~var_4))) : ((((!((min(1, -61)))))))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_16 [i_4] = min((min(-9223372036854775807, -1)), 568910573);
        var_29 = (max(var_29, var_19));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    var_30 = ((~(arr_20 [i_5] [i_7])));
                    var_31 = ((((-15500 && ((max(1177152739, -63)))))) < (min(((min((arr_22 [i_5]), var_14))), (-102 * var_1))));
                    var_32 = (min(62, (max((arr_19 [i_5]), (arr_19 [i_5])))));
                    arr_25 [i_5] = var_4;
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = (min(var_21, (!508)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = -860904084;
        arr_3 [6] &= ((!6642) ? (var_4 != var_5) : (~2009361941251587416));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            var_22 += ((min((arr_6 [i_1] [i_2 - 1] [i_2 - 1]), 3189852289)));
            var_23 = 3446221866;
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            arr_12 [i_1] = var_4;
            var_24 = ((!(((-((2828561448 ? var_17 : (-127 - 1))))))));
            arr_13 [18] = (((0 ? 64001 : 3189852289)));
            arr_14 [i_1] [i_1] = ((-(!860904084)));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_25 *= ((((((arr_23 [i_5] [i_5 - 1] [i_5 + 2] [i_5] [i_5 + 2]) % -2913298899339034425))) ? (min(1531195025, 4294967295)) : (arr_6 [i_5] [i_5 + 1] [i_5 - 1])));
                            arr_28 [i_4] = ((var_10 % ((((54318 ? var_16 : -860904084)) + ((((-127 - 1) < var_12)))))));
                        }
                    }
                }
            }
            var_26 = (var_4 ? ((1 >> (var_15 - 39269))) : ((((!(arr_15 [i_1 + 2]))))));
        }
        var_27 -= ((~(!4294967295)));
    }
    #pragma endscop
}

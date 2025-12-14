/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 6160790468321583586;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [14] = 65535;
                        var_19 = (max(var_19, ((((((-(max((arr_7 [i_3] [i_2] [i_0]), 8589934591))))) ? (min((arr_1 [i_1]), 12285953605387968029)) : ((max((((var_11 ? var_0 : var_4))), (((arr_7 [i_0] [i_1] [i_1]) ? var_4 : -1418970706507510926))))))))));
                        var_20 -= ((12285953605387968045 ? (((var_10 ? var_16 : (arr_5 [i_1] [i_2] [2])))) : (((arr_4 [i_3 - 3]) ? (arr_4 [i_3 + 1]) : var_2))));
                    }
                }
            }
        }
        arr_12 [i_0] = (arr_3 [i_0]);
        var_21 &= ((-((max(1, (max(64, -125)))))));
        var_22 = (max((((!(arr_2 [i_0] [i_0])))), (arr_10 [20])));
    }
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_23 = (((((max((!var_0), var_1)))) / -var_8));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_4] [i_4] [i_6] = ((-(26075 - 12285953605387968018)));

                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_24 = var_13;
                        arr_25 [i_5] [i_5] [i_4] [i_7] [i_4] [i_5] = (!16);
                        arr_26 [i_6] |= (!var_11);
                        var_25 = ((((!((min(var_17, -47))))) ? ((var_5 ? var_17 : (arr_18 [i_6 + 1] [i_7] [i_4]))) : (max(18446744073709551615, (arr_17 [i_4])))));
                        var_26 = (((~4046) - var_16));
                    }
                }
            }
        }
    }
    var_27 = var_9;
    #pragma endscop
}

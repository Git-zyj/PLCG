/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(min(var_2, (24174 / 1518781992)))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_17 = ((((max((var_5 / var_7), var_9))) ? var_6 : ((-10618 ? 2617017371 : 2097152))));
        var_18 = (((((arr_0 [i_0 - 1] [i_0 - 2]) ? 1023 : (arr_0 [i_0 - 3] [i_0 - 2]))) < (((arr_0 [i_0 - 2] [i_0 - 1]) / 4294967295))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_19 = 1023;
            var_20 = (((arr_0 [i_1] [i_2]) < var_7));
        }
        var_21 = 59;
    }
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_18 [i_6] [i_5] [i_3] = (max(((max(((-(arr_4 [i_6]))), (max((arr_10 [i_5]), var_8))))), (max(((6428265683881723450 ? var_0 : 8960461364405488886)), var_15))));
                        var_22 = (max((min((max(9134030512985828738, 3496034321)), ((min(20, 4294967272))))), (((((((arr_0 [i_3] [17]) / var_12))) ? ((var_13 ? var_4 : 1)) : (arr_16 [i_4] [i_4] [i_5] [i_4] [i_3] [i_3]))))));
                        arr_19 [i_6] [i_5] [i_4] = (((max((arr_8 [i_3] [i_4]), 0))) ? ((((max(var_6, 15441))) ? ((115 ? 1213907320 : var_11)) : 127)) : ((var_10 ? (arr_12 [i_3] [i_4] [9] [i_6]) : 4325)));
                        var_23 = 4294967272;
                    }
                }
            }
        }
        var_24 = (~var_5);
    }

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_25 = var_1;
        var_26 = ((!((((arr_21 [i_7]) ? (((min(var_7, var_5)))) : (max(2047, 1023)))))));
        var_27 = ((((((!var_15) ? (((var_8 ? var_7 : (arr_21 [i_7])))) : (max(10617, 5))))) && ((((32738 < var_5) ? (((var_15 ? var_9 : 32738))) : (((arr_20 [i_7]) ? var_9 : 3609982104)))))));
        var_28 = (min(4326833909624422172, 10619));
        var_29 = (min(1017248511, var_15));
    }
    #pragma endscop
}

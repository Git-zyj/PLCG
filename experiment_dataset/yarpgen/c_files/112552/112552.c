/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_15, ((min(var_6, var_1)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((((!((max(4095, var_13))))) ? var_9 : 55714));
        var_19 = (max(var_19, (((+((((((arr_0 [6]) ? 88473994 : var_5))) ? ((var_0 ? 3275185284 : (arr_2 [i_0]))) : (!var_4))))))));
        var_20 = (~(arr_0 [i_0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = (!4095);

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_22 = 4097;
            arr_9 [i_1] [i_2] = (((((64 ? 9 : var_1))) ? (arr_5 [i_2]) : (((arr_3 [14]) ? var_12 : var_1))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_23 = (((arr_7 [i_1]) ? ((96 ? 247 : 4294967295)) : var_6));
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_24 = (min(var_24, ((((!var_12) ? (arr_3 [i_5]) : var_16)))));
                            arr_23 [i_1] [i_3] [i_3] [i_5] [i_6] = (((arr_20 [i_6] [i_4] [i_4 + 1] [i_4 - 1]) != var_13));
                            var_25 = (min(var_25, (((!(arr_21 [i_6] [i_5] [16] [16] [i_1] [i_1]))))));
                            var_26 = var_9;
                        }
                    }
                }
            }
        }
        var_27 = (min(var_27, 64));
    }
    var_28 = (max(var_28, ((((((((min(137, var_4))) ? (!49793) : (64 & 15222007783682669054)))) ? (((var_2 ? (!var_3) : (var_13 >= var_13)))) : var_4)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((((var_0 ? var_6 : var_4))) ? var_2 : ((var_12 ? (((max(var_14, var_13)))) : 1125899906842623))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_19 = (max(var_19, (((~((-((106 ? var_11 : var_2)))))))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_7 [15] [i_2] [i_0] [i_2] = ((var_15 == ((-(((arr_3 [i_1]) ? var_0 : (arr_5 [i_2] [i_2] [i_2])))))));
                arr_8 [i_1] [i_1] [i_0] [i_1] = 106;
                var_20 = (min((min(64978, var_14)), ((max((min(106, var_7)), (arr_2 [i_2] [i_0]))))));
                arr_9 [i_0] = (((-127 - 1) ? 256 : 271));
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {

                for (int i_4 = 4; i_4 < 21;i_4 += 1)
                {
                    var_21 = ((106 ? 80 : 3609123160));
                    var_22 = (arr_11 [i_0] [i_0] [i_4]);
                    arr_14 [i_0] [i_1] [i_0] [i_4] = ((!((min(var_8, 558)))));
                }
                var_23 = (-4278190080 && var_11);
            }
        }
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            var_24 = var_10;
            arr_19 [i_0] [i_0] [i_5] &= ((((arr_15 [i_0] [i_5] [i_5 + 2]) < ((64978 ? (arr_6 [i_5]) : 3792749273)))) ? (-43 == 1) : (min(((240 ? 276 : (arr_17 [i_5]))), (((!(arr_1 [i_5] [i_5])))))));
        }
        var_25 ^= (arr_12 [12] [i_0] [i_0] [i_0] [i_0]);
    }
    var_26 = var_11;
    var_27 = (((max(((var_13 ? var_4 : 4278190080)), ((max(var_14, var_9))))) + (((33449 ? 36878 : 52393)))));
    var_28 = (max(var_28, (((!((min(var_12, ((max(var_12, var_0)))))))))));
    #pragma endscop
}

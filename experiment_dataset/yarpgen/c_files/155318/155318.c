/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((183 ? var_8 : ((-1 ? ((var_1 ? var_13 : 14)) : var_8))));
    var_15 = var_8;
    var_16 = (!var_8);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 -= var_10;
        var_18 = ((-(~var_2)));
        var_19 = (max(var_19, (((-17939 ? 241 : 241)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_20 = var_12;
        arr_6 [i_1] [i_1] = ((((((~241) ? ((var_11 ? 253 : 10)) : var_10))) ? var_11 : 211));
        arr_7 [i_1] = var_4;
        arr_8 [i_1] = var_10;
        var_21 = (max(var_21, ((((((var_10 ? 7 : var_13))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_22 = (((((-((var_11 ? var_3 : 17954))))) ? (((14 ? var_7 : (-9223372036854775807 - 1)))) : (((var_3 ? (~12288) : -28443)))));
        arr_11 [i_2] [i_2] = ((((5835958321745599012 ? var_12 : 8268))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (((0 ? 241 : 240)));
        var_23 = ((var_10 ? (!17954) : var_11));
        arr_16 [i_3] = var_1;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((-28443 ? 7497 : -1));
                            arr_29 [i_3] [i_3] = (!var_0);
                        }
                    }
                }
            }
            arr_30 [i_3] = (~8268);
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_24 &= (((((var_8 ? -var_3 : var_9))) ? ((2761024977911928263 ? 23045 : -28444)) : (!13318)));
            var_25 *= ((15 ? (((var_5 ? var_4 : 1))) : ((255 ? var_6 : (!1)))));
        }
        var_26 = (!-4259024747304065004);
    }
    #pragma endscop
}

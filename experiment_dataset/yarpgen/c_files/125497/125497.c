/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_11, ((2048319352 ? var_14 : var_13))))) ? ((((var_18 ? var_5 : var_14)))) : var_13));
    var_20 = var_4;
    var_21 -= ((var_5 ? var_18 : 1024));
    var_22 = 1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_23 = ((var_7 ? 10016 : var_10));
            var_24 = (((arr_0 [i_0 - 1]) ^ 2048319352));
            arr_4 [i_0] [i_1] = ((1526619222125604217 ? 2048319352 : 8189957681201431136));
            var_25 = 1;

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {

                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3 + 2] = (~1);
                    var_26 = ((-(~var_14)));
                    var_27 = (-3343505115698263770 & (7537764293688110055 & 0));
                }
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    var_28 = (1 & 1);
                    var_29 |= (((var_5 ? var_6 : (arr_3 [i_0] [4] [i_0]))));
                }
                var_30 = (!var_1);
            }
            for (int i_5 = 1; i_5 < 19;i_5 += 1)
            {
                var_31 = 1;
                var_32 |= ((1 ? (~1073741823) : (~var_15)));
                var_33 |= (-(-2104867845872685458 / 1073741823));
            }
        }
        var_34 = 4294967295;
        var_35 = ((1 ? (arr_8 [i_0] [i_0] [i_0] [i_0 - 1]) : (arr_8 [i_0] [i_0] [i_0] [i_0 - 1])));
        var_36 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        var_37 = (((arr_15 [i_6] [i_6 - 1] [i_6] [i_6 - 3]) ? var_9 : var_2));
        var_38 = (~(arr_10 [i_6] [i_6 + 4] [i_6 - 1] [i_6 + 4]));
        var_39 = (min(var_39, (((~(!var_5))))));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_40 |= ((1633097213652880300 ? var_6 : 27770));
        arr_23 [i_7] = max(1073741823, (13 + 63));
        var_41 = (((max(var_14, (1266365599 >= var_17)))) ? (((var_11 ? var_8 : 13959))) : ((max(-4605, 1972648376))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((var_9 ? var_17 : -4405943869744565641));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_19 = (min(var_19, (((var_6 ? ((((var_15 ? var_2 : var_10)))) : var_4)))));
                        var_20 = (((13700295406175722141 ? 30929 : 2147483647)));

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            arr_15 [i_1] [i_1] [14] [i_1] [i_0] = var_8;
                            var_21 = ((var_14 ? ((var_2 ? var_9 : ((var_2 ? var_17 : var_4)))) : var_14));
                            arr_16 [i_0] [i_1] = var_9;
                        }
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_22 = (min(var_22, (((var_14 ? ((-((var_5 ? var_15 : var_8)))) : (((var_13 ? var_4 : var_13))))))));
                            var_23 = 30925;
                            var_24 &= ((!((!(((var_12 ? var_12 : var_2)))))));
                            var_25 = ((var_0 ? (((!var_4) ? var_16 : var_15)) : (((((var_3 ? var_15 : var_15))) ? var_12 : ((var_2 ? var_7 : var_7))))));
                        }
                        var_26 = ((-9223372036854775807 ? 9223372036854775807 : (((-127 ? var_1 : 2617963352)))));
                    }
                    var_27 = var_1;
                    var_28 &= var_10;
                }
            }
        }
    }
    var_29 = ((var_15 ? (((var_17 ? var_5 : var_7))) : (((var_15 ? ((96 ? var_0 : 712960982)) : ((var_5 ? var_2 : var_2)))))));
    var_30 = ((var_11 ? ((var_3 ? (!5802252544012849395) : ((var_2 ? var_13 : var_17)))) : var_12));
    #pragma endscop
}

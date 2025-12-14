/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_2 ? (!1964429999) : (((!(((var_12 ? var_6 : var_10))))))));
    var_18 = (((((~((var_7 ? var_2 : var_15))))) / ((~(~var_6)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 -= var_13;
        var_20 += -4278190080;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_6 [6] &= var_0;
            var_21 = ((-var_7 * var_8) + (((var_12 - var_1) + var_15)));
            arr_7 [i_1] [i_1] [i_2] = 11558357557707483076;
            arr_8 [i_1] [i_2] = var_2;
            var_22 = var_9;
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_3] [i_3] = 7389966162288968449;
            var_23 = -4215883218;
            var_24 *= var_8;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_25 = (max(var_25, var_12));
            var_26 = ((-var_5 <= ((((var_0 - var_8) >= (((var_7 ? var_2 : var_4))))))));
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_19 [i_1] [i_1] = (((var_5 > var_14) ^ (((!var_0) ? var_2 : -var_11))));
            arr_20 [6] [i_1 - 1] [i_1 - 1] = (((var_12 ? var_7 : var_7)));
            var_27 *= var_0;
        }

        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_28 = var_12;
            var_29 |= ((((!(~6888386516002068539))) ? (((var_12 || (((var_3 ? var_4 : var_6)))))) : (~var_16)));
        }
        arr_25 [i_1] = ((~(((var_9 > (!var_4))))));
        arr_26 [i_1] [i_1] = var_4;
        var_30 |= ((((((var_11 ? var_9 : var_5)) ^ var_16)) >> (var_9 - 2093747266)));
    }
    var_31 = -var_16;
    var_32 += -var_2;
    #pragma endscop
}

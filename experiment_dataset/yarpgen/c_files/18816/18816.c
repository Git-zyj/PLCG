/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_18 = 27113;
        var_19 |= ((var_7 ? 17 : (arr_0 [i_0] [12])));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_20 = (max(var_20, (!238)));
            arr_4 [0] [0] [i_0] = (-(arr_2 [i_0] [i_0 - 1]));
        }
        var_21 = (((~38423) ? (arr_1 [i_0 - 2]) : ((-8713064534274539276 ? 37 : -9536))));
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        var_22 = ((-(!1)));
        var_23 = (((max(-0, (max((arr_0 [16] [20]), -15223))))) ? (((max(12, 1)))) : ((var_2 ? (max(var_13, 7176701620554646450)) : 17)));
        var_24 = (((arr_6 [i_2]) != (max((arr_2 [i_2] [i_2]), (((-7176701620554646450 ? -912397068675289386 : (arr_3 [i_2] [i_2] [14]))))))));
        var_25 = 0;
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        var_26 = ((((426328372 ? (arr_7 [2]) : (arr_3 [i_3 + 1] [i_3 - 2] [0]))) != ((max(27113, (arr_3 [i_3] [i_3 - 3] [22]))))));
        var_27 = (arr_2 [i_3] [i_3]);
        var_28 = ((((max(((var_15 ? -6981650638806433050 : 1)), -41))) ? (((min((arr_8 [i_3 - 2]), (arr_8 [i_3 + 1]))))) : ((9 ? ((((arr_1 [i_3 - 3]) + 1))) : ((-9536 ? var_17 : var_15))))));
    }
    for (int i_4 = 3; i_4 < 9;i_4 += 1)
    {
        var_29 = ((arr_9 [i_4]) ? ((min(6146, 45009))) : var_6);
        var_30 ^= ((!((min(var_2, (((!(arr_0 [10] [22])))))))));
        arr_13 [5] = ((((max((arr_0 [i_4 - 2] [16]), (arr_0 [i_4 - 2] [12])))) ? (((!(arr_5 [i_4 + 1])))) : (((!(!6132))))));
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_31 = (max(var_31, (arr_0 [i_5] [i_5])));
        var_32 = -13130;
        var_33 = (max((0 >> 17), (((arr_0 [i_5] [i_5]) ? -9521 : ((var_4 ? var_9 : var_7))))));
        var_34 = ((-0 ? ((((!(arr_2 [i_5] [i_5]))))) : (((arr_2 [i_5] [i_5]) & var_13))));
    }

    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_35 = max(-27519, (min((arr_3 [i_6 + 2] [i_6] [i_6]), (arr_17 [i_6]))));
        arr_19 [i_6] [i_6] = ((-(((var_15 ? 1 : 65535)))));
    }
    var_36 = -var_6;
    var_37 = (((((((min(var_10, var_0))) ? ((216 ? 6146 : var_15)) : 6147))) ? var_13 : var_7));
    #pragma endscop
}

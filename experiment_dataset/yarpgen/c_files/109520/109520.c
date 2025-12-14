/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((var_3 % (var_12 != var_6))), var_13));
    var_20 = var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_21 = ((~(arr_0 [i_0])));
        arr_2 [i_0] [i_0] = (arr_1 [i_0]);
        var_22 = ((var_9 * (((1 > (arr_0 [i_0]))))));
        var_23 = (max(var_23, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (((31744 ? var_18 : 1091273666))))))));
        arr_3 [i_0] = -15732390408959727512;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_24 -= var_4;
        var_25 = ((~1995) ? (((max(1406756815, -1091273666)) - (((-(arr_5 [i_1] [i_1])))))) : 32640);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_26 = (min(var_26, 1406756802));
        arr_8 [i_2] = (arr_7 [i_2]);
        arr_9 [i_2] = (((((~(~3040989460)))) ? ((min((((arr_0 [i_2]) ? 12132911 : 114)), (((arr_6 [i_2]) ? var_16 : (arr_4 [i_2] [i_2])))))) : (((((1 ? (arr_4 [i_2] [i_2]) : (arr_0 [i_2])))) ? (2714353664749824096 * var_2) : ((var_9 ? (arr_5 [i_2] [i_2]) : var_3))))));
        var_27 = 3722476353;
    }
    var_28 = (max(var_28, ((((((!(~var_16)))) * var_13)))));
    #pragma endscop
}

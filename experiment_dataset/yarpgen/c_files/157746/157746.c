/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157746
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_13 ? 1 : var_13)), (min(var_13, 14181))));
    var_18 = var_0;
    var_19 = ((26215 ? ((((min(var_11, var_13))) ? (((5919609557946405901 ? -1074838742548124592 : 55))) : var_4)) : var_1));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_20 = ((!((min(((min(var_15, 1))), var_13)))));
        var_21 = ((((((((var_16 ? var_4 : 0))) ? 1 : (min(-8712, var_12))))) ? ((min(((1074838742548124587 ? 1007234361006988789 : var_10)), 154))) : (min(0, (min(var_4, -25048))))));
        arr_2 [i_0] = 65;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_22 += 1612492078;
            arr_10 [i_2] = (((18446744073709551615 <= var_15) == ((var_9 ? var_13 : var_13))));
            var_23 |= ((-1216490188 ? var_1 : var_10));
            var_24 = ((208 ? 43733 : -11595));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_19 [i_5] [i_5] = (((var_5 ? 80 : var_14)));
                        var_25 -= ((~((1005860345 ? var_15 : 176))));
                    }
                }
            }
        }
        arr_20 [i_1] = var_13;
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_26 = var_12;
        var_27 = ((((((((256 ? var_10 : 11594))) ? var_2 : (min(1, var_12))))) ? (!var_15) : var_5));
    }
    var_28 = (((((1 ? 0 : 1174327294822129115))) ? (var_3 - var_2) : var_6));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -8625003514449027162;
    var_18 = (min(((var_9 ? var_5 : ((var_4 ? 3717 : var_5)))), var_7));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = -var_11;

        for (int i_1 = 2; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [9] = (((((((!(arr_0 [i_0] [i_1 - 1])))))) && ((min((var_7 || 0), (arr_1 [i_1 - 2] [i_0]))))));
            var_19 = ((-(~32)));
        }
        for (int i_2 = 2; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_20 = arr_8 [i_0] [i_0] [i_0];
            var_21 = ((var_10 || (((-((max(var_7, 17))))))));
            var_22 = (min(var_22, (((((((~var_3) ? (((arr_8 [i_2] [i_0] [i_0]) & -2062089160)) : -6))) ? var_0 : (max((arr_7 [i_2 - 1]), var_4)))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_23 = (max(var_23, (((~(arr_6 [i_2 - 2] [i_2 + 1] [i_2 + 1]))))));
                var_24 = (0 || 6312844556331988647);
                arr_13 [i_3] = ((((var_0 - (arr_0 [i_2 + 1] [i_3]))) & 171));
                var_25 = 1332616870;
                var_26 = (-(1 || -26052));
            }
            var_27 &= arr_11 [i_2];
        }
        for (int i_4 = 2; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] [i_0] = ((-((6 ? (arr_0 [i_0] [i_0]) : (arr_11 [i_0])))));
            var_28 = (max(var_28, (((var_12 ? (((((var_4 << (262143 - 262141)))))) : ((var_7 ? (~532676608) : -1)))))));
        }
    }
    #pragma endscop
}

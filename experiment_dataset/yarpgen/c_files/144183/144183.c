/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144183
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(var_0 % 238)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_17 = ((-1 && (((1 ? 7080548758527880419 : 1)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = 1;
            var_18 = -63228;
        }
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        var_19 = ((1 ? 123 : -1));
        var_20 = var_0;
        var_21 = (~((((max(1400474711, (arr_4 [1] [12] [12]))) != (arr_2 [24])))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_22 = ((((arr_6 [i_3]) ? (arr_6 [i_3]) : (arr_6 [i_3]))));
        var_23 = var_3;
        var_24 = ((-(max(1, (arr_9 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_25 = (-1 ? var_14 : 1);
            arr_14 [i_4] [4] = 8;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            var_26 = 44039;
            var_27 = 1400474711;
        }
        var_28 = (((((-(arr_8 [i_4])))) ? (((-(arr_3 [1])))) : (1695995449 / 1610612736)));
        var_29 = (arr_6 [6]);
        var_30 = ((((((arr_8 [i_4]) ? ((max((arr_13 [7] [i_4]), 1))) : ((43 ? 23 : var_1))))) ? (-1 || var_3) : 18446744073709551615));
        var_31 = (((max(-18446744073709551615, var_4))) ? (((!((max(1, -3)))))) : ((max((((1591551736644286422 < (arr_15 [4] [i_4] [2])))), 65172))));
    }
    var_32 = ((-((var_11 ? (var_4 * 1250075702) : var_3))));
    var_33 = max(var_11, -2009722091);
    #pragma endscop
}

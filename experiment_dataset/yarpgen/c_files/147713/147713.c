/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(max(((var_17 ? var_6 : var_13)), var_1))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((max((min(628232319022880435, 50563)), (~var_12))) | (((+(((arr_0 [i_0]) ? var_3 : var_16)))))));
        var_20 = (max(var_20, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        arr_3 [i_0] |= ((~((~(arr_1 [16])))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_21 = (arr_0 [i_0]);
            var_22 -= (((max(17818511754686671180, (arr_1 [i_0]))) - ((((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_1]))))));
            var_23 = (arr_1 [i_0]);
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (arr_6 [i_2] [i_2] [i_2]);
        var_24 += ((((((arr_8 [i_2]) ? (arr_5 [i_2]) : 1))) ? var_11 : 22865));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            arr_14 [i_4] [i_4] [i_4] = ((~(((arr_1 [i_4 + 1]) ? -0 : (arr_7 [i_3])))));
            var_25 = (min(var_25, ((((arr_7 [i_3]) ? ((((arr_7 [i_3]) <= (arr_10 [i_4 + 1] [i_4 + 2])))) : (arr_7 [i_4 + 2]))))));
            arr_15 [i_3] [i_4] [i_4] = ((~(arr_5 [i_4 + 1])));
            var_26 = var_12;
            arr_16 [i_3] [i_3] [i_4] = ((17818511754686671198 >> (arr_7 [i_4])));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_27 = (arr_13 [i_3]);
            arr_20 [i_3] [i_5] [i_5] = ((+(((arr_17 [i_3] [i_3] [i_3]) ? (arr_19 [i_5] [i_3] [i_5]) : (((arr_17 [i_3] [i_5] [i_3]) ? var_15 : (arr_17 [i_3] [i_3] [i_3])))))));
        }
        var_28 ^= ((((max(var_16, var_10)) ? (arr_4 [i_3] [i_3]) : var_2)));
        arr_21 [16] = ((-((var_9 ? (-127 - 1) : var_14))));
        arr_22 [i_3] = arr_8 [i_3];
    }
    #pragma endscop
}

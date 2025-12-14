/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            var_18 -= ((((arr_2 [i_0] [i_1 - 2]) ? 0 : 65535)));
            var_19 = ((var_0 || (arr_0 [i_1 - 4])));
        }
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                var_20 = ((2152287702903330336 ? 162795538 : 162795555));
                var_21 = (((arr_3 [i_2 - 1] [i_2] [i_2]) ? (arr_3 [i_2 - 1] [i_0] [i_0]) : (arr_3 [i_2 + 2] [i_0] [i_0])));
                arr_10 [2] = ((var_10 ? (arr_9 [i_3] [i_2 - 2] [i_0] [15]) : 0));
                var_22 = (max(var_22, var_6));
            }
            arr_11 [i_0] = (arr_2 [i_2 - 1] [i_2 - 2]);
            var_23 += (arr_1 [i_2 + 1] [i_2]);
            var_24 = (-162795538 - 5);
        }
        var_25 = var_1;
        var_26 += (-162795538 / 39062);
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        var_27 *= (arr_15 [i_5] [i_6 - 1] [21] [i_6 - 1]);
                        var_28 *= (arr_9 [i_4] [i_4] [i_4 - 2] [i_4 - 4]);
                        var_29 = var_17;
                        var_30 ^= ((var_8 | (arr_2 [i_5] [i_6 - 1])));
                        var_31 = ((60755 & (arr_17 [i_6 + 1] [i_5])));
                    }
                }
            }
        }
        var_32 += (arr_6 [i_0] [0] [i_0]);
    }
    var_33 -= (((99 % var_17) ? (((var_9 || var_10) ? var_12 : ((-1002326434543292767 ? -6 : 12)))) : ((max((var_4 == 162795538), (min(39062, 249)))))));

    for (int i_7 = 3; i_7 < 8;i_7 += 1)
    {
        arr_23 [i_7 - 1] = ((arr_5 [i_7 - 1] [i_7 + 2] [i_7 + 3]) ? ((((max(19156, (arr_17 [i_7 + 1] [i_7])))))) : ((var_17 ? 65532 : (arr_13 [i_7 + 1]))));
        var_34 &= (((((-987713477 ? var_7 : (arr_13 [i_7 + 2])))) ? 162795555 : (max(-402190233, (((var_4 ? var_7 : 94)))))));
        arr_24 [i_7] [i_7 - 1] = (((((arr_14 [i_7 + 2]) || 65535)) ? (arr_12 [i_7 + 1] [i_7 - 3]) : 2147483644));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    {
                        var_35 = ((((arr_21 [i_10 - 1]) * 18446744073709551611)));
                        var_36 = (max(var_16, (min(var_13, var_16))));
                        arr_34 [i_7] [i_9] [i_9] [i_10] = (((var_13 ? 3040094438293928679 : (arr_19 [8] [i_7 + 3] [i_10 - 1] [i_10 - 1]))));
                    }
                }
            }
        }
        arr_35 [i_7] = ((var_5 * (arr_8 [i_7 + 2] [i_7 - 2])));
    }
    var_37 ^= (((1 ? 18446744073709551604 : -162795538)));
    #pragma endscop
}

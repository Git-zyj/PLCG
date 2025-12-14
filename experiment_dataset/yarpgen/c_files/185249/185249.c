/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((5943799541401832367 > 1) <= 9541));
        var_10 = 9223372036854775807;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_11 *= var_5;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_12 = ((+(((arr_8 [i_4] [i_3]) ? -9544 : -6562263395713127784))));
                        var_13 ^= (((((var_9 + 2147483647) >> (((arr_8 [2] [i_3]) - 3476463803074564686)))) > -9540));
                        var_14 = (arr_4 [i_2] [12]);
                    }
                }
            }
        }
        var_15 = ((~((0 << (556852144 - 556852114)))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_16 -= (min((~var_8), (-127 - 1)));
        arr_16 [13] [i_5] = (max((-9554 > -1), (2847 & 18446744073709551615)));
        var_17 = (((min((arr_14 [i_5]), 1)) ? (!var_9) : -var_8));
        var_18 = var_8;
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                {
                    arr_26 [i_6] [i_6] [i_6] [i_6] = (max(((-9532 ? (arr_17 [i_6] [i_8]) : (arr_1 [i_6] [i_6]))), -30859));

                    for (int i_9 = 2; i_9 < 17;i_9 += 1)
                    {
                        arr_29 [i_6] [i_7] [0] [i_9] |= ((~(min((max(6210202747959760984, 510)), ((min(var_3, var_6)))))));
                        var_19 = ((((((min(12739104257889293435, var_9))) ? (!-2847) : (arr_24 [i_6] [i_6] [i_8 - 2] [i_6]))) == ((((2841 < (((arr_23 [i_6] [16]) * 7790512178357186337))))))));
                        var_20 = (((arr_17 [i_9 - 1] [i_9 - 1]) <= ((((((~(-127 - 1)))) ? var_2 : (50334 ^ var_1))))));
                        var_21 -= ((3777352390582948046 ? (((arr_20 [i_8 + 1]) & (arr_1 [i_9 + 1] [i_9 + 1]))) : (859287101 >= 0)));
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_33 [i_10] [i_8] [i_8] [i_7] [i_6] = ((((max((arr_30 [i_6] [i_8 - 3] [i_10] [i_10] [12]), 0))) ? var_6 : (~-3711711749319128308)));
                        arr_34 [i_7] [i_7] [i_7] [i_7] = var_7;
                    }
                    var_22 = (max((~4294967295), 199));
                    var_23 += var_1;
                }
            }
        }
    }
    var_24 = var_2;
    #pragma endscop
}

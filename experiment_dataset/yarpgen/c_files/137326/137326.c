/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 13653982590434273583;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 -= var_5;
        var_22 = var_12;
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        arr_4 [i_1] = (((max(((548682072064 ? -1800917994495637437 : 5089038505617010544)), ((min(8748, var_4))))) ^ ((((var_6 > -1888710388) ? -22622 : (arr_3 [i_1 + 1]))))));

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_23 = (arr_2 [i_1]);

            /* vectorizable */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                var_24 ^= -var_16;
                var_25 -= -8741;
            }
            var_26 = (+-13046);
            var_27 = ((~(~var_18)));
        }
        var_28 = (min(var_28, (((-((((((arr_6 [i_1] [i_1 - 2] [i_1]) ? 8748 : -1800917994495637437))) ? ((((arr_5 [i_1]) > (arr_5 [i_1 - 2])))) : 1770813718)))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_19 [i_1 - 3] [i_1] [i_4] [i_4] [i_4] [6] = (1800917994495637451 ^ -1800917994495637437);
                        var_29 += ((((-29 ? (-127 - 1) : var_7))));
                    }
                }
            }
        }
    }
    for (int i_7 = 2; i_7 < 9;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_28 [i_7] [i_8] [i_7] [i_7] = ((((1800917994495637451 ? var_10 : (arr_7 [i_7 - 2])))) ? (min((arr_7 [i_7 - 2]), (arr_6 [i_7 - 1] [i_7 + 2] [i_7 - 2]))) : (min((arr_7 [i_7 - 2]), (arr_7 [i_7 + 2]))));
                    arr_29 [i_7] [i_8] [i_8] [i_9] &= -5;
                    var_30 = ((((((arr_18 [i_9]) ? (arr_18 [i_8]) : (arr_18 [i_9])))) ? (min(((0 ? 2147483647 : 1000331686)), 1)) : -1));
                }
            }
        }
        var_31 ^= var_18;
        var_32 = ((-((((min(32767, 1))) ? (((-8749 | (-127 - 1)))) : (arr_6 [i_7 + 1] [i_7 + 1] [i_7 + 2])))));
        var_33 = 1138112160;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    var_17 *= (!120);
    var_18 = (max(((max(((min(-116, 114))), var_4))), ((-116 ? 116 : -117))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_19 |= (min((var_15 < var_3), 699465923));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_20 = 699465923;
                    var_21 = (min(var_21, (var_11 || 699465906)));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_22 = (((455 == 455) ? ((var_1 ? var_13 : 20)) : (var_2 % var_2)));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_4] [i_3] [4] [i_0] = (((115 >= -116) % 699465922));
                                var_23 = (!(((var_13 + (max(28, -699465912))))));
                                var_24 -= (((((((461 < -1672871530348643292) ? 115 : (85 - 455))) + 2147483647)) << (((var_3 && -1) - 1))));
                            }
                        }
                    }
                    var_25 = (min(var_25, (((-456 ? (min(-452, 6568573611518930696)) : (((min(115, -116)))))))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 8;i_8 += 1) /* same iter space */
                        {
                            arr_24 [i_6] = var_8;
                            var_26 = ((((!(var_14 > 450))) && (((~(min(var_10, -452)))))));
                        }
                        for (int i_9 = 2; i_9 < 8;i_9 += 1) /* same iter space */
                        {
                            var_27 = ((~((max(452, var_15)))));
                            var_28 = (max(var_28, var_14));
                            var_29 = (min((max(102, var_7)), ((max(3968, 4)))));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_30 [i_1] [i_6] [i_1] [i_6] [i_1] [i_6] [i_0] = ((((var_1 ? var_12 : ((min(3968, 456))))) > (((var_1 <= 5756882179106150895) & (6 <= -1)))));
                            var_30 = (min(var_30, ((((((var_11 ? 12689861894603400716 : 47636))) ? ((max(17916, -13))) : (min(-116, var_8)))))));
                            var_31 = (min(var_31, 699465907));
                            var_32 = min((min(-125, 699465890)), ((min(var_4, -116))));
                        }
                        var_33 = (max(var_33, (((((max(var_8, 115))) ? (~20918) : ((((-699465896 ? 47649 : var_13)) | -67)))))));
                        var_34 = (min(var_34, (((115 / ((17930 << (47656 - 47641))))))));
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        arr_34 [i_6] = (max(17885, 3251146731));
                        arr_35 [i_0] [i_1] [i_6] [i_6] = ((~(47630 ^ -18707)));
                        var_35 += (min(((-18707 ? var_13 : var_8)), (!var_0)));
                        var_36 = var_5;
                        var_37 = (min(var_37, ((((40409 <= 1) ? ((44617 ? (((max(-1, 28)))) : ((-122 ? 17928 : var_7)))) : -699465896)))));
                    }
                    arr_36 [i_6] = var_11;
                    arr_37 [i_6] [5] [i_6] = (((-(255 < 5138559391999971846))));
                }
            }
        }
    }
    #pragma endscop
}

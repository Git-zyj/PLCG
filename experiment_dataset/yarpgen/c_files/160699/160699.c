/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = ((max((arr_2 [i_1]), (arr_2 [i_1]))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] = (((((arr_5 [i_0] [i_1] [i_2] [14]) >= var_9)) ? ((((max((arr_0 [i_2]), var_1))) ? (!var_2) : (((!(arr_5 [i_0 - 1] [12] [i_2] [i_2])))))) : var_8));
                    var_18 = min((min((-9223372036854775807 - 1), (arr_5 [i_0 + 1] [i_0] [i_0] [i_1 + 3]))), ((((arr_5 [i_0 + 1] [i_0] [i_0] [i_1 + 3]) / (arr_5 [i_0 - 2] [7] [i_0] [i_1 + 3])))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        var_19 *= (max((((var_4 && ((((arr_11 [i_0] [i_5] [i_4] [i_5]) ? -1337360978 : (arr_9 [i_0] [i_3] [i_4]))))))), (min(var_6, ((var_9 ? 32767 : -32766))))));
                        arr_15 [i_0] [i_3] [i_3] [i_3] [i_4] [i_5] = (!12674612843964052551);
                    }
                }
            }
        }
        var_20 = min(((min((var_4 <= -17001), (!var_4)))), (((var_8 && -8140806149157064213) >> (var_6 - 62921))));
        var_21 = 255;
        var_22 = (((max((arr_2 [i_0]), var_12)) != (!var_7)));
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    arr_23 [10] [i_7 + 1] [i_8] = -32767;
                    var_23 = 145108327785715229;
                    var_24 = (arr_19 [i_7] [i_8]);
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_25 = ((((!((!(arr_22 [17] [i_7] [i_8] [i_10]))))) ? 19435 : ((var_2 ? var_12 : (arr_24 [i_9 - 1] [5] [i_9 + 1] [i_9 + 1])))));
                                var_26 ^= var_3;
                                arr_29 [i_7 - 2] [i_9] [i_9 + 1] = arr_7 [i_7 - 2];
                                var_27 = ((!((max((arr_11 [i_9 + 1] [i_7] [i_6] [i_9]), 36028792723996672)))));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (max(var_10, (arr_5 [i_6] [i_6] [10] [i_6])));
        arr_30 [i_6] [i_6] = var_1;
        arr_31 [i_6] |= -145108327785715230;
        arr_32 [i_6] = max(145108327785715210, 145108327785715229);
    }
    var_29 = var_14;
    var_30 -= (((min(var_0, var_2)) ^ var_7));
    var_31 = var_13;
    #pragma endscop
}

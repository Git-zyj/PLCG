/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = (arr_4 [i_0]);
                    var_15 += -5745;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 20;i_4 += 1)
        {
            {

                for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                {
                    var_16 = (((arr_8 [i_4 + 1] [i_4 - 1]) ? (min((((arr_8 [i_3] [i_5 - 1]) ? -2086252418 : (arr_8 [i_4] [i_4]))), var_2)) : ((((60831 ? 16368 : var_9)) / (arr_12 [i_3 + 1] [i_4 - 1] [i_5 + 1] [i_5 + 1])))));

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_17 = (((((-29383 < var_10) && ((((arr_12 [i_3] [i_4 - 1] [i_5] [i_6]) ? -2086252418 : var_8))))) || (((((min((arr_8 [i_5 + 1] [i_3]), (arr_14 [i_3] [i_3] [i_3 + 2] [i_3])))) ? ((-5746 ? (arr_14 [i_3] [i_4] [i_5] [i_6]) : -1562995629)) : ((~(arr_17 [i_3 - 1] [i_3] [i_3] [i_3]))))))));
                        arr_18 [i_3] [i_6] [i_5 + 1] [i_4] = (((min(22768, 65535))) ? (~22768) : ((~(arr_12 [i_3 + 1] [i_3] [i_3] [i_3 - 3]))));
                    }
                    var_18 = -5746;
                    arr_19 [i_4] = ((var_12 ? ((49167 & (arr_9 [i_3] [i_4]))) : (max(((63 ? (arr_12 [i_3 + 1] [i_3] [i_4 + 1] [i_5]) : var_7)), (((arr_9 [i_3 + 1] [i_3 + 2]) ^ 140))))));
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    arr_22 [8] &= ((~(arr_16 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7 - 2])));
                    var_19 += (!-7682);
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 19;i_8 += 1) /* same iter space */
                {
                    arr_25 [i_4] [i_4] [i_4] [i_4] = (((arr_11 [i_8 + 1] [i_4 + 1] [i_3 - 1]) < 1929842165));
                    var_20 &= ((13 ? (~16383) : 5763));
                    var_21 = var_0;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_22 = ((1048575 ? (arr_29 [i_3] [i_4 - 1] [i_8] [i_8] [i_3 - 1] [i_9]) : (arr_29 [i_3 + 2] [i_4 + 1] [i_8] [i_9] [i_3 - 2] [i_8])));
                                var_23 = var_6;
                            }
                        }
                    }
                    var_24 &= (1254342587 ? (arr_24 [i_3 - 1] [i_4 + 1] [i_8 + 1] [14]) : 1929842165);
                }
                for (int i_11 = 2; i_11 < 19;i_11 += 1) /* same iter space */
                {
                    var_25 += ((!((min((max(65522, 65522)), (32752 && var_13))))));
                    var_26 += (((arr_9 [i_3] [i_4]) || (arr_12 [i_11 - 1] [i_3] [i_11] [i_4])));
                    var_27 = (arr_13 [i_3] [i_3 - 3]);
                }
                arr_35 [i_4 - 1] [i_4] [i_3] = (max(1929842165, 63));
                var_28 += (max((arr_11 [i_3 + 1] [i_4] [i_3 + 2]), (max((~var_10), (arr_34 [i_3] [i_3 + 2] [i_3 - 3] [i_4 + 1])))));
            }
        }
    }
    #pragma endscop
}

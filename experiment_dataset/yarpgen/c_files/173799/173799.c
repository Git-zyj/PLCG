/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_12 & (min(65535, ((59812 ? 65530 : -16))))));
    var_14 = ((((((~-32760) ? (!32767) : ((890343291 ? 57942 : 4294967295))))) ? (min((-340712023881024823 / var_6), 22)) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 *= ((((max(5206, (arr_2 [i_0] [i_0])))) ? 3178636878788948701 : (~1)));
                var_16 = -1;
                var_17 += (((((var_9 + (arr_1 [i_0])))) ? ((var_2 ? (-32750 & -1) : var_9)) : (arr_2 [i_0] [i_0])));
                var_18 ^= min(-340712023881024837, 65527);
            }
        }
    }
    var_19 = (((340712023881024814 == 0) ? 32767 : ((1 ? -3178636878788948680 : -5969615716030098865))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_20 = ((((max(var_5, var_7) / (((max(var_6, 32768))))))));
                                arr_19 [i_2] [i_3] [15] [i_5] [0] = 32767;
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_24 [i_2] [i_2] [i_3] [22] [22] = -8395615152326617713;

                        for (int i_8 = 1; i_8 < 23;i_8 += 1)
                        {
                            arr_27 [i_2] [i_2] [i_8] [i_7] [i_8] = ((((((var_7 / (arr_15 [i_8] [i_7]))))) ? (arr_18 [i_8] [i_8 + 1] [i_8 - 1] [13] [i_3]) : (((!(arr_15 [i_8 + 1] [i_3]))))));
                            var_21 ^= ((+(((arr_21 [i_7] [i_3] [i_4] [0]) ? (arr_16 [i_8 - 1] [i_8 + 1] [i_7] [i_7] [i_4 + 2] [i_4 + 3]) : (((arr_26 [i_2] [i_2] [i_2] [i_3] [i_4] [i_7] [i_8]) ? -3403441557982255476 : var_3))))));
                            var_22 = (min(var_22, 18446744073709551612));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            arr_30 [i_9] [i_9] [i_4 + 2] [10] [i_9] = (arr_18 [i_2] [i_3] [i_4] [i_7] [i_9]);
                            var_23 = 3756591654;
                            var_24 = ((16389088779568437625 + (arr_28 [i_9] [i_4 + 2] [i_4] [i_4 + 2] [i_9] [i_7] [i_4 + 2])));
                        }
                        arr_31 [i_7] [i_7] [i_7] = var_5;
                    }
                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {
                        var_25 = (min((~var_6), 65534));
                        var_26 = var_8;
                    }
                    arr_36 [i_2] [i_3] [i_2] = (max(-3178636878788948718, (min(-6617759540114198360, ((min((arr_20 [3] [i_3] [i_4 + 2] [i_3]), 32767)))))));
                }
            }
        }
    }
    #pragma endscop
}

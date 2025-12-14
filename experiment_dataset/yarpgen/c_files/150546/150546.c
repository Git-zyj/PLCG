/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = -var_5;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_21 = ((-2186091578090044137 != ((((((((var_9 != (arr_1 [i_1]))))) != 2186091578090044137))))));
                        var_22 = ((((min((arr_0 [i_0 + 1] [4]), (arr_7 [i_0 + 1] [i_1])))) ? (((arr_7 [i_0 + 1] [i_1]) ? 8005988338175610086 : -53846656846674884)) : ((var_16 ? var_1 : (arr_0 [i_0 + 1] [i_3])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    var_23 = (((-2186091578090044136 != 3563441223) != (((arr_0 [i_0] [i_4]) ? -2186091578090044127 : ((((-2186091578090044137 != (arr_0 [11] [11])))))))));
                    var_24 -= (min((((arr_3 [i_4]) ? 7469593446564509898 : 7469593446564509915)), ((((3166974430 != var_1) != var_13)))));
                    var_25 = (!-748237555);
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_26 = (var_17 != 748237555);
                                var_27 = ((+(((arr_17 [i_5 + 3] [4] [4] [i_5 + 3] [i_5] [i_6]) ? -748237556 : ((var_17 ? 0 : 5131737386762116184))))));
                            }
                        }
                    }
                }
            }
        }
        var_28 = (max(var_28, -7469593446564509891));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        var_29 = (max(var_29, ((((min((102 | -7469593446564509898), 1)) != -var_17)))));
        arr_22 [i_8] [i_8] = ((((min((arr_5 [i_8] [i_8] [i_8] [i_8]), (1 / var_16)))) ? 5131737386762116184 : 9187));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_30 = (14003000618901596976 != 7580465314572820045);
        var_31 = min(((max(195316639, -748237555))), (((var_12 - var_6) + ((1 ? (arr_11 [i_9] [1]) : 7519814002808095874)))));
        var_32 = 2816611576;
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        var_33 = var_15;
        var_34 = (min(var_34, var_4));
    }
    #pragma endscop
}

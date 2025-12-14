/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 += (-(!var_3));

        for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
        {
            arr_5 [12] |= (((arr_1 [0]) ? ((17087253705796767654 ? 7811439305076641829 : 129024)) : (!129044)));
            arr_6 [i_0] [5] = (max((arr_4 [i_0] [i_0] [i_0]), (((7811439305076641815 > (arr_0 [i_0]))))));
            arr_7 [i_0] = (((((var_1 ? (max(-129019, var_1)) : (~var_11)))) ? ((((((arr_1 [i_0]) ? 9905988114026784868 : 129034))) ? (max(3085417056, 1508760447)) : -var_12)) : 16));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_15 [i_0] [i_0] = (arr_2 [i_3] [i_2] [i_2]);
                    var_14 = -129008;
                    var_15 *= ((((-(var_8 | var_1))) + (arr_14 [i_0] [i_2] [i_3] [i_2])));
                }
                arr_16 [i_0] = (653575848 & var_11);
                arr_17 [i_0] = (arr_3 [i_0] [3] [i_3]);
            }
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                var_16 = (min(var_16, -653575866));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_17 = (((var_9 && var_4) == 129032));
                        var_18 ^= (~var_12);
                        var_19 = (max(var_19, (arr_14 [i_0] [i_0] [i_0] [i_0])));
                        var_20 = (max(var_20, (arr_9 [i_7])));
                    }
                    var_21 *= var_7;
                }
            }
            var_22 -= (((-((var_8 ? (arr_22 [i_0] [i_2] [i_2] [i_0]) : 129014)))));
            arr_24 [i_2] [i_0] [i_0] = (((-(arr_21 [i_2]))));
            arr_25 [i_0] [i_0] [i_0] = ((1008529160 << (1209550252 - 1209550251)));
        }
        for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
        {
            var_23 -= 1;
            arr_28 [i_0] = (((((1209550238 != (((((arr_20 [i_0] [i_8]) == var_11))))))) << (((~var_0) - 8348313055087343611))));
        }
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            var_24 += (arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            arr_32 [i_0] [i_9] = ((var_10 >> (((((((arr_26 [i_0] [i_9] [i_9]) >> (var_12 + 1140079918))) | ((((arr_9 [i_9]) ? 148 : var_12))))) - 1032222602))));
        }
        var_25 = ((min((arr_2 [i_0] [i_0] [i_0]), (arr_23 [6] [i_0] [i_0] [12] [i_0] [i_0] [i_0]))));
        arr_33 [i_0] = (-1 & -7811439305076641840);
    }
    var_26 = -129012;
    #pragma endscop
}

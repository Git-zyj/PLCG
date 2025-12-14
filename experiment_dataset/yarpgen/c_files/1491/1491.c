/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(-4227619359, 15));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_4 [i_0] = (!var_9);
            var_13 += 71;
            var_14 += (arr_1 [i_0] [i_0]);
            arr_5 [i_0] = (max(-var_2, ((max((arr_1 [i_0] [i_1]), 4227619350)))));
            var_15 -= 151;
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_16 = var_4;
                            arr_15 [i_0] [i_3] [i_0] = 1909431710650414111;
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = 14368769993431053967;
                            arr_17 [i_0] [i_5] [i_4] [i_3] [i_2] [i_2] [i_0] = var_7;
                        }
                    }
                }
                var_17 |= var_8;
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_18 -= (((arr_18 [i_6] [i_2 + 1]) ? ((min(-121, 151))) : (max(48472, var_2))));
                arr_20 [i_0] [i_6] &= (min(((~((2009697530 ? -24349 : -7756123380571506814)))), (arr_11 [1] [i_2 - 1] [i_6] [6] [i_6])));
            }
            var_19 = ((((min((min(var_2, var_9)), var_11))) ? (~-4700394536813186838) : ((((((arr_3 [i_0] [i_2]) ? (arr_3 [i_0] [i_0]) : (arr_7 [i_0] [i_0] [i_0])))) ? (max(-4700394536813186838, 112)) : 48479))));
            arr_21 [i_0] [i_0] [i_2] = (!-4700394536813186828);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_20 -= ((~((max((arr_13 [i_7] [i_0] [i_2 - 1] [i_0] [i_0] [i_7]), (arr_13 [i_7] [i_7] [i_2 + 1] [i_2] [i_2] [i_7]))))));
                        arr_28 [i_7] [i_0] [i_7] [i_8] [i_8] = (min((max(var_11, (arr_26 [4] [4] [i_7] [i_8])), 37)));
                        var_21 = (arr_26 [i_2 - 1] [i_7] [i_2] [i_0]);
                        var_22 = (arr_3 [i_0] [i_8]);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    {
                        var_23 *= (arr_38 [i_0] [i_0] [i_0] [i_0] [5]);
                        var_24 &= 1677172082;
                    }
                }
            }
        }
        arr_39 [i_0] = var_2;
        arr_40 [i_0] = max(((-((567065672 ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_9)))), -var_4);
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
    {
        arr_43 [i_12] = var_10;
        var_25 ^= (min(var_6, (((((((arr_30 [i_12] [i_12] [i_12]) ? 184 : (arr_13 [2] [i_12] [10] [i_12] [i_12] [i_12])))) ? ((~(arr_11 [i_12] [i_12] [6] [i_12] [i_12]))) : 243)))));
        var_26 = (max(1786070993755269784, (((arr_22 [i_12] [i_12] [i_12] [i_12]) ^ var_3))));
        arr_44 [i_12] [i_12] = (arr_41 [i_12]);
    }
    for (int i_13 = 3; i_13 < 17;i_13 += 1)
    {
        arr_47 [i_13] = var_3;
        var_27 -= (((max((arr_46 [i_13 + 1] [i_13 - 1]), 167)) % (~163)));
        var_28 = ((~((-(~var_2)))));
    }
    #pragma endscop
}

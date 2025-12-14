/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-72 ? -72 : 17));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = 3791591110;
                    var_14 = -58;
                }
            }
        }
    }
    var_15 = var_1;

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        arr_11 [i_3] = -1;
        var_16 = ((~((((((arr_9 [i_3]) > 55))) * -1))));
        var_17 = 72;
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_18 = var_1;
        arr_15 [5] = var_3;
        arr_16 [i_4] = (((max((arr_4 [i_4] [i_4] [i_4]), (arr_4 [i_4] [i_4] [i_4])))) ? ((max((arr_4 [i_4] [i_4] [i_4]), var_2))) : (arr_4 [i_4] [i_4] [6]));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = (((arr_18 [i_5]) ? 4522285837817008843 : ((((arr_18 [i_5]) ? (arr_18 [i_5]) : (arr_18 [i_5]))))));
        var_19 ^= (arr_18 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 19;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] |= (((((arr_17 [i_5]) ? (arr_17 [i_7]) : (arr_17 [i_8 - 1]))) % (arr_17 [i_5])));
                            var_20 = (max(4522285837817008854, (((min(8177214903831800121, (arr_27 [i_8])))))));
                            var_21 *= (1870633995 & 273110094);
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_22 = ((-633904616687235621 ? -149902898 : -79));
                            arr_32 [i_7] [i_6] [i_7] [13] [i_10] [i_10] = (min(((-(arr_23 [i_10] [i_10] [i_10]))), ((max((arr_27 [i_6 - 2]), (arr_27 [i_6 - 2]))))));
                        }
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            arr_37 [i_5] [i_5] = (min(((max(((var_8 ? var_11 : var_8)), (arr_36 [i_5] [i_5] [i_5] [i_8 + 1] [i_11 + 1] [i_8 - 2] [i_6 + 2])))), (((arr_20 [i_11 - 1] [i_8 - 2] [i_5]) ? (arr_20 [i_5] [i_5] [i_11 + 1]) : 13757126907872335511))));
                            arr_38 [i_5] [5] [5] [5] [i_11 + 1] = ((((max(65535, -1550907994))) % (((~(arr_29 [i_5] [i_7] [i_11 - 1]))))));
                            var_23 &= (((((~(min(796330320, 4294967277))))) ? (((max(796330324, 13757126907872335496)))) : ((((arr_18 [i_5]) + var_11)))));
                            arr_39 [9] = (~244);
                        }
                        var_24 = (((!-var_8) ? ((((((max((arr_26 [i_6] [i_6 + 2] [i_7] [14] [i_6] [i_7]), (arr_27 [1])))) || ((min(4522285837817008854, var_9))))))) : 13924458235892542776));
                    }
                }
            }
        }
    }
    var_25 = -50;
    #pragma endscop
}

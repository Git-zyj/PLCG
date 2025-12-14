/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 8;i_3 += 1) /* same iter space */
                    {
                        var_19 = (min((arr_1 [3]), (min(var_1, (arr_0 [i_2] [i_2])))));
                        var_20 ^= ((+((+(min((arr_3 [i_3] [i_1]), var_17))))));
                        var_21 = (max(var_21, (arr_8 [i_3 - 3] [i_3 + 1] [i_3 - 1] [i_3 - 3] [i_3])));
                        var_22 = (arr_3 [i_0] [8]);
                    }
                    for (int i_4 = 3; i_4 < 8;i_4 += 1) /* same iter space */
                    {
                        var_23 = var_8;
                        var_24 = ((min(5226372649579465671, (var_13 || var_1))));
                        var_25 = (+(((arr_8 [i_2] [i_4 + 1] [i_4 + 1] [i_0 - 1] [i_0]) ? (arr_8 [i_0] [i_4 + 1] [i_2] [i_0 - 1] [i_4 - 1]) : (arr_8 [i_0] [i_4 + 1] [i_2] [i_0 - 1] [i_0]))));
                    }

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            var_26 = ((!((max(var_13, (arr_1 [i_0 - 1]))))));
                            arr_18 [i_0] [i_1] [i_5 + 1] [i_1] [i_6] [2] = (((arr_3 [i_0 - 1] [i_2 - 1]) ? var_1 : ((-14771 ? (max(40042, -5226372649579465671)) : (arr_10 [i_1] [i_1])))));
                            var_27 = ((-5226372649579465671 ? ((549755811840 ? 0 : 512)) : -228327537932724894));
                            var_28 = (((min(5226372649579465671, (arr_6 [i_1] [i_1]))) * ((((arr_17 [i_5 - 2] [i_2 - 1] [i_0] [i_0 - 1] [i_0]) >> ((((max((arr_7 [i_0] [i_0] [i_5]), (arr_10 [i_0] [i_0])))) - 62698)))))));
                            arr_19 [i_2] = ((((min((arr_10 [i_0 - 1] [i_2 - 3]), var_1))) ? 5226372649579465671 : 64720));
                        }
                        arr_20 [i_0] [i_2 + 1] = (((-(arr_7 [i_0] [i_0] [i_2]))));
                    }
                }
            }
        }
    }
    var_29 = var_11;

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 15;i_10 += 1)
                {
                    {
                        var_30 = (arr_22 [i_8] [i_10]);
                        arr_30 [i_8] [i_7] [i_8] [i_8 - 1] [i_9] [i_10] = var_2;
                        var_31 = var_0;
                        var_32 = ((5226372649579465671 ? var_2 : ((min((arr_21 [i_9]), 8192)))));
                    }
                }
            }
        }
        var_33 = (((((var_16 >> (((arr_27 [i_7] [i_7] [i_7]) - 872825808))))) ? -var_2 : (max(5226372649579465671, (arr_24 [12])))));
    }
    var_34 |= (var_18 ? var_5 : ((min((min(var_14, 5226372649579465658)), var_3))));
    var_35 = (max(((max(5226372649579465671, 0))), (min((~var_5), var_11))));
    #pragma endscop
}

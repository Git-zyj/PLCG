/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((var_6 * var_7), var_4));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))) / 4294967295));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_1] [i_0] [i_3] = (+(min((arr_7 [i_0] [i_1] [i_2] [i_3]), (arr_7 [i_0] [i_0] [i_0] [i_0]))));
                        arr_11 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] = (arr_1 [i_0]);
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((!(arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {

                    for (int i_6 = 2; i_6 < 20;i_6 += 1)
                    {
                        arr_20 [i_0] [i_4] [i_5] [i_0] = (((arr_8 [i_0]) ? (((max((arr_13 [i_0] [i_0] [i_0]), var_7)) + (((((arr_5 [i_4] [i_5] [i_5]) >= (arr_2 [i_5] [i_4 - 2]))))))) : ((((~var_3) ? ((max((arr_13 [i_0] [i_4 + 1] [i_0]), var_5))) : (~var_0))))));
                        arr_21 [i_4] [i_5] [i_4] [i_4] = var_2;
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((+(((var_0 | var_4) >> (((arr_15 [i_0] [i_4 + 1]) - 3310))))))) : (((+(((var_0 | var_4) >> (((((arr_15 [i_0] [i_4 + 1]) - 3310)) - 9763)))))));
                        arr_27 [i_0] [i_0] [i_7] [i_7] [i_0] = (2430958301 ? ((max(-11901, 3313055782))) : (arr_17 [i_0] [i_0]));
                    }
                    arr_28 [i_0] [i_4] [i_5] = ((((var_8 && 8044980465679397558) * (var_6 & var_0))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_34 [i_4] [i_4] [i_4] [i_4] = (min((min(((var_1 ? var_8 : var_7)), (arr_2 [i_4 - 1] [i_8 + 1]))), (!4237291592)));
                                arr_35 [i_4] [i_4 - 1] [i_4 - 1] [i_0] [i_0] [i_0] [i_0] = ((4095 ? (arr_23 [i_8 + 1] [i_4 - 1] [i_0]) : (1 ^ 13057279817655595820)));
                                arr_36 [i_0] [i_0] = ((!(arr_9 [i_4 - 2] [i_8 + 1] [i_4 - 2] [i_9 + 3] [i_8 + 1] [i_9])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

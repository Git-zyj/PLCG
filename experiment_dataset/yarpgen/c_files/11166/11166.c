/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (!var_1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [1] [i_4] = ((((!((max((arr_2 [i_0]), (arr_10 [i_0] [i_2] [i_0] [i_4])))))) ? (min((arr_6 [i_0] [i_2] [i_2] [i_2 + 1]), (arr_6 [i_0] [i_0] [i_0] [i_2 + 1]))) : (max(-121009820, ((-17 ? var_9 : (arr_6 [i_0] [i_1] [i_2 - 1] [i_4])))))));
                                arr_17 [i_2 + 2] [i_0] [i_0] [i_1] = (((arr_2 [i_0]) ? (min((((-(arr_2 [i_0])))), (min((arr_7 [1] [i_2] [i_3] [i_4]), var_3)))) : ((((var_0 & (arr_2 [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            {

                for (int i_7 = 2; i_7 < 18;i_7 += 1)
                {
                    arr_27 [i_6] [i_6 - 2] [i_6] = ((-62362 + (((arr_20 [i_5] [i_5 - 1] [i_7 - 2]) ? (arr_20 [i_5] [i_5 + 2] [i_6]) : 1524628825))));
                    arr_28 [i_6] = ((-(min((arr_18 [i_7 - 1]), (arr_18 [i_7 - 2])))));
                    arr_29 [i_5] [i_6] [i_6] = 4075236941829498325;
                }
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    arr_33 [i_5] [i_6] [i_8] = (arr_26 [i_6 - 2] [i_6] [i_8 + 2]);
                    var_10 += (((~(max(4151752842, (arr_19 [i_6]))))));
                }
                arr_34 [i_6] [i_6] [i_6] = (arr_23 [i_5 + 2]);
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 18;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_11 -= (!-1067067132);
                                arr_45 [i_6] [i_6] [i_6] [i_10] [i_11] = var_3;
                            }
                        }
                    }
                }
                var_12 -= (arr_26 [i_5] [16] [i_6 - 2]);
            }
        }
    }
    #pragma endscop
}

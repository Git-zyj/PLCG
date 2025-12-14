/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((max(var_0, 113)))) % -113));
    var_21 = var_2;
    var_22 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (arr_4 [7]);
                    arr_10 [i_2] [i_1] = ((~((max(var_15, (arr_5 [i_0] [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 18;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        arr_22 [i_6] [i_4] [i_5] [i_4] [i_4] [i_3] = 16289;
                        arr_23 [i_6] [i_4] [i_3] = (arr_13 [1]);
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_26 [i_3] [i_3] [i_3] [i_4] [i_3] = (max((arr_14 [i_5 + 1]), ((((arr_24 [10] [i_5] [i_4] [i_4] [i_3]) ? 30751 : ((466310085 ? 51295 : 70368744046592)))))));
                        arr_27 [i_4] = ((((((arr_19 [i_5 + 1] [i_7] [8]) - var_16))) ? ((((-16289 > (arr_19 [i_5 + 1] [6] [i_7]))))) : ((127 ? 466310085 : 4728))));
                        arr_28 [i_4] [i_4] = ((!((((arr_25 [i_5 + 1] [i_4] [i_4] [i_4] [i_7] [i_7]) % -70368744046593)))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_31 [i_4] [i_4] [i_3] = (min((arr_21 [i_3] [i_4] [6] [i_8] [i_4] [i_5 + 1]), (((arr_21 [i_5] [i_8] [i_5] [i_5] [i_5] [i_5 + 1]) ? 1 : (arr_21 [i_3] [i_3] [13] [i_8] [i_5] [i_5 + 1])))));
                        arr_32 [i_3] [i_4] [2] [i_4] [i_4] = ((~(~var_9)));
                    }
                    arr_33 [i_4] = var_2;
                    arr_34 [i_4] [i_4] [6] = -var_8;
                }
            }
        }
    }
    #pragma endscop
}

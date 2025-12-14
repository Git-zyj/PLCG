/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [19] [i_0] [i_0] [i_0] = -26317;
                        arr_13 [i_0] [i_1] [i_0] [i_1 + 1] = -26317;
                        arr_14 [i_1] [i_1] [i_2] [i_0] [i_1] [i_0] = (((~var_1) ^ ((-(((arr_3 [i_0] [i_1] [7]) ? 5 : -10))))));
                        arr_15 [i_2] [i_1] = var_8;
                    }
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        arr_19 [i_0] [i_0] = ((~(((arr_11 [4]) & -1606547539))));
                        var_12 = (min(var_12, (((-((-((35 ? var_5 : 26291)))))))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_22 [1] [i_1 + 1] [i_1 + 1] [1] [i_1] [i_1] &= (((arr_1 [i_5]) ? (((~(~var_3)))) : (((((~(-9223372036854775807 - 1)))) ? 2236705009 : -57637539843209670))));
                        var_13 = (max(var_13, -16));
                        var_14 = 1;
                    }
                    arr_23 [i_0] [i_0] [i_1] [i_2] = ((!(((6368459586277050591 & ((max(-11429, (arr_2 [i_0])))))))));
                    arr_24 [i_0] [i_0] [i_0] = ((1 && 11) ? ((62384 ? 0 : (~2095104))) : -23516);
                    var_15 = (((arr_21 [i_1] [i_1] [i_1] [i_1 + 1]) > 1));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 17;i_7 += 1)
            {
                {
                    var_16 = (max(((-(arr_18 [i_0] [i_7 + 3] [i_7] [1] [i_6 - 1] [i_6 - 1]))), (min((233 << 0), ((max(65525, (arr_26 [i_7] [i_6 + 1] [15]))))))));
                    var_17 = (arr_6 [i_7 - 3] [i_6 - 3] [i_6 - 2]);
                }
            }
        }
    }
    var_18 = ((((min(89, 65529))) ? var_0 : (((128 < ((-6 ? 2058262285 : 0)))))));
    #pragma endscop
}

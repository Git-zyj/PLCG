/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_5 <= var_3) > 153));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (min((arr_4 [i_0] [i_0] [i_1]), ((((~var_17) || 1701219869)))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_20 = (min(-723886275, 0));
                    arr_11 [4] = (min(((((arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 2]) + var_14))), 4578330776621181240));
                }
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    arr_14 [i_3] [i_3] = var_17;
                    var_21 = (min((min((min(var_6, (arr_3 [i_0] [i_1 - 1] [i_0]))), ((((arr_5 [i_0] [i_0]) || var_14))))), ((min(197, 178)))));
                    arr_15 [i_0] [i_1] [i_1] &= (min((max((246 < 200), (arr_1 [i_0]))), ((min((arr_12 [i_0] [i_0]), (arr_12 [i_0] [i_1]))))));
                    var_22 = var_6;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_23 = max((var_5 % 24), ((((arr_16 [i_0] [i_0] [i_4] [i_4] [i_5 - 2]) > (arr_16 [i_0] [i_4] [i_3] [i_3] [i_5 - 1])))));
                                var_24 ^= ((((arr_1 [i_0]) < (arr_10 [i_0] [i_3 - 3] [i_4] [i_5 + 1]))));
                                var_25 = (max(var_25, ((min((((((arr_18 [7]) << (94 - 85))))), (max(1, 168)))))));
                                var_26 += min(((6 ? 7856 : (~-6343841169346107560))), (845466386 || 102));
                            }
                        }
                    }
                }
                var_27 += (arr_4 [i_0] [i_1 - 2] [i_1 - 2]);
            }
        }
    }
    var_28 = 3126942414;
    var_29 = var_3;
    #pragma endscop
}

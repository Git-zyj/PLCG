/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-65535 ^ var_13) ? ((((((max(8, var_10))) <= -var_4)))) : var_8);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_20 = (((min(var_9, ((6 << (var_3 + 27524))))) | (((14006607529490579872 || (arr_2 [i_0 - 3] [i_0 - 4]))))));
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_0 - 2] = ((~(8 - 2143289344)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_21 = 0;
                    arr_13 [i_1] [i_1] [i_1] = var_6;
                    arr_14 [i_0] [i_1] [i_3] = (((arr_6 [i_0] [i_0 + 2] [7]) ? var_2 : (arr_6 [i_1] [i_0 + 2] [i_3])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_22 = -121;
                                arr_21 [i_3] [10] [11] [11] [i_3] [i_3] [i_3] = ((-var_7 ? (8 != var_5) : var_11));
                                arr_22 [i_0 - 3] [i_1] [i_1] [i_4] [i_4] [i_5] = (((arr_6 [i_0 - 2] [i_0 - 3] [i_5 - 1]) > (arr_6 [i_0 - 3] [i_0 - 3] [i_5 + 2])));
                                var_23 = (arr_16 [i_0] [i_3] [i_0] [i_5 + 2]);
                            }
                        }
                    }
                }
                arr_23 [i_0 - 1] = -3349155688884046259;
                arr_24 [i_0] [i_1] = var_8;
            }
        }
    }
    var_24 = var_9;
    var_25 = (((((!(~var_8)))) - ((var_12 ? ((min(20065, var_6))) : (!var_17)))));
    var_26 = var_14;
    #pragma endscop
}

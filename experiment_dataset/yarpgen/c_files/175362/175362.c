/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] = ((~(max((arr_3 [i_0] [i_3 + 1] [i_2]), var_4))));
                                arr_14 [0] [i_1] [i_1] [i_1] [0] = ((arr_5 [i_4] [1] [i_2]) ? ((((((min(-15186, -605987859))) && (((23637 ? (arr_4 [i_3 - 1]) : var_1))))))) : ((min(3303852240, (arr_10 [i_0] [2] [i_2] [i_3 + 1] [i_0])))));
                                arr_15 [4] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] = (((var_4 % ((0 ? 991115048 : var_2)))));
                                var_10 = ((var_8 ? ((165068886 ? 6106223581058736174 : 3303852240)) : (((-3597572118916606126 ? var_1 : -699467114)))));
                                arr_16 [i_2] [i_1] [i_1] = ((62 ? -8321146261818975834 : 7163629079841659509));
                            }
                        }
                    }
                    arr_17 [i_1] [i_2] = ((((((max(var_8, 50)) << (arr_4 [i_1])))) ? var_4 : 2));
                }
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    arr_22 [3] = 46;
                    var_11 = ((((min((max(4129898410, 3334877870)), ((min(var_6, var_5)))))) ? (((-7028483318389565237 % (arr_10 [16] [i_1] [i_5 + 1] [i_1] [i_1])))) : (((4151820829 << (-23637 + 23658))))));
                    var_12 = (min(var_12, 23637));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_13 = (((var_2 ? (arr_20 [12] [i_1]) : 4129898410)) > var_4);
                                arr_30 [i_7] [i_1] [i_6] [i_1] [i_8] = var_5;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_14 *= (1363131288 % var_8);
                                arr_35 [i_10] [i_9] [i_6] [i_1] [i_0] = ((-((var_9 << (17716787474679950781 - 17716787474679950750)))));
                                var_15 = (!var_8);
                                arr_36 [i_9] [i_1] [9] [i_6] [i_10 + 3] = ((-7028483318389565242 > (arr_21 [18] [18] [i_9])));
                                arr_37 [i_0] [i_0] [i_0] [i_0] [i_6] [i_9] [i_10] = ((var_3 ? var_9 : ((-1287915885 ? var_8 : var_6))));
                            }
                        }
                    }
                    arr_38 [i_0] [i_1] [i_0] [i_1] = (-(arr_31 [i_6] [i_1] [i_0]));
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_16 = (min(var_16, (max(((2719690203 ? 0 : 3625942765)), ((((((117 == (arr_31 [i_11] [i_1] [i_0])))) ^ (!-175060767051224876))))))));
                            arr_43 [i_0] [i_1] [i_11] [i_0] = (max(((max((arr_8 [i_0] [i_1] [i_11] [i_11] [i_12]), (arr_34 [i_0] [i_1] [i_11] [i_11] [i_0])))), (min(-43, var_2))));
                            var_17 = (max(var_17, var_4));
                            var_18 = (max(var_18, ((((~-1287915885) ? ((-(((!(arr_41 [i_1] [i_11] [5] [i_1] [i_1] [i_0])))))) : (max((~-28), (~var_5))))))));
                        }
                    }
                }
                arr_44 [i_0] [i_0] = ((((var_3 ? (arr_31 [i_0] [i_1] [i_1]) : var_2))) ? ((-34 ? 79 : (arr_24 [i_0] [i_1] [i_0]))) : var_9);
            }
        }
    }
    var_19 = var_9;
    var_20 = min((((var_2 ? ((min(var_7, var_1))) : var_3))), (((((11 ? 127 : var_2))) ? var_5 : ((-43 ? 3984872803 : var_9)))));
    var_21 = (~var_0);
    #pragma endscop
}

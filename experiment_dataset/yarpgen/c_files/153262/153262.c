/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (min((!1), ((+((((arr_0 [i_0]) < 1)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_3] [i_1] [7] = (arr_3 [i_3] [7] [i_0]);
                            var_17 = var_10;
                        }
                    }
                }
                arr_10 [8] = (((1 ? -var_6 : (0 / var_6))));
                var_18 = ((~(min((((var_15 > (arr_6 [i_1] [8] [i_1] [i_0])))), (max(15264743652298976738, 2))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_24 [i_5] [i_4] = var_1;
                                var_19 = (((!-9) ? (((((0 ? 639581251 : var_15)) >= -14135))) : (9026438656481027256 == 0)));
                            }
                        }
                    }
                    var_20 = (((arr_23 [i_4] [i_5 + 1] [i_5] [i_5] [i_5]) ? (arr_15 [i_5]) : (((((274877906943 <= -7010272354396036275) <= ((min((arr_22 [i_5] [i_5]), 1)))))))));
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    var_21 = (!((min((((!(arr_20 [i_4] [i_9] [i_5] [i_4])))), var_7))));
                    var_22 = arr_23 [i_4] [8] [i_4] [i_4] [i_4];
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 20;i_12 += 1)
                        {
                            {
                                var_23 = ((+(min(4135485154, ((((arr_33 [i_4]) && var_1)))))));
                                arr_36 [i_4] [i_12 - 1] [i_12 - 1] [1] = -2343364325446912325;
                            }
                        }
                    }
                    var_24 = (min(var_24, (arr_15 [i_4])));
                    arr_37 [20] = ((-(arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 + 1])));
                    arr_38 [i_4] [14] [14] [i_4] = (min(var_1, var_1));
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            {
                                var_25 = ((+((((arr_44 [i_10] [i_10]) && var_7)))));
                                var_26 = ((var_13 > (arr_26 [2] [2] [2] [2])));
                            }
                        }
                    }
                }
                for (int i_15 = 2; i_15 < 20;i_15 += 1)
                {
                    var_27 = 15264743652298976732;
                    var_28 = (arr_13 [i_4]);
                }
                var_29 = (max(var_29, (((((arr_22 [i_5 + 1] [i_4]) ? (arr_22 [i_4] [i_4]) : (arr_22 [12] [i_5]))) <= (arr_22 [i_4] [i_5])))));
                arr_47 [7] [i_4] = ((-(8272614244888891047 > 32767)));
            }
        }
    }
    #pragma endscop
}

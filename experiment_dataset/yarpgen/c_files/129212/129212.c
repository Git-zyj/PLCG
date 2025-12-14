/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((max(((3 >> (var_0 - 3391344527))), ((65533 ? var_2 : 62161))))) ? 13185 : ((18 ? -1 : 1061893064))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 += (max(-65531, (((var_12 ? var_8 : var_5)))));
                    var_22 += (((((((20898 ? (arr_1 [i_0]) : 4294967287)) / (arr_1 [i_0])))) && -3));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_23 = (((((-(arr_7 [13])))) && (arr_5 [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_18 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 - 2] = -var_2;
                                var_24 = (min(var_24, ((max(8377957174444271757, 250)))));
                                var_25 = var_3;
                            }
                        }
                    }
                    arr_19 [i_3] [i_3] [i_3] [i_3] = (arr_8 [i_5 - 1]);
                    var_26 |= (((var_0 == -var_7) % 15054079895081586033));
                    var_27 = (max(-var_18, (((var_15 / var_18) ? (0 * -1061893065) : (arr_11 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            {
                arr_25 [i_9] = 255;
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_30 [i_8] [i_9] [i_10 + 1] [i_9] = ((var_3 ? (((var_3 >= (((var_11 ? (arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 4]) : (arr_26 [4] [i_10] [i_11]))))))) : (((!((((arr_0 [i_8]) ? 22241 : (arr_28 [i_10])))))))));
                            var_28 = (((((var_3 ? var_1 : (arr_21 [i_8 + 2])))) ? 0 : (((((56597 ? (arr_26 [i_8] [i_8 + 4] [i_8]) : 9)) <= (arr_1 [i_8]))))));
                            arr_31 [i_8] [i_9] [i_8 - 2] [1] = (max(-var_16, ((((!(arr_28 [i_8]))) ? var_15 : (min(var_18, 1))))));
                        }
                    }
                }
                var_29 = var_2;
            }
        }
    }
    #pragma endscop
}

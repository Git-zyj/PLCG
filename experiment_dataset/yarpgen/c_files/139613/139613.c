/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((((var_9 ^ (arr_5 [i_0] [i_1] [i_1])))) ? ((var_4 ? (arr_2 [i_1]) : (arr_0 [i_1]))) : var_7)) >> (~-2075249832)));
                arr_7 [i_0] [i_1] = ((!((((((arr_3 [i_0]) || (arr_1 [i_0]))) ? -var_2 : 65512)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_1] [i_1] [i_2] [i_3] = ((~((((((-117 < (arr_4 [i_1] [i_1]))))) ^ (max(4294967295, 18446744073709551615))))));
                            var_13 = (max((~var_9), 388343976));
                            var_14 = (max(var_14, var_0));
                            arr_14 [i_0] [i_1 + 1] [i_1] = 3906623320;
                        }
                    }
                }
                var_15 = ((((-(((arr_0 [i_0]) ? 11947581480149992249 : 1)))) - (max(var_6, (arr_0 [i_0])))));
                arr_15 [i_0] [i_1] [i_1] = var_4;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 23;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_16 = arr_23 [i_6 + 2] [i_6 + 2] [i_6 - 1];
                                var_17 = ((var_5 ? (arr_26 [i_4] [i_5] [i_7] [i_8]) : ((((var_3 ? (arr_26 [i_4] [i_4] [i_7] [i_4]) : 14001281408637423357)) - (((-(arr_21 [i_8] [i_6 - 1] [i_5]))))))));
                                var_18 *= (arr_23 [2] [i_7] [2]);
                                var_19 ^= (min(((((min(65535, -2563722049499707319))) ? (arr_24 [i_4] [i_5] [i_4] [i_5] [i_5]) : ((~(arr_16 [i_5]))))), ((max(3906623323, (~-5267))))));
                            }
                        }
                    }
                    var_20 *= (arr_18 [1]);
                    var_21 = ((+((+((min((arr_25 [i_6 + 1] [i_5] [i_4]), 18779)))))));
                }
            }
        }
    }
    #pragma endscop
}

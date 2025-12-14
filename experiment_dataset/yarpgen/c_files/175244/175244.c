/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, ((max((max(((-8520785749320273761 ? (arr_3 [12] [12]) : (arr_1 [0] [0]))), (arr_1 [i_1 - 3] [6]))), ((((arr_3 [12] [i_1]) ? (arr_4 [16] [16]) : (arr_4 [i_0] [8])))))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = var_12;
                                var_19 = var_6;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_16 [i_0] [i_1] [15] [i_0] = (arr_1 [i_1 + 1] [i_0]);

                            for (int i_7 = 1; i_7 < 17;i_7 += 1)
                            {
                                var_20 = (((min(8520785749320273760, 3)) & (arr_14 [i_7 - 1] [i_6 - 1] [i_1 + 1])));
                                var_21 = ((((((((var_12 < (arr_6 [i_0])))) + var_3))) ? (max(4020158014, (arr_15 [i_0] [i_7] [i_0] [i_7] [i_7] [i_7 - 1]))) : (((((((((arr_5 [5] [i_1] [i_1] [i_0]) != 2147483647)))) > (max((arr_14 [2] [i_5] [i_0]), var_14))))))));
                            }
                            for (int i_8 = 0; i_8 < 20;i_8 += 1)
                            {
                                arr_23 [i_8] [i_8] [i_0] [i_8] [i_8] [i_8] = (arr_0 [16]);
                                arr_24 [i_0] [i_0] [i_5] [i_0] [i_8] = (arr_1 [i_0] [i_0]);
                            }
                            for (int i_9 = 2; i_9 < 17;i_9 += 1)
                            {
                                var_22 = (max(var_22, (((((min(var_1, 41))) ? ((274809292 ? 1278537278 : -73)) : (!5751692713800224824))))));
                                var_23 = ((((((157 / 1) + var_13))) ? ((((((var_1 ? (arr_17 [i_0] [i_0]) : var_8)) <= ((1533397400 ? (arr_10 [i_0]) : (arr_26 [i_0] [0] [i_5] [17]))))))) : (((arr_6 [i_1]) ? (min((arr_5 [i_0] [12] [1] [i_0]), 4020158014)) : (((max(var_4, -100))))))));
                                arr_29 [i_0] [i_0] [i_0] = 8520785749320273761;
                                arr_30 [i_0] [i_1 + 3] [9] [i_0] [i_9] = ((~(arr_4 [i_0] [i_0])));
                            }
                        }
                    }
                }
                var_24 = (max(var_24, (arr_10 [1])));
            }
        }
    }
    var_25 = (((((var_7 ? var_0 : (var_10 ^ 156)))) ? ((max(var_10, var_7))) : (((1 || (-83 && var_13))))));
    #pragma endscop
}

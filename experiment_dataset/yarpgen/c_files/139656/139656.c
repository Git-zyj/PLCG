/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((var_15 || ((min((-1707643283 == var_17), ((var_11 ? var_10 : (arr_4 [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_21 = ((((max(((((var_11 + 2147483647) << (((-1707643274 + 1707643284) - 10))))), (min(0, (arr_8 [i_0 + 1] [i_1 - 3] [i_1] [i_3])))))) ? ((var_17 ? var_14 : ((max((arr_9 [i_0 + 1] [i_3] [i_2] [i_0 + 1] [i_0 + 1]), -1428))))) : (!var_3)));
                                var_22 = (arr_3 [i_1] [i_1] [i_1]);
                                var_23 ^= (((arr_3 [i_0] [i_0] [i_4]) <= ((max((arr_9 [i_0] [i_0 + 1] [7] [i_0] [i_0 - 2]), 222386110)))));
                                var_24 |= (((arr_8 [i_0] [i_0] [i_0] [i_0 - 1]) ? ((-var_2 - (arr_9 [24] [i_1] [i_1] [i_1] [i_1 - 1]))) : (((-(arr_4 [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = -5927097777283027570;

    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        var_26 = (arr_7 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_27 |= (((!((var_6 && (arr_18 [i_8] [i_7] [i_6] [i_5]))))) ? (arr_2 [i_6]) : ((max((((-1113153624 != (arr_11 [i_7])))), 19127))));
                        var_28 = ((-(((35661 != (arr_19 [i_5]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

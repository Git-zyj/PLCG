/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [5] [i_1] [3] = max((max((max(var_9, var_3)), (max(var_14, var_1)))), ((max(((max(268435455, (arr_1 [i_0 - 1] [i_2])))), (min(4294967293, 142))))));
                                var_17 = (min((max(((min(1, var_5))), (max(18446744073709551606, -7681911022777988420)))), (max((max(-48, 4571090837876590663)), ((max(65535, var_7)))))));
                                var_18 = (max(((min(((min((arr_9 [i_1] [i_1] [i_2 + 3] [1] [i_4] [10] [i_2]), (arr_4 [5] [i_1] [i_1])))), (max(63, var_3))))), (max(((min(var_3, -739667935))), (max((arr_4 [i_1 - 1] [i_1] [i_1]), (arr_7 [i_0] [i_1] [i_0] [i_3])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_17 [1] [i_1] [i_2] [8] [i_5] [i_6] &= (max(((min((min((arr_8 [0]), var_5)), ((max(var_5, (arr_5 [8] [2] [6]))))))), (max((max(158, 3683153381)), ((max((arr_4 [i_0] [4] [10]), (arr_6 [4] [4]))))))));
                                arr_18 [i_1] [i_1 - 3] [7] [i_1 - 3] [i_1] = (max((max(((max((arr_9 [i_6] [i_1] [i_2] [i_5 + 1] [1] [i_2] [i_5]), (arr_16 [i_0] [0] [1] [i_0] [i_2 + 3])))), (max(0, 30622)))), ((min(((min(1, (arr_4 [8] [i_1] [i_1])))), (min((arr_14 [8] [i_1] [i_2 + 3] [8] [5] [i_5] [i_6]), var_13)))))));
                                var_19 = (min((max((min(var_11, var_2)), ((min(var_8, (arr_4 [i_0] [i_1] [i_2])))))), ((min(((max(var_5, var_13))), (max(1359344893, (arr_5 [i_5] [i_1] [i_0]))))))));
                                var_20 = (min(var_20, ((max((min(239, (min(16, 1675415805749843137)))), (min(((max(var_16, var_3))), (max(var_11, 4294967293)))))))));
                                arr_19 [i_1] [5] [i_1] = (max((min((max(var_9, (arr_14 [10] [i_1] [11] [i_1] [i_1] [i_1 + 1] [i_1]))), ((max(var_4, var_3))))), (min((max(-52157833522521017, var_9)), ((min((arr_9 [4] [i_1] [4] [i_5 - 1] [4] [i_6] [11]), -1395207614684474213)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_21 = (max(1974, ((min(0, 1)))));
                                arr_26 [i_0] [i_1] [i_0] [i_0] [i_1] [1] = (max(((min(((min(var_6, -739667935))), (min(1395207614684474213, var_0))))), (max((max((arr_7 [10] [i_1] [i_7] [i_8]), var_10)), (min((arr_22 [i_7] [i_1] [i_1]), (arr_7 [i_0] [i_1] [i_2 + 2] [i_7])))))));
                            }
                        }
                    }
                    arr_27 [i_2] [i_1] [i_0 + 1] [i_1] = (min((max((min(var_9, (arr_1 [i_0 - 1] [i_1 - 2]))), ((max(-1, (arr_6 [i_0] [i_1])))))), ((max(((max((arr_9 [i_0] [i_1] [i_1] [i_2 - 1] [i_2] [i_2] [7]), (arr_16 [3] [6] [8] [i_0 + 1] [i_0 + 1])))), (min(2388983130, 116)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                var_22 ^= (min(((min(((max(var_2, var_13))), (min((arr_30 [11]), 20081))))), (max(((max(var_0, var_5))), (min(var_10, var_11))))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_23 = (min((min((min(18898, (arr_36 [i_9 + 1] [1] [i_11] [i_12 - 1]))), (max(var_14, (arr_28 [i_9] [i_9]))))), ((min((max(-1395207614684474213, (arr_31 [i_9 + 1] [i_10] [i_10]))), ((max(771592004, 1))))))));
                            arr_39 [5] [i_10] [i_11] [12] = (min((max((min(var_14, var_12)), ((min((arr_38 [i_10] [i_11]), var_8))))), (max(((max(3, 4294967293))), (max((arr_36 [i_9 + 1] [13] [13] [i_9 + 1]), -1744792289))))));
                            var_24 = (max(((max((min((arr_37 [i_12 - 2] [i_11] [i_10] [i_9]), 40068)), ((max((arr_38 [i_10] [6]), (arr_30 [i_9]))))))), (min(((max(var_7, var_4))), (min((arr_34 [8] [19] [1]), 2147483622))))));
                        }
                    }
                }
            }
        }
    }
    var_25 = min((min(((min(var_1, var_6))), (max(var_8, var_15)))), ((max(((min(var_7, 89))), (min(var_13, var_3))))));
    var_26 = (min((max((max(var_0, var_9)), ((min(var_5, var_8))))), ((max((min(var_6, var_5)), ((min(-28, 65532))))))));
    #pragma endscop
}

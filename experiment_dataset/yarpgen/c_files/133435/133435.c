/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_3] [i_1] [i_4] [i_3] [i_4] = ((arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0] [i_0]) ? (arr_10 [3] [i_2] [i_1]) : (~4527127787898170606));
                                var_16 = (max(var_16, (4527127787898170586 > -4527127787898170600)));
                                var_17 = (((((var_4 ? (arr_9 [i_3 - 1] [i_1] [i_2] [i_3] [i_4]) : (arr_9 [i_3 - 1] [i_1] [17] [i_2] [i_2])))) || (((var_11 & (arr_11 [i_3 - 2] [i_3 - 2] [i_2] [i_3 - 2] [9]))))));
                                var_18 += (min((((9598614 & (arr_4 [i_0] [i_4])))), (arr_14 [i_0] [i_0 - 2] [i_0 - 1] [i_3 - 2] [6])));
                                arr_17 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((((min(12777, 1))) ? (arr_12 [i_0] [13] [i_0 - 1] [i_0] [i_0]) : 8488550043479864270));
                            }
                        }
                    }
                    var_19 = (min(var_19, 4527127787898170606));
                    var_20 = (min((arr_13 [i_0] [i_0] [i_1] [i_2] [i_2]), (arr_5 [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                var_21 = (min((max(4527127787898170604, -4527127787898170600)), ((max(0, 35380)))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_33 [i_5] [i_6] [i_7] [i_8] [i_9] = 0;
                                arr_34 [i_7] [i_7] [i_5] = (arr_27 [i_5] [i_5] [i_5] [10] [i_5]);
                                var_22 = (arr_32 [i_5] [i_5] [i_5] [i_5] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

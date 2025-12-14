/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3585635700059533463;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 = 65024;
                        var_19 = (max(var_19, (((min((arr_2 [i_2 - 2] [i_3] [i_3]), 1828397780))))));
                        var_20 = (((arr_0 [i_2 + 2]) ? ((((arr_2 [i_2 - 1] [i_2 - 1] [i_2 - 1]) > (arr_2 [i_2 - 3] [i_2 - 3] [i_2 + 1])))) : (((!((((arr_4 [i_0] [i_1]) + (arr_1 [i_0] [i_2])))))))));
                        var_21 = (3838 & 512);
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_11 [i_4] [i_2] [i_2] [i_0] = (((arr_6 [i_0] [i_0] [i_0] [i_0] [14] [1]) ? (((!(arr_0 [1])))) : -var_9));
                        var_22 = 9721829203852178940;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] = ((!(((((4611686018427387903 <= (arr_13 [i_6]))) ? (!var_8) : var_7)))));
                                arr_19 [i_0] [i_0] [i_2] [i_2] [i_6] = (arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_6]);
                                var_23 = (min(var_23, (((((((((var_12 | (arr_14 [i_6] [i_0] [i_5] [10] [i_0] [i_0])))) > (min((arr_7 [i_2 - 3] [i_0] [i_2 - 3] [i_0] [i_0]), var_15))))) != (arr_17 [i_0]))))));
                                arr_20 [1] [i_2] [i_2] [i_5] [i_5] = 18549;
                            }
                        }
                    }
                    arr_21 [i_2 - 1] [i_2] [i_0] [i_2 - 1] = ((((9385533135265397818 && (arr_1 [i_0] [i_2 - 2]))) || (!var_3)));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        var_24 &= (arr_5 [i_0]);
                        arr_25 [i_0] [16] [i_2] [12] [i_7] = (((arr_24 [i_0] [i_1] [i_2 + 2] [i_1] [i_1] [i_1]) ? (((arr_2 [i_2 + 3] [i_2 - 2] [i_2 + 3]) ? (arr_2 [i_7] [i_2 - 1] [i_2 - 2]) : (arr_2 [i_2] [i_2 - 3] [i_2 - 1]))) : 1474189323));
                        var_25 &= ((~(((arr_24 [i_0] [i_2 - 3] [i_7] [i_0] [i_0] [i_0]) + 14))));
                    }
                }
            }
        }
    }
    var_26 = 1828397787;
    var_27 = var_5;
    #pragma endscop
}

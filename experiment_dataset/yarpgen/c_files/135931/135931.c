/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_3;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((arr_1 [i_0] [i_0]) - var_5)))));
        var_20 ^= (((max((arr_0 [i_0]), (arr_0 [i_0]))) / (min(((var_16 ? (arr_1 [i_0] [i_0]) : var_17)), (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (((((min((min(223, 37336)), (arr_4 [i_0] [i_1] [i_2]))))) % (((arr_6 [i_0] [i_1] [i_2] [i_2]) ? (arr_6 [i_0] [i_0] [i_1] [i_2]) : (arr_6 [i_0] [i_0] [i_0] [i_0])))));
                    var_21 = ((((((min(var_4, 37349))) ? (arr_0 [i_1]) : -1291978055)) ^ var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [15] [i_3] [i_2] [5] [i_4] [i_4] [i_3] = (max(((((var_11 ? (arr_8 [i_0]) : (arr_0 [16]))) - -1407919152)), 3));
                                var_22 = (12832635668666637058 != 253);
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((((((arr_6 [i_3 + 2] [i_3 + 2] [i_3 - 1] [9]) && ((max(var_6, var_18)))))) << (((((min(var_18, var_1)) * ((max((arr_15 [i_3] [i_1] [i_3] [i_3] [i_4] [i_4] [i_3]), var_12))))) - 4473278972697520873))));
                            }
                        }
                    }
                }
            }
        }
        arr_18 [i_0] = (((!(arr_3 [i_0] [i_0] [i_0]))) ? ((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) > (arr_7 [13] [17] [i_0] [i_0])))) : (arr_3 [i_0] [i_0] [3]));
    }
    var_23 = (((!var_3) + var_17));
    #pragma endscop
}

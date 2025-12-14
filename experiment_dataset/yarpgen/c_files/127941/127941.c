/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = 752600198939040091;
                    var_20 = ((+((((max((arr_4 [i_2]), 1))) ? -23234 : 20))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_21 = (((arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_2]) ? (arr_10 [i_3 + 2] [i_2] [i_0] [i_0]) : (arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                        var_22 = ((-((2834249607 ? (arr_0 [i_3]) : (arr_4 [i_0 + 1])))));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_23 = ((((1 ? 0 : (arr_1 [i_0 - 1] [i_4 + 1]))) % (((-(arr_1 [i_0 - 1] [i_4 - 1]))))));
                        var_24 = (((((0 ? 8 : (arr_7 [7] [i_1])))) ? (((arr_2 [i_0 - 1]) - (arr_2 [i_0 - 1]))) : ((((max((arr_4 [i_1]), (arr_9 [1] [i_4])))) ? ((var_15 ? (arr_2 [1]) : (arr_12 [i_4] [i_1] [i_1]))) : ((max(-8047557291446222956, var_3)))))));
                    }
                }
            }
        }
    }
    var_25 = var_12;
    #pragma endscop
}

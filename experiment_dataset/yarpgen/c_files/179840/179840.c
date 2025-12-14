/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_10 ? ((4939857548908306530 ? var_3 : 70368744177663)) : var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_16 += (((min(var_9, -70368744177664))));
                    var_17 ^= (((arr_5 [6] [6]) ? ((var_14 ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (var_8 > 8001)));
                    arr_6 [i_0] [i_0] [i_1] = (((arr_4 [i_0] [i_1] [i_0]) ? (((arr_2 [i_0] [i_0]) + (arr_2 [i_2] [i_1]))) : (arr_4 [i_2] [i_1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_0] [0] = ((!((-1677999257908687950 && ((min(1677999257908687934, 78)))))));
                                arr_12 [i_4] [12] [i_1] [i_1] [i_1] [i_0] = (arr_9 [i_0] [i_4] [i_0] [i_1] [i_4]);
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_1] = ((~(arr_7 [9] [9] [i_1] [i_0])));
                            }
                        }
                    }
                    arr_14 [i_1] [10] [i_1] [0] = (!((min((arr_3 [i_2] [9] [i_0]), 9054410024214099899))));
                }
                var_18 = 1;
                var_19 = (min((arr_1 [i_1]), ((min(((var_1 >> (var_5 + 8958537639818909801))), var_9)))));
            }
        }
    }
    var_20 = (min(var_20, var_10));
    var_21 = (max(var_21, var_13));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 = (max(var_21, (((max(-472004512, var_18))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_1 + 3] [i_1] [i_1] = ((var_15 ? ((max(var_2, (~472004509)))) : ((((min(2121145750, (arr_3 [i_0] [i_0] [i_1])))) ? ((min(1, var_12))) : (~0)))));
                arr_6 [i_1] = (arr_2 [i_0] [15]);
                var_22 = (((((((2121145750 ? 1 : var_5)) + (max(1, -2121145751))))) ? (min(((max((arr_4 [i_0]), (arr_0 [i_1])))), (max(2121145750, (arr_4 [i_0]))))) : (~-472004512)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] = (((((~((-(arr_2 [i_3] [i_3])))))) || ((min(((var_5 ? 240 : var_11)), 0)))));
                            var_23 = ((~((((~183) <= (-2121145773 & 1))))));
                            arr_14 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] = max((((arr_9 [i_0] [i_1 - 1] [i_2 + 1] [i_3]) / ((-530019897 ? (arr_4 [i_1]) : (arr_8 [i_1] [i_1] [i_3]))))), ((((6798599981487495686 ? 896 : 2147483647)))));
                            arr_15 [i_3] [i_1] = ((((max(var_18, 6798599981487495690))) ? ((var_13 - (~10))) : (((!(arr_9 [i_0] [0] [0] [i_3]))))));
                            arr_16 [8] [i_1] [i_3] [i_1] [i_3] = (((!(arr_1 [i_1 + 3] [i_2]))));
                        }
                    }
                }
                var_24 = ((((min(((-1734646691 ? 6798599981487495666 : 1)), ((min(1, 2147483645)))))) ? ((-(((!(arr_12 [i_0] [i_1] [i_1])))))) : (arr_4 [i_0])));
            }
        }
    }
    var_25 = var_15;
    #pragma endscop
}

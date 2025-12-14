/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = (((arr_8 [i_0] [4] [i_3] [i_4]) ? (((min(0, -1011018662)))) : -1011018678));
                                var_12 -= 1;
                                var_13 *= (-(arr_9 [i_4] [i_3] [i_2] [7] [8] [i_0]));
                                var_14 = (min(var_14, ((max((arr_3 [i_2]), (arr_2 [i_0] [8] [i_3]))))));
                                var_15 += (min((arr_6 [i_1] [i_3] [i_4]), ((((arr_6 [i_3] [i_1] [i_0]) || 1105198221)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_16 = ((16382 | ((986437058 ? (arr_14 [i_6 - 2] [i_6] [i_6] [i_6 - 2] [i_6 + 4] [i_6 - 1]) : 38))));
                                var_17 = (~var_2);
                                arr_17 [i_0] [i_1] [i_2] [i_5] [i_6] [i_6] = ((!((((arr_0 [i_6 + 4]) ? (!var_5) : (!14185310563526280933))))));
                            }
                        }
                    }
                    var_18 ^= (((arr_7 [12] [i_1]) ? -2550685328907619870 : (((4096 ? 16382 : 1984)))));
                    var_19 = min((arr_10 [i_0] [i_1] [i_2] [i_2] [2]), -1);
                    var_20 = (min(((-(((4088 >= (arr_15 [i_2] [i_2] [i_1] [1])))))), (((!(arr_8 [i_0] [i_0] [i_1] [i_2]))))));
                }
            }
        }
    }
    var_21 = (max(((61 ? -8982778270269812563 : 0)), (!var_10)));
    #pragma endscop
}

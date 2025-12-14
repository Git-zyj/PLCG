/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_11 ? (((0 >> (114 - 91)))) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [i_0 + 1] [i_1] [i_2] [i_2] = (min((arr_3 [i_0] [i_0] [i_0 + 1]), 834809435));
                    var_16 = (max(var_16, ((max(((((arr_0 [2] [2]) == (arr_1 [i_0 + 1])))), ((var_12 ? (arr_1 [i_0]) : ((0 ? 1800649698 : 3362)))))))));
                    var_17 = (max(((15862 ? 35753 : (arr_5 [i_0] [i_0 - 1] [i_2] [i_0]))), 3509899729));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]) ? ((((arr_3 [i_0 - 1] [i_0] [i_0]) >= (((arr_7 [1] [i_1] [i_2] [i_3]) ? (arr_5 [i_4] [i_3] [i_2] [i_1]) : 1))))) : (((((65529 ? 0 : 1800649671))) ? (1 % 57595) : ((1800649671 ? 0 : 1)))))))));
                                var_19 = ((~(((arr_4 [i_0 + 1] [i_0 + 1] [9]) ? (arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_1])))));
                                var_20 *= 15862;
                                arr_11 [i_0] [i_1] [i_1] [i_2] [0] [i_4] = (arr_0 [0] [0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_7;
    var_22 = (min(var_22, var_2));
    #pragma endscop
}

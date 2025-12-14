/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (((var_2 >= 0) ? (max(0, -65508)) : ((max(var_8, (arr_0 [i_1]))))));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((~(min(65535, ((var_15 ? 44198 : (arr_1 [i_0])))))));
                    var_19 &= (arr_2 [1]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] = ((((min((arr_8 [i_0] [i_2] [i_3 - 3] [i_4]), (arr_8 [i_0] [i_1] [i_3] [i_4 - 2])))) != (arr_8 [i_0] [i_0] [i_0] [i_0])));
                                var_20 = (min(var_20, ((min(((((max((arr_10 [i_0] [8] [i_2] [6] [i_1] [i_3] [i_2]), (arr_6 [i_1] [3] [2])))) ? ((((arr_3 [i_2] [8]) > (arr_5 [4] [0] [i_2] [4])))) : ((min(var_6, 1))))), (!0))))));
                                var_21 = (min(1, ((~(((arr_11 [i_0] [i_1] [i_0] [i_3]) ^ (arr_1 [i_0])))))));
                                var_22 = (min(var_22, (((((min((arr_12 [i_0] [i_2] [i_2] [i_3 - 2]), (arr_12 [i_2] [i_2] [i_2] [i_2])))) << (((arr_12 [i_0] [i_0] [i_0] [i_0]) - 211)))))));
                                var_23 = (1 ^ 65535);
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 &= (min(((-((min(1, 4))))), 32));
    var_25 = (min(((max(var_10, var_8))), var_0));
    #pragma endscop
}

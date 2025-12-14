/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((min(var_1, (max(((50 ? var_1 : -76)), 1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = ((407 ? 245 : 1));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_0] [i_2] [i_3] [i_1] [i_0] [i_4] = (max(((max(-407, 11))), ((var_4 ? (arr_3 [i_2 - 1]) : (arr_3 [i_2 + 1])))));
                                arr_18 [i_0] [6] [i_1] = ((((min(var_8, (max(244, 12288))))) ? (max((arr_14 [i_2] [i_2] [i_2 - 2] [i_2] [i_2]), ((-408 ? 0 : 1099511627774)))) : (((((((arr_3 [7]) ? 255 : var_4))) ? 236 : (((arr_13 [i_0] [i_0] [i_2] [i_0]) ? var_7 : var_3)))))));
                            }
                        }
                    }
                    var_13 = (min(var_13, ((min((min((max(var_6, var_0)), (((arr_8 [i_0] [i_0] [i_0] [i_2]) ? (arr_8 [1] [i_1] [i_1] [i_2]) : var_1)))), (min(var_6, var_1)))))));
                    arr_19 [i_0] [i_0] = (min(((max(((max(1, 0))), (arr_14 [i_1] [i_1 - 3] [2] [i_1 - 3] [i_1])))), var_4));
                }
            }
        }
    }
    var_14 = max(12316, (min(0, var_2)));
    #pragma endscop
}

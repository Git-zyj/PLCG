/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max(((0 ? var_3 : var_8)), -var_8))) ? var_1 : ((var_12 - ((var_0 ? var_2 : 1)))));
    var_15 = 92;
    var_16 = (max(var_6, (!var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = max((min((81395327 | var_0), (((-(-127 - 1)))))), (min(((max(0, 81395327))), (((arr_7 [i_2 - 1] [8] [i_2 - 1]) ? 255 : var_4)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = ((((max((arr_6 [i_3 + 1] [i_4 - 1] [i_2 - 1]), (arr_6 [i_3 - 1] [i_4 + 1] [i_2 + 1])))) ? ((((arr_6 [i_3 + 1] [i_4 + 3] [i_2 - 1]) < (arr_6 [i_3 - 1] [i_4 - 2] [i_2 + 1])))) : var_4));
                                var_19 = (max(var_19, (((((((arr_14 [i_4] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 1] [11]) / ((0 ? (arr_14 [i_0] [i_1 + 1] [16] [16] [i_4 + 1] [i_0] [1]) : (arr_12 [i_0] [i_1] [i_2] [6] [i_0])))))) ? ((~(max(7, (arr_4 [i_1] [13] [i_4 + 3]))))) : ((((arr_12 [i_4 + 3] [i_4 - 2] [i_4 - 1] [4] [i_4 + 1]) ? 254 : (!var_5)))))))));
                                var_20 = ((((max(var_3, (arr_6 [9] [i_1 + 1] [i_3])))) ? (arr_14 [i_1 - 1] [i_1 + 1] [i_2 - 1] [i_2] [i_2] [i_3 - 1] [i_4 - 2]) : (arr_13 [i_0] [i_0] [i_4 - 2])));
                                var_21 += (((((((arr_1 [i_0] [i_0]) >> (-13722 + 13723))) & -4)) >= (((arr_11 [i_0] [i_1 + 1] [i_4]) / ((var_10 ? 1 : 8))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

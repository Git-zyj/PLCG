/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_19 += (max((((((var_2 >> (-120 + 123))) <= 1))), (((min(var_2, (arr_0 [i_1]))) / ((var_4 ? 102 : var_1))))));
                var_20 = ((~(((var_12 ^ var_5) & ((255 ? var_9 : 524287))))));
                var_21 = ((((((32767 ? (arr_0 [i_1]) : var_17)) == (~var_10))) ? ((((((arr_2 [i_1] [6] [i_0]) - 3))) ? (min(var_0, 3)) : (((-127 - 1) | (arr_3 [i_1 + 1]))))) : (((((arr_1 [i_1 + 2] [i_1]) != var_18))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_22 = (arr_10 [i_0]);
                                var_23 *= (max((((min(19, var_17)))), ((((-29 ? (arr_6 [i_1] [i_4] [i_2]) : var_4)) >> (((min((arr_1 [i_0] [i_0]), (arr_9 [i_0] [i_0] [i_0] [i_3 - 3] [9] [i_4] [i_0]))) - 25644))))));
                                var_24 = 1;
                                arr_11 [i_2] [i_1] [i_2] [i_3] [i_4] [i_3] = (min(((((((((arr_10 [0]) == var_5)))) < (min(1, (arr_1 [2] [i_1])))))), -12));
                                var_25 = 1056964608;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_5;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150762
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
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_4] [i_4] [i_4] [i_4] [i_0] = (+(((3388319446 % 4294967290) ? var_6 : (((-9223372036854775807 - 1) ? var_3 : 2016058830)))));
                                arr_12 [i_2] [i_3] [i_3] [i_3] [i_4] [i_2] = ((((max((486092824 && 3441148144155573134), 52110))) ? var_0 : 26989));
                                arr_13 [i_0] [i_3] [i_3] = min(var_11, var_11);
                                arr_14 [i_0] [i_1] [i_2 + 2] [i_2] [10] [i_3] [i_4] = max((arr_0 [i_1]), ((9223372036854775807 ? 9223372036854775807 : 4294967295)));
                            }
                        }
                    }
                    var_14 = (min(var_14, ((~(min((~27017), var_9))))));
                    var_15 = ((arr_1 [i_1]) ? ((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2 + 1]) ? (((arr_3 [i_0] [i_0] [i_0]) ? 4294967295 : (arr_3 [10] [i_1] [i_1]))) : (((32767 ? var_1 : 38547)))))) : (max(((56745 ? 451246905 : -5427847989974589714)), (((0 ? var_9 : (arr_7 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                }
            }
        }
    }
    var_16 = (((-5897322778224184692 / 32767) ? ((((min(var_9, var_7))) ? (((var_7 ? var_10 : 451246924))) : ((var_11 ? 32767 : var_2)))) : (((var_9 ? var_7 : 0)))));
    #pragma endscop
}

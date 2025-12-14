/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_3 ? (((var_13 ? (~197) : (max(var_16, var_4))))) : ((63357 ? 576460683583946752 : -576460683583946753))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((-107 ? (max(576460683583946752, (max(1, var_1)))) : ((((((arr_0 [i_0]) ? -576460683583946753 : var_11))) ? ((var_15 ? (arr_1 [5]) : -576460683583946761)) : (arr_2 [i_0])))));
        var_19 = (max((min((var_11 && var_8), var_5)), (((!(!3359278947))))));
        arr_3 [i_0] = ((((min(31354, ((var_0 ? (arr_1 [i_0]) : (arr_2 [i_0])))))) ? (max((max((arr_1 [i_0]), var_10)), var_5)) : (((arr_0 [i_0]) ? var_13 : (arr_0 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_20 = (((((arr_12 [i_1] [i_1]) > (max(576460683583946752, (-127 - 1))))) ? (~897058239) : (max(((-(arr_1 [i_3]))), ((-576460683583946753 ? 1 : (-2147483647 - 1)))))));
                    var_21 = (arr_12 [i_1] [i_3 - 1]);
                }
            }
        }
    }
    #pragma endscop
}

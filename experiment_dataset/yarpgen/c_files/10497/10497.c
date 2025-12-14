/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((var_3 * ((((!(~var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = (arr_1 [i_1]);
                    var_12 = ((1 ? ((0 ? (((var_5 ? 128 : 2427759631))) : (arr_1 [i_0]))) : (((max(12, (arr_4 [i_1])))))));
                    var_13 -= (max((arr_3 [i_0]), ((((1867207664 & -337765147969594710) == (~-5256824419976474635))))));
                    var_14 = (max((max((!var_3), (~-6354469362462069770))), (((~((131068 ? 25842 : 4294967294)))))));
                    var_15 = (max(var_15, ((((arr_0 [i_2]) & (min(var_3, (((arr_2 [i_0]) ? (arr_0 [i_1]) : 2845241754)))))))));
                }
            }
        }
    }
    var_16 = var_7;

    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_17 = ((~(max((4294967289 & 8707854288134520000), (arr_8 [i_3] [i_3])))));
        var_18 |= ((var_3 == ((-(arr_2 [i_3])))));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_19 = 1;
        var_20 = (((((min((arr_5 [i_4]), 12541))) || (!1744499433778110634))));
    }
    #pragma endscop
}

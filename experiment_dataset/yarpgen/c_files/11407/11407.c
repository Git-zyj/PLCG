/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = -2506054095615715932;
        arr_3 [i_0] = ((~((-2931 ? (~-2911) : (min(var_12, 3418068228094492886))))));
    }
    for (int i_1 = 2; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1 + 1] = (var_10 ? (max((((!(-2147483647 - 1)))), 2909)) : ((((!((min(764, 2888))))))));
        var_16 = (min(var_16, ((((max(var_2, 783)))))));
        var_17 = var_11;
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_18 = (((var_5 ? var_0 : (-9223372036854775807 - 1))));
        var_19 += ((((max((min(2898, -2882)), (min(var_9, 1))))) > -2898));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                arr_15 [i_3] [5] = 100663296;
                var_20 = ((+(min((var_8 / var_6), (-31311 && 24)))));
            }
        }
    }
    var_21 = ((95 ? 11461 : 28060));
    #pragma endscop
}

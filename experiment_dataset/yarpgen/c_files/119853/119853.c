/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (min(var_11, ((((((max((arr_3 [i_0]), 2559286441))) ? (max(-246876610, 2559286454)) : 255))))));
        var_12 = (min(var_12, (min(4636841003482828306, 68))));
        arr_4 [i_0] = max((((-((var_2 ? 68 : (arr_1 [i_0] [i_0])))))), (min(0, (((880759590921250440 ? (arr_1 [1] [i_0]) : 246876625))))));
        arr_5 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = ((((arr_2 [i_1]) ? var_10 : -246876605)));
        var_14 = (((((min(14924283213421080887, 344776903)))) ? ((188 / (max(3400453646, (arr_0 [i_1]))))) : 1));
        var_15 = (max((((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [5]))), (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
        var_16 = 216;
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_17 = ((+(((arr_11 [i_2 - 2]) - -246876628))));
                    arr_15 [i_2] [i_2 + 2] [i_2 - 2] [i_2] = (!30766);
                    arr_16 [i_2] [i_2] = ((1735680841 ? (min((arr_13 [i_2] [i_3 + 1] [i_3] [i_4]), (min(var_8, 1)))) : ((((((-(arr_8 [i_2 + 2])))) ? (((var_6 ? 2559286443 : 324592853))) : (max(var_3, var_6)))))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((max(var_3, var_5)) | (((!(~var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (max((~var_4), (30 > 36366)));
                    var_16 = (((~(arr_6 [i_0]))));
                    var_17 = 14653102569915223437;
                    arr_8 [i_1] = (arr_6 [i_1 - 1]);
                }
            }
        }
    }
    var_18 = var_4;
    var_19 = ((((((((16 ? 17 : var_2))) ^ 4568229509277615761))) >= ((var_2 ? var_13 : var_12))));
    var_20 = var_13;
    #pragma endscop
}

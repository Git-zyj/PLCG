/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((!32767) ? ((var_19 ? var_3 : var_19)) : (var_6 / var_3))));
    var_21 = var_2;
    var_22 = (max(var_22, 32767));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_23 = ((-(((arr_4 [i_0] [i_1] [i_2]) ? ((-(arr_3 [i_0] [4] [i_2]))) : 34747))));
                    var_24 = ((((((arr_6 [i_0] [i_2]) ? (arr_7 [i_0] [i_0] [i_2]) : (!32767)))) ? -var_17 : (!32767)));
                    arr_8 [i_0] [i_0] [i_1] [i_0] = (arr_5 [i_0] [i_1]);
                }
            }
        }
        var_25 = ((var_8 ? (max(((var_13 ^ (arr_6 [i_0] [i_0]))), (255 ^ 255))) : (((((arr_4 [2] [i_0] [i_0]) && (arr_4 [i_0] [i_0] [i_0])))))));
        var_26 = ((!(((~(arr_6 [i_0] [i_0]))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (((((var_10 ? ((var_6 ? (arr_7 [i_0] [i_0] [i_0]) : var_8)) : (~var_8)))) ? (min((var_8 / var_6), (((var_8 ? var_15 : var_8))))) : (!var_9)))));
                    var_17 |= (((min((arr_4 [i_0] [i_2]), var_13)) | ((((!((max(var_4, (arr_2 [i_1] [i_2]))))))))));
                    var_18 = ((var_11 ? ((((~var_14) < ((-(arr_2 [i_0] [i_1])))))) : var_2));
                }
            }
        }
    }
    var_19 = ((((max(var_11, (max(var_10, var_3))))) ? (min((~var_13), ((var_13 ? var_1 : var_10)))) : var_5));
    #pragma endscop
}

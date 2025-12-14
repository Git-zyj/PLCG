/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] = (((((var_13 ? ((var_8 ? (arr_5 [i_0] [i_1] [18]) : (arr_6 [i_0] [i_0] [i_0 + 1]))) : (((max(var_4, 0))))))) ? (((-60766 ? (((-(arr_5 [i_0] [i_2] [8])))) : (var_0 & var_4)))) : var_7));
                        var_17 = var_6;
                    }
                    var_18 = -89;
                }
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}

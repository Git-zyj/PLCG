/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_9 ? var_3 : var_5))) ? var_1 : (max(var_9, var_14)))));
    var_18 = ((var_11 ? ((((max(var_8, var_12)) <= var_3))) : (((((var_1 ? var_7 : var_9)) >= var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_10 [i_2] = ((!(((-var_0 & ((8191 + (arr_5 [i_2]))))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (+((1 ? (arr_0 [i_0]) : (arr_0 [i_1]))));
                    var_19 = ((-(min((arr_7 [i_0] [i_1] [i_0] [i_0]), var_11))));
                }
            }
        }
    }
    var_20 = var_4;
    #pragma endscop
}

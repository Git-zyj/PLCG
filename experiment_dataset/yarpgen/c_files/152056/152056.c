/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 &= ((-(((arr_6 [i_2 - 2] [i_1] [i_0]) ? 111 : (arr_7 [i_2 - 2] [i_1] [i_1])))));
                    var_18 = (max(var_18, (((~(((((14718 ? 1 : var_3))) ? (max((arr_5 [i_0] [i_1] [i_0]), 4294967293)) : ((((arr_1 [i_0] [i_1]) ? (arr_3 [i_0]) : 70))))))))));
                    arr_8 [i_2] [i_1] [i_0] [i_0] = (max(var_10, (((((var_7 ? (arr_4 [i_2]) : var_1)) <= 7)))));
                }
            }
        }
    }
    #pragma endscop
}

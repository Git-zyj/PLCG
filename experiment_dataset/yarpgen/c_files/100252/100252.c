/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 - 1] = ((((max((arr_2 [i_0]), (arr_2 [i_0])))) < ((var_3 - (arr_2 [i_0])))));
                    var_10 = (((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_5 [i_0 + 1] [i_0 + 1]))) + var_4));
                    var_11 = -32756;
                }
            }
        }
    }
    var_12 = var_9;
    var_13 = (((max(var_9, (min(164774265, var_6)))) <= var_7));
    var_14 = var_5;
    #pragma endscop
}

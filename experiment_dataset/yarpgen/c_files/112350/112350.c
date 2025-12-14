/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_12);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 6;i_2 += 1)
            {
                {
                    var_14 = ((((arr_2 [8] [6] [7]) + (arr_2 [3] [9] [8]))));
                    var_15 = ((~(((255 || (-127 - 1))))));
                }
            }
        }
        var_16 = var_6;
        var_17 += (((arr_7 [i_0 + 1]) ? 14559242917802624782 : 20514));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_18 = min((min((arr_8 [i_3]), ((-3070 ? (arr_9 [10]) : var_4)))), (((-(arr_9 [i_3])))));
        arr_10 [22] = var_4;
    }
    var_19 = max((((7864 ? 18446744073709551608 : 0))), (((-(~114)))));
    #pragma endscop
}

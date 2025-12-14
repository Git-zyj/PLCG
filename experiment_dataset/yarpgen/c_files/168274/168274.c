/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 -= (arr_3 [2]);
        var_15 = ((!-232) ? ((((var_13 << (((arr_3 [i_0]) - 22089)))))) : (arr_3 [i_0]));
        var_16 = (((((var_7 - var_7) + (arr_0 [i_0 + 3] [i_0 + 2]))) - var_11));
        var_17 = (max(var_17, ((min(var_7, ((((arr_1 [i_0 + 1]) ? var_11 : (arr_1 [i_0 - 2])))))))));
        var_18 = (arr_2 [i_0]);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                arr_11 [i_1] [20] = (arr_4 [i_1 + 3]);
                var_19 ^= ((!(((((230 - (arr_6 [i_2]))) - (~var_4))))));
                var_20 = (max((((((-(arr_6 [i_2])))) + ((-(arr_4 [i_2]))))), 218));
                arr_12 [i_2] [i_1] [i_1] = var_9;
            }
        }
    }
    #pragma endscop
}

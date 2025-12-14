/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = max(8962173323910647918, var_11);
                    arr_11 [i_1] [i_2] = ((var_12 << (((~var_13) - 67))));
                    arr_12 [i_2] = ((((max(var_5, (arr_10 [i_0] [i_2] [i_2])))) ? ((((arr_10 [i_0] [i_2] [i_0]) && (arr_10 [i_0] [i_2] [14])))) : ((var_18 ? (arr_10 [i_0] [i_2] [i_2]) : 6909))));
                    arr_13 [i_2] [i_2] [i_0] [i_1] = (arr_1 [i_1] [i_2]);
                }
            }
        }
        var_21 &= 1;
        var_22 ^= (arr_7 [i_0]);
        var_23 = (((arr_4 [i_0]) | ((var_0 ? -3860570582322668275 : (arr_3 [i_0] [i_0])))));
    }
    var_24 = -3860570582322668275;
    var_25 = var_9;
    #pragma endscop
}

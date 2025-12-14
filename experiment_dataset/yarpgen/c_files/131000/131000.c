/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (min((((~var_8) ? var_12 : ((min(var_12, var_11))))), var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((max(((((var_13 / -31497) / var_1))), (((((-(arr_1 [i_0] [i_1])))) * (arr_4 [i_0] [i_0] [4]))))))));
                var_16 = (min(var_16, (((var_10 * (((arr_0 [i_0] [i_1]) << ((((arr_5 [8]) && (arr_4 [i_0] [i_0] [9])))))))))));
                arr_6 [i_0] [i_0] [i_0] = var_8;
                var_17 += (((arr_3 [i_0] [1] [i_1]) ? (arr_2 [i_1]) : (((((((arr_5 [7]) ? var_1 : var_0))) || (((31482 * (arr_4 [i_0] [i_0] [i_0])))))))));
            }
        }
    }
    var_18 = ((var_11 ? var_0 : var_3));
    #pragma endscop
}

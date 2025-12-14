/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(var_3, ((((((204420136 ? -8520 : var_7))) || (((var_10 ? var_7 : var_6)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((var_11 & ((((arr_2 [i_2 + 1]) >= (arr_1 [i_0]))))));
                    var_19 = var_17;
                    var_20 = (((((((max((arr_5 [i_0] [i_1]), 8521))) > (arr_6 [i_0] [i_2 - 1] [i_2 + 2])))) + ((((arr_7 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 - 1]) || -8512)))));
                    var_21 = var_2;
                }
            }
        }
    }
    var_22 = ((((var_13 ? var_14 : var_4)) > var_8));
    #pragma endscop
}

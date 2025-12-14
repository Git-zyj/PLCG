/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0 - 1] = (arr_4 [i_0]);
                var_17 = (max(var_17, (min(2508075503, (2508075503 / var_14)))));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_18 = (((((~(((15082 != (arr_5 [i_0 + 1] [i_1] [i_2 - 1]))))))) ? var_2 : (((~12921) ? 43 : var_14))));
                    arr_10 [12] [i_1] [i_1] [i_0] = ((!((min(var_3, var_3)))));
                    var_19 += ((((((arr_9 [i_2 + 1] [i_2] [i_2]) | (arr_5 [i_2 + 1] [i_2 + 1] [i_2])))) || var_12));
                }
                arr_11 [i_0 - 1] [i_0] = var_15;
            }
        }
    }
    var_20 *= -var_8;
    #pragma endscop
}

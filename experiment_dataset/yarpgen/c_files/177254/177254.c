/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_14 ? var_13 : var_3)))) ? (((-1386832456 || var_13) ? (var_19 - var_19) : -42759598693408603)) : (!var_4));
    var_21 = ((((min(var_1, var_5))) ? var_0 : ((((var_3 | var_11) >= var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] [i_0] = ((-(arr_4 [i_0] [i_1 + 1])));
                arr_6 [i_1] = var_0;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] = (((arr_10 [i_3] [i_3] [i_3] [i_3] [i_3]) ? ((((min((arr_3 [i_0] [i_3]), var_15))) ? ((var_9 ? var_5 : (arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]))) : (arr_1 [i_0]))) : 48079));
                            var_22 = (((min(var_11, (arr_0 [i_1 + 1] [i_1 - 1])))) ? (((arr_11 [1] [i_1 - 1] [i_1 + 1] [i_2 + 1] [i_2] [i_2]) ? 18446744073709551598 : var_0)) : (arr_0 [i_0] [i_1 - 1]));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

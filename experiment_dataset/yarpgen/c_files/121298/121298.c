/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((~((211 ? 1 : -3)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = min((((+((var_11 ? (arr_4 [8] [9] [8]) : 2064384))))), (max((arr_3 [i_0 - 1] [i_0 - 1]), (arr_3 [i_0] [i_0 + 1]))));
                arr_5 [i_0 - 1] = ((var_3 != ((var_3 ? -var_3 : (min(3, (arr_2 [i_0] [i_1])))))));
                var_19 = (~79);
            }
        }
    }
    var_20 = (var_9 ? ((var_9 ? ((var_4 ? -6486 : 79)) : (!-88))) : var_7);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_13 [i_2] [4] = var_15;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_21 = ((~(-69385839 & 2)));
                            var_22 = ((254 ? -4 : -107));
                            arr_19 [i_2] [i_3] [5] [i_5] [i_5] [i_5] = (((((241 ? var_5 : 2808851757235788420))) ? (((arr_17 [i_2] [i_3] [i_4] [i_5]) | ((8789648024983153428 ? 79 : var_11)))) : (((-15993 | 3) ? ((var_5 >> (var_16 - 106))) : 2))));
                        }
                    }
                }
                var_23 = (min(var_23, (((((((arr_12 [i_2]) ? (arr_12 [i_3]) : var_6))) ? ((15637892316473763195 ? 8789648024983153428 : 1)) : (((~(arr_12 [i_2])))))))));
            }
        }
    }
    var_24 = (var_7 ? ((var_14 ^ (min(var_14, var_8)))) : (((374101885 ? 2 : var_16))));
    #pragma endscop
}

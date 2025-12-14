/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = var_7;
                    arr_9 [i_0] [10] [i_0] [i_1] = (9223372036854775807 > ((((((var_9 ? 86 : var_13))) ? ((~(arr_2 [i_0]))) : var_14))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 ^= 4294967295;
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0] = (((((((var_5 ? 1 : (arr_11 [i_0])))) ? (min(var_8, var_13)) : (((86 ? var_3 : var_4)))))) ? (max((((4294967295 | (arr_11 [i_4])))), (min(18446744073709551615, var_16)))) : ((min(((((arr_5 [i_0] [i_1] [i_2]) && var_3))), 4294967286))));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_3] [3] = ((+(((arr_5 [i_0] [i_1] [i_2]) ? ((38473 ? 18446744073709551615 : 95)) : var_14))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (((!(!86))) ? var_13 : 1);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((((!var_2) ? var_6 : (1 + 29602)))) && var_13);
    var_18 = ((var_0 || (((((var_5 ? -1 : 18446744073709551615))) && (var_4 && var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = ((((min((arr_3 [i_0] [i_0 + 3] [i_2]), (arr_3 [i_0] [i_0 + 3] [i_0])))) & ((max(var_3, var_5)))));
                    arr_8 [i_0] [i_0] [i_0] = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 *= (max((((min(7, (arr_7 [i_4] [i_2] [i_0] [i_0]))))), (min((arr_1 [i_0 + 3]), (arr_2 [i_2])))));
                                arr_13 [i_4] [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] = (((((((1 ? 189 : 4238444601354959485)) >> ((var_3 / (arr_6 [i_1] [i_1] [i_0])))))) ? (max(((min(1988566687, 1))), (arr_6 [i_0 - 1] [i_3 + 1] [i_0]))) : (arr_11 [i_4] [2] [i_4] [1] [i_4])));
                            }
                        }
                    }
                    arr_14 [i_1] [i_0] [i_2] = 0;
                }
            }
        }
    }
    #pragma endscop
}

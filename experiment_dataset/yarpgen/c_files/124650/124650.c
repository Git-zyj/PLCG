/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                var_13 -= (((~1073741824) ? (((~(arr_2 [i_1 - 2])))) : (max(var_8, (arr_2 [i_0 + 2])))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 |= var_0;
                                var_15 = 1073741824;
                                arr_14 [i_0] [i_1] [i_0] |= (arr_7 [i_0 - 2] [i_0 - 2] [1] [i_3]);
                                var_16 ^= (~2147483647);
                            }
                        }
                    }
                }
                var_17 = (((var_1 ? (arr_11 [18] [i_0 - 2] [i_0 - 1] [18] [14]) : 18446744073709551608)));
                var_18 = (!var_8);
            }
        }
    }
    var_19 = (((((((59912 ? -1073741844 : 213))) ? (min(42378, var_6)) : (2147483647 + var_6))) - var_6));
    var_20 = var_5;
    var_21 = (max(var_21, (((var_5 ? var_9 : var_7)))));
    #pragma endscop
}

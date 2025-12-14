/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((~8017605394401476549) ? ((min((var_7 ^ var_8), ((max(var_5, var_11)))))) : (((var_2 * var_8) ? var_9 : (-8017605394401476552 / var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_15 |= -8017605394401476549;
                            var_16 &= ((((((!(((~(arr_2 [i_3])))))))) + ((((max(8017605394401476530, 43))) | ((8017605394401476555 ? 232 : 16391054844709532848))))));
                            var_17 = (((((-(arr_5 [0])))) ? ((-38 ? (arr_7 [i_0] [16] [16]) : 100)) : (((-39 * ((max((arr_10 [2] [i_1] [i_1] [6] [i_2] [1]), 54907))))))));
                            var_18 |= ((((-(((arr_1 [9]) ? var_3 : 13089965637108471041))))) ? (arr_3 [i_1] [i_1] [i_3]) : (min(((-5361391459510743193 ? var_7 : (arr_5 [i_1 - 2]))), (arr_1 [i_0 + 1]))));
                            var_19 = (min((min((arr_1 [23]), (arr_1 [i_3 - 2]))), (max((arr_1 [i_3 - 2]), (arr_1 [i_3 + 1])))));
                        }
                    }
                }
                var_20 = ((~((((((!(arr_5 [7]))))) - 106))));
                var_21 += (-(((((1548207554370676263 ? 10603 : -1929474881))) + ((15647762199087866031 ? -8621 : -5361391459510743171)))));
            }
        }
    }
    #pragma endscop
}

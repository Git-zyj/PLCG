/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = ((var_11 == ((~(var_7 | var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] = (((((((!(arr_6 [3] [i_2])))) == var_11)) ? (((arr_2 [i_0] [i_1] [i_2]) + ((0 ? 238401464 : 696945270)))) : ((~(max(238401459, 238401464))))));
                    arr_8 [i_0] [i_2] [i_1] [i_0] &= ((((max(181, (11 % var_6)))) ? (var_9 * 99) : ((max(65531, 13418)))));
                    var_14 -= (((((~(arr_3 [1])))) ? (~1795857766) : ((((162 - 1) <= (arr_0 [i_1]))))));
                }
            }
        }
    }
    var_15 = (((((var_0 > ((max(var_9, -32765)))))) + var_0));
    #pragma endscop
}

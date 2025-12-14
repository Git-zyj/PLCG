/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_10 [1] [i_1] = ((113 >= (arr_4 [i_1] [i_2])));
                    arr_11 [i_0] [i_1] [i_0] = max(((56233 & (arr_9 [i_2] [i_0] [i_0]))), ((min(var_6, 32))));
                    var_12 = (-(min(var_8, 14)));
                    arr_12 [i_0] [i_0] &= (max(((((arr_0 [i_0]) == 47))), ((9303 ^ ((max(56233, 223)))))));
                    var_13 *= ((32 > (max((max(var_8, var_10)), var_3))));
                }
            }
        }
    }
    var_14 = ((max((max(227, var_9)), var_7)));
    var_15 = ((((((672455546 ? var_4 : var_8))) ? var_5 : (max(6754458534149042026, 12624)))) & var_0);
    #pragma endscop
}

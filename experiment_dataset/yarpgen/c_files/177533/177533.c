/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 ^= (((arr_2 [i_0] [i_1]) | ((var_8 ? ((2100912928069548380 >> (16345831145640003267 - 16345831145640003234))) : (arr_0 [i_0] [i_1])))));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] &= (-(min(16345831145640003236, (~var_5))));
                    var_13 &= ((min((arr_5 [i_0] [i_0] [i_2 + 1] [i_1]), (arr_2 [i_0] [i_1]))));
                    var_14 = (((((arr_3 [i_1] [i_2]) ? var_2 : -262144)) & ((min(var_9, (((arr_1 [i_0] [i_0]) >> (128 - 98))))))));
                    var_15 = ((min((!2100912928069548379), var_5)));
                }
            }
        }
    }
    var_16 = (max(var_16, var_1));
    #pragma endscop
}

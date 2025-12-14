/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((-117384515 != var_5) ? -3860817641852441299 : var_8)) * (!var_12)));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_14 = ((max(-var_11, ((-(arr_0 [i_0]))))));
        var_15 |= (max((min(((var_5 ? var_9 : (arr_1 [15] [i_0]))), var_3)), 2036410757));
        var_16 = ((var_6 ? 9432177454067324838 : (((((-2059366184 ? var_8 : (arr_1 [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_17 -= max((((~(max((arr_7 [i_3] [i_3] [i_0] [i_3]), 32767))))), (((arr_1 [i_0 - 1] [i_1 + 1]) ? (((var_11 ? var_6 : var_8))) : var_0)));
                        var_18 = (arr_5 [i_0] [i_2]);
                        arr_9 [i_2] [i_1] = (~var_7);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 = ((3275030789740029881 ? 10309012960841831282 : 2036410757));
        var_20 = (min(var_20, ((((arr_1 [i_4] [1]) ? (arr_7 [i_4] [0] [0] [i_4]) : (arr_1 [i_4] [i_4]))))));
        var_21 |= 2258556522;
    }
    var_22 ^= ((~(-15142 || 2036410741)));
    #pragma endscop
}

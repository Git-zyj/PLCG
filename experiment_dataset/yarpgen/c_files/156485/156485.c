/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 |= (arr_0 [4]);
        var_13 ^= var_11;
        var_14 = (min(var_14, ((((arr_0 [i_0]) == 96452501)))));
        var_15 = ((var_0 ? var_7 : (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] |= ((((((arr_2 [i_1 - 1]) ? -8969428931587697531 : (arr_2 [i_1 - 1])))) ? (((-(arr_2 [i_1 - 1])))) : 1533211));
        var_16 &= ((((arr_2 [i_1 + 1]) / (arr_2 [i_1 - 1]))));
        var_17 = (max(var_17, 96452501));
        var_18 = (max(var_18, (((4198514773 ? var_7 : (((331 ? 16236 : (arr_2 [i_1])))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_19 = (max(var_19, 3820108997));
                var_20 |= ((8759223149804676064 * 4129231779) || (((30729 ? ((var_6 ? (arr_7 [i_3]) : 3486440281)) : ((((arr_8 [i_2] [i_2] [i_3]) ? (arr_9 [i_3]) : (arr_10 [i_2]))))))));
                arr_11 [i_2] = ((!(~var_7)));
            }
        }
    }
    #pragma endscop
}

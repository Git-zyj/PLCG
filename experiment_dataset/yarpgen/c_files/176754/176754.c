/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((max(3762610372, 10792312079976680545)) >> (((max(-1, -1418722093799230882)) + 43))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (min((max((arr_3 [i_0] [i_1] [i_0]), (arr_3 [i_1] [i_1] [i_0]))), ((((arr_0 [i_0] [i_1]) == (arr_3 [i_0] [i_1] [i_0]))))));
                arr_6 [i_0] [i_1] [i_0] = ((+(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : (arr_5 [i_0] [i_0])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_3] [i_4] [i_4] = -61;
                    arr_14 [i_3] = ((((min((arr_3 [6] [i_3] [i_2]), (~7654431993732871069)))) && ((max((arr_3 [i_2] [i_3] [i_3]), (arr_4 [i_2] [i_2]))))));
                }
            }
        }
    }
    var_21 = (((~var_5) * (-1 < 0)));
    var_22 = ((((var_6 | var_4) == var_11)) ? var_5 : (((((max(7654431993732871066, -8874916273656545400))) || var_2))));
    #pragma endscop
}

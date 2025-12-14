/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_11 + ((((var_5 + -332967646) == (var_7 % -1834507804))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((((1834507798 <= (min((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_2]))))) ? ((((332967645 ? var_5 : (arr_4 [i_2] [i_1] [9]))) | (((arr_2 [i_1] [i_1] [i_2]) & -4996441631721104294)))) : 1834507803));
                    var_17 = max(((((arr_6 [i_2] [i_1] [i_0]) != (var_5 > 1834507789)))), (max((!-41), ((332967634 ? 49 : 332967631)))));
                    arr_8 [i_1] = 5133485075570467415;
                }
            }
        }
    }
    var_18 = (-(((var_12 == var_10) * var_15)));
    var_19 = ((-((-1509432239 ? var_13 : var_10))));
    #pragma endscop
}

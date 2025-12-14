/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 ^= (min(((7 >> (-8731 + 8753))), (--15)));
        var_17 = (min((arr_2 [i_0]), (((((arr_1 [i_0]) ? 4294967295 : (arr_1 [i_0]))) / (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (((max((arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 1]), (arr_7 [i_0] [i_0] [i_1 + 1]))) | (((((arr_7 [i_0] [i_0] [i_1 - 2]) + 9223372036854775807)) >> (((arr_7 [0] [14] [i_1 + 1]) + 2773814010739851791))))));
                    var_19 = (min(var_19, 163));
                }
            }
        }
    }
    var_20 = ((((((((var_14 + 2147483647) << (4294967297 - 4294967297))) << (var_0 - 2265)))) ? (min((4294967280 * var_5), (((var_8 ? -8319610170827620096 : var_9))))) : var_7));
    var_21 = (max(var_21, (16690 >> 1)));
    var_22 &= ((-(((!(var_6 % var_14))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_14 [i_3] = ((-86 & (((arr_13 [i_4] [i_3]) * ((max(-86, 233)))))));
                var_23 = (min(var_23, (((-8319610170827620096 * (((arr_11 [i_3] [i_4]) ? 4 : (arr_13 [i_3] [i_4]))))))));
            }
        }
    }
    #pragma endscop
}

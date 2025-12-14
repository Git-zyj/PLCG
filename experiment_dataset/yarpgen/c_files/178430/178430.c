/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = ((16744448 ? (min(1, (var_8 + -5696532963904395777))) : (((max(1, 1))))));
        var_14 = 226316315897730798;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_4 [i_1] = (min(((max(-13326, ((min(var_2, var_2)))))), (-1 % -24)));
        arr_5 [i_1] [i_1] = -226316315897730798;
        arr_6 [i_1] = (77 && 399950210);
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_3] [i_3] = ((((((~-18) ^ (min(var_4, var_4))))) ? (((~var_2) ^ -1272219007)) : -109));
                var_15 = (((!53) ? 4059420024 : ((min(((13326 ? var_12 : 399950208)), ((-65 ? var_3 : var_0)))))));
            }
        }
    }
    var_16 = var_4;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (-2053 + 5764809006382107340);
        var_16 = (max(var_16, ((((((var_7 > -2053) ? (((max(var_8, var_1)))) : (var_14 | var_7))) > (var_7 / var_3))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_1] = (max(((((((arr_9 [i_2] [i_3]) & (arr_9 [i_1] [i_3])))) ? var_9 : var_12)), ((var_10 ? 1 : -49))));
                    var_17 = (((((var_7 > var_10) % var_4)) != ((~(((arr_0 [i_1] [i_1]) ? 22596 : (arr_6 [2] [i_1] [i_1] [i_3])))))));
                    var_18 = ((((min((arr_4 [i_2 - 2] [i_2 - 2]), (arr_4 [i_2 - 2] [i_2 - 2])))) ? ((max((arr_5 [i_2 - 2] [i_2 + 1]), (arr_3 [i_3])))) : (((3365 > (var_8 > var_14))))));
                }
            }
        }
    }
    var_19 *= ((((var_6 ? (var_14 * var_12) : var_9)) > (var_8 == var_3)));
    #pragma endscop
}

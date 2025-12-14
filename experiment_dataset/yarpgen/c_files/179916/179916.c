/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_12 |= (var_10 ^ var_8);
        arr_4 [i_0 - 1] = (~var_6);

        /* vectorizable */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            var_13 = ((65535 ? (arr_3 [i_0 + 1] [i_1 + 1]) : var_2));
            arr_7 [i_1] = (208 ? 3403982182 : 5175592159644492972);
        }
        var_14 = var_4;
    }
    var_15 = (-(((241 ^ -2756182617526341564) ? -33 : var_2)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3] = (((((arr_9 [i_2]) ? -16900 : var_0)) * (!var_9)));
                arr_14 [i_2] [i_2] [i_3] = (((arr_10 [i_2]) ? (((!(arr_12 [i_3])))) : (((var_1 != (arr_12 [i_2]))))));
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}

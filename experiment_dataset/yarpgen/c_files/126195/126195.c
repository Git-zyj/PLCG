/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_11 -= (((arr_3 [i_0]) + (!0)));
        var_12 = (((16140901064495857664 | -1) ? (!var_6) : (arr_0 [i_0])));
        var_13 = (((!-1) | (arr_2 [10])));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 = (1 != 389748045);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                {
                    arr_10 [i_1] = 17915538657985096845;
                    var_15 = (-(arr_3 [i_1]));
                    arr_11 [i_2] [i_2] &= -11;
                    var_16 = ((-((-9 ? (var_10 < 4314809644967202465) : ((max(var_5, (arr_8 [i_1] [i_2] [i_1]))))))));
                }
            }
        }
        var_17 = var_1;
        arr_12 [i_1] [i_1] = ((~(arr_4 [i_1])));
        var_18 = (max(var_18, (((+((((arr_0 [i_1]) >= (arr_7 [i_1])))))))));
    }
    var_19 = var_10;
    #pragma endscop
}

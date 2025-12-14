/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (-(~var_13));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 += (~((~(arr_9 [i_0] [i_1] [i_0 - 3] [i_3]))));
                        var_20 = (~(~var_0));
                        var_21 = (max((!var_12), (max(1, (arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 + 3])))));
                        var_22 ^= (~(!511));
                    }
                }
            }
        }
        var_23 = ((~((~(arr_3 [i_0 - 3])))));
        arr_11 [i_0] = (min((max((arr_4 [i_0] [i_0 - 1]), var_2)), (!0)));
    }

    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {
        var_24 = (max(var_24, (((~(((!(arr_8 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 + 2])))))))));
        arr_14 [i_4] = (~(min(1, 31)));
        var_25 = ((max(var_4, var_2)));
    }
    var_26 = var_14;
    var_27 = var_15;
    var_28 = var_7;
    #pragma endscop
}

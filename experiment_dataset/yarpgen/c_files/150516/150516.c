/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_16 = var_15;
                    var_17 = ((~2101195360) ? (max(((var_8 ? var_13 : 511)), (max(var_3, 518)))) : (!var_10));
                    arr_7 [i_0] [i_1] [4] = ((((max((arr_5 [i_0] [9] [i_2]), ((max(85, 164)))))) % var_6));
                }
                arr_8 [i_0] [i_1] [i_1] = (max(-32766, 1));
            }
        }
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (max(((-(~var_1))), (arr_6 [i_3] [i_3] [i_3] [i_3])));
        var_18 += var_1;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_19 = (((arr_4 [8] [21] [i_4] [i_4]) ? -32766 : 3854525017));
        arr_15 [i_4] = var_3;
        var_20 = (min(var_20, 18446744073709551615));
        var_21 = (max(var_21, 440442294));
        arr_16 [i_4] [i_4] = ((var_6 ? 36028779839094784 : 65530));
    }
    #pragma endscop
}

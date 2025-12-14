/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = arr_0 [i_0] [i_0];
        var_13 = 13;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        arr_5 [i_1 - 2] [i_1 - 2] = ((var_2 & ((var_9 ? ((var_3 ? var_6 : var_10)) : -5413522574614118016))));
        var_14 = (arr_2 [i_1 - 1]);
        arr_6 [i_1] |= ((-5413522574614118037 ? (((var_5 != (((-2147483647 - 1) % (arr_3 [i_1 + 1])))))) : (((((var_7 ? (-2147483647 - 1) : var_6))) ? (!var_3) : 2147483617))));
        arr_7 [i_1] = (max((arr_3 [i_1]), ((((((arr_4 [i_1 + 1]) % 2303785193))) ? ((max(3439223782, -109))) : -5413522574614118013))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    var_15 = (var_10 % var_6);
                    arr_14 [i_2] [i_3] = (((6319053662876673031 || 1) & ((((((arr_10 [i_1 + 1] [i_2]) & var_11)) | 2147483647)))));
                    arr_15 [i_1 - 2] [2] [3] [i_3] = (+((~((var_0 ? (arr_9 [i_2]) : 2490813931)))));
                    arr_16 [i_1 - 2] [i_2] [i_3 - 1] = ((~((-1799570942 ? ((((arr_13 [i_3] [5] [i_2]) << (((-9111282719579612447 + 9111282719579612468) - 8))))) : var_2))));
                }
            }
        }
    }
    var_16 = 1799570927;
    var_17 = var_8;
    #pragma endscop
}

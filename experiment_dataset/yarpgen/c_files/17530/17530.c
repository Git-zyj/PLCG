/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_11 &= (((((!(((-38 ? var_1 : -38)))))) != ((var_10 ? var_3 : ((-73 ? -46 : 12264))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [19] [i_3] [i_3] = (((((var_1 || -1) ? 18028907893219619896 : var_5)) > (~var_8)));
                        var_12 = -3080;
                        arr_12 [i_3] [10] [i_1] [i_3] = (max(var_7, ((~((18446744073709551615 ? 53272 : 7466008225493828124))))));
                        var_13 ^= (1 < 9979532919929987240);
                        arr_13 [i_3] = ((-(24643 / -27662)));
                    }
                }
            }
        }
    }
    var_14 *= ((-((var_6 ? var_2 : ((-1 ? 18446744073709551615 : 127))))));
    var_15 = var_7;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_13 += var_4;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    arr_7 [i_0] [i_1 + 2] [i_1 + 2] [i_2 + 1] = (~-536957507);
                    var_14 = var_6;
                    var_15 = (max(var_15, var_4));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_16 = ((~(~165)));
                    var_17 = (i_0 % 2 == 0) ? (max((((((arr_9 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1]) + 9223372036854775807)) << ((max((arr_8 [i_0] [i_0]), (arr_8 [i_0] [i_0])))))), ((((((var_0 + 2147483647) >> (16181178 - 16181147))) - (min(var_3, (arr_2 [i_0])))))))) : (max((((((arr_9 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1]) + 9223372036854775807)) << ((((max((arr_8 [i_0] [i_0]), (arr_8 [i_0] [i_0])))) - 1)))), ((((((var_0 + 2147483647) >> (16181178 - 16181147))) - (min(var_3, (arr_2 [i_0]))))))));
                    arr_11 [i_0] [i_1] [i_0] [i_3] = 4130999536;
                }
            }
        }
    }
    var_18 = (-(~16181198));
    var_19 = var_10;
    #pragma endscop
}

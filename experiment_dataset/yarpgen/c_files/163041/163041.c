/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (((var_2 || 1096043019) >> (((var_8 ^ 0) + 95))));
        var_13 = ((-3777 ? 2 : 252));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        var_14 |= (((((var_1 ? (arr_7 [i_2]) : var_7))) + var_4));
                        var_15 *= (arr_9 [i_0] [i_1]);
                    }
                }
            }
            arr_13 [i_1] &= (3670016 ^ 19);
            var_16 = (min(var_16, (arr_3 [i_1])));
            arr_14 [i_0] = (((((arr_9 [i_0] [i_0]) || var_10)) ? ((((arr_4 [i_0] [i_1] [20]) ^ 13))) : (var_7 ^ var_0)));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            arr_19 [i_0] [i_0] [19] = ((-18332 - (arr_15 [i_4])));
            arr_20 [i_0] [i_0] = ((18446744073709551615 >> (-60 + 66)));
        }
    }
    var_17 = ((((((((var_2 ^ var_7) + 9223372036854775807)) >> (var_6 - 3911362055)))) ? 9037406757539799693 : (((2292063986773410360 ? var_8 : var_6)))));
    #pragma endscop
}

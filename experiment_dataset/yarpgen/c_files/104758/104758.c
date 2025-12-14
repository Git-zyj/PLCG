/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (min(var_15, var_15));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] &= ((-1796103964 ? 4294967295 : ((((arr_3 [i_0]) ? -1025325537 : 65526)))));
        var_21 += ((((min((-1773619345 + 219), (arr_1 [12])))) || 113));
        var_22 = (max(var_22, ((((arr_2 [i_0]) != (max((arr_2 [i_0]), (((arr_3 [i_0]) ? (-9223372036854775807 - 1) : (arr_0 [i_0]))))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_23 -= (arr_0 [i_0]);
                        var_24 = (max(var_24, (arr_0 [i_3])));
                    }
                }
            }
        }
        var_25 ^= arr_6 [1] [1] [1];
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_26 = (arr_13 [14] [14] [i_4]);
        var_27 = (max(var_27, (((30317 ? 124 : 5665453923705078207)))));
    }
    for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_28 &= (arr_2 [i_5]);
        var_29 = (min(var_29, 1));
        var_30 = (max(var_30, (arr_5 [i_5] [0])));
        var_31 = (max(var_31, ((((1 ? (arr_14 [6] [6]) : (arr_17 [i_5 - 2] [i_5])))))));
        arr_19 [12] &= (((min((((arr_15 [2]) & 65535)), (arr_15 [i_5]))) > (46085 > 1264633586)));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_32 = (min(var_32, (((arr_21 [i_6]) >= (arr_21 [1])))));
        var_33 *= (((((arr_21 [i_6]) ^ (arr_20 [i_6]))) == (arr_20 [i_6])));
    }
    #pragma endscop
}

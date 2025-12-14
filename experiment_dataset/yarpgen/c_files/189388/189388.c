/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_12 = (min(var_12, (((~(arr_0 [i_0 - 1]))))));
        var_13 = (((arr_1 [i_0 + 1]) % var_2));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (((arr_2 [i_2]) ? -11589 : (arr_0 [i_0 + 1])));
                    var_15 *= (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : var_10));
                }
            }
        }
        arr_9 [i_0] [i_0] = var_8;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 17;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((17444 ? var_10 : (arr_12 [i_3 - 1] [i_3 - 1])));
        var_16 = (min(var_16, ((((arr_0 [i_3]) ? (arr_1 [i_3 - 1]) : (arr_8 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))));
        arr_15 [i_3] = (((((-47 > (arr_6 [i_3] [i_3] [i_3] [i_3]))))) | var_7);
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 3; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {
                        var_17 = (((max((max(var_10, var_1)), 17434)) <= (min((arr_0 [i_5 - 2]), (((var_3 == (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_7]))))))));
                        var_18 = (min(var_18, ((((((-(max(var_3, (arr_19 [i_6] [i_6 - 1] [1])))))) ? ((((var_10 + 2147483647) >> (((arr_2 [i_4 - 1]) - 4476179405349142540))))) : ((min(var_10, var_1))))))));
                        var_19 = (arr_24 [i_4]);
                        var_20 = (((((arr_3 [i_4 + 1] [i_6 + 1]) - (arr_3 [i_4 + 1] [i_6 - 1]))) * (arr_3 [i_4 + 1] [i_6 - 1])));
                    }
                }
            }
        }
        var_21 ^= ((((min((((48112 != (arr_21 [i_4 - 1])))), (arr_1 [i_4])))) ? ((((var_7 < (8468566662883908284 && 48112))))) : (((((8468566662883908292 ? var_9 : (arr_23 [i_4 + 1] [i_4] [i_4] [i_4] [i_4])))) ? 48112 : (min((arr_16 [i_4] [i_4]), (arr_4 [i_4 - 1] [3] [3])))))));
        arr_27 [i_4] [i_4] = ((((0 ? 14 : 48111)) <= var_2));
        arr_28 [i_4] = (((((((arr_16 [i_4 - 1] [i_4 - 1]) == (arr_16 [i_4 - 1] [i_4 + 1]))))) > (((((var_2 % (arr_10 [i_4])))) ? ((var_5 ? (arr_7 [i_4] [2]) : var_2)) : (arr_20 [i_4] [i_4 + 1])))));
    }

    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_22 -= 17444;
        var_23 = (min(var_23, ((((max(((min((arr_19 [i_8] [i_8] [i_8]), var_1))), (~8468566662883908261))) != ((((arr_17 [i_8] [i_8]) % var_8))))))));
        var_24 = -11595;
        arr_33 [15] [i_8] = (~((((var_10 || (arr_32 [i_8] [i_8]))) ? 0 : (arr_12 [i_8] [i_8]))));
    }
    #pragma endscop
}

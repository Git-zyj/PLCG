/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (-(min((max((arr_1 [i_0]), 59)), ((((arr_0 [i_0] [i_0]) <= (arr_1 [i_0])))))));
        var_15 = (min(var_15, (((-(((arr_2 [i_0] [i_0]) ? -59 : (((-64 <= (arr_0 [i_0] [i_0])))))))))));
        var_16 = (arr_0 [i_0] [1]);
        var_17 += -59;
        arr_4 [i_0] [i_0] = (((((-59 - -33) ? (arr_1 [i_0]) : (((arr_1 [i_0]) >> (((arr_2 [i_0] [i_0]) - 3866754542)))))) != (((~(arr_2 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((-(~58)));
        var_18 = (((arr_0 [i_1] [i_1]) ? (((arr_0 [i_1] [i_1]) ? -60 : -59)) : (arr_0 [2] [i_1])));
        var_19 = (min(var_19, (((~(((arr_6 [i_1]) | (arr_0 [i_1] [i_1]))))))));
        var_20 ^= (min(52, -57));
        var_21 |= 48;
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    {
                        var_22 = (max(var_22, 55));
                        var_23 *= (arr_16 [i_2]);
                        arr_19 [i_2] [i_2] [4] [i_2] &= ((((!(arr_13 [i_5 - 1]))) ? ((-71 ? -48 : 38)) : (((arr_13 [i_5 - 1]) ? (arr_11 [i_3 - 1] [i_2] [i_5 - 1]) : (arr_11 [i_3 - 2] [i_5] [i_5 - 1])))));
                        var_24 ^= (min((min((arr_14 [i_3 + 2] [i_3 + 2] [i_5 - 1] [i_3 + 2]), (arr_14 [i_3 - 1] [i_3] [i_5 - 1] [i_3]))), ((max(53, -39)))));
                    }
                }
            }
        }
        var_25 = (min(59, ((((arr_13 [i_2]) ? (!58) : ((53 ? 75 : -49)))))));
        var_26 = (((arr_9 [i_2]) | (!-57)));
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        var_27 ^= ((64 ? (~-48) : (max(-39, ((47 << (((arr_10 [i_6]) + 8837852181034774751))))))));
        var_28 -= ((!(~62)));
        var_29 ^= 48;
    }
    var_30 = ((((min(48, 22))) ? (min((var_9 == 46), var_4)) : var_14));
    var_31 = (!-28);
    #pragma endscop
}

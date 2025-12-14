/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (min(((((max(var_11, 15433439338935090507))) ? var_11 : ((3932160 ? var_6 : var_8)))), var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 *= (var_10 ? ((((var_0 == (arr_1 [i_1] [i_0]))))) : ((~(25 & 1141733786))));
                var_14 += 2942396565520146658;
                arr_4 [9] &= (min(var_11, ((-((min((arr_1 [i_0] [i_1]), (arr_1 [i_0] [i_0]))))))));
                arr_5 [i_0] [i_1] [i_1] = ((!((min(var_2, -20)))));
                var_15 = (var_1 || 2);
            }
        }
    }
    var_16 = (max(var_6, (min((((var_7 << (18208 - 18180)))), -var_6))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = (min(var_17, (max(((-(min((arr_8 [16] [16]), var_6)))), ((((1 & 47327) + ((-(arr_6 [4]))))))))));
        var_18 -= (((18208 / (arr_6 [20]))));
        arr_9 [i_2] [i_2] = max((max((max((arr_8 [i_2] [i_2]), 0)), (min(var_9, var_2)))), (((var_5 ? (min((arr_6 [i_2]), -5013584842752787717)) : 14422262108400761279))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_19 = ((((arr_3 [i_3] [i_3] [i_3]) ? var_7 : 47322)));
        var_20 = ((!(arr_1 [i_3] [i_3])));
        var_21 = (((((var_8 ? (arr_12 [6]) : 0))) ? (arr_0 [i_3] [i_3]) : (arr_10 [i_3] [8])));
    }
    #pragma endscop
}

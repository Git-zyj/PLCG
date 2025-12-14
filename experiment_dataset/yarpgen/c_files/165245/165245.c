/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (arr_3 [i_0]);
        var_16 &= ((((-1982925290 ? 1982925289 : 3186)) - (!0)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_17 *= (((var_9 ? -536870912 : var_4)));
        var_18 &= ((36028779839094784 ? 0 : 99));
        var_19 = (max(var_19, (arr_5 [i_1])));
        var_20 &= ((!(arr_1 [i_1] [i_1])));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        var_21 = ((((((-(arr_11 [i_3]))))) ? -36028779839094784 : (((arr_8 [i_2 + 1] [i_2 - 1]) ? 62 : (arr_8 [i_2 + 1] [i_2 - 1])))));
                        var_22 *= (((arr_11 [i_3]) ? (((-(arr_7 [i_3] [i_3])))) : (!156)));
                        var_23 = (~-3375913073246265010);
                        var_24 = ((!(arr_7 [i_2] [i_4])));
                    }
                }
            }
        }
        var_25 = (((((5260471940459831141 ? 0 : -36028779839094785))) ? ((((!((max(var_11, (arr_14 [14] [i_2 + 1] [i_2])))))))) : ((((((arr_9 [i_2 - 1] [i_2 + 1] [i_2]) / (arr_10 [i_2] [i_2 + 1] [20])))) ? var_1 : ((max(100, (arr_12 [i_2] [i_2] [i_2 + 1] [i_2]))))))));
    }
    var_26 = var_11;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_12 ^= arr_1 [i_0] [i_1];
                            var_13 &= ((!(arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] [i_4])));
                            var_14 = 15784910253099983492;
                            var_15 ^= (((max((((arr_9 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0] [i_1]) | 305160399)), ((((arr_2 [i_1]) ? (arr_2 [i_0]) : (arr_6 [i_0])))))) << (((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), 2313937054655824082)) - 2313937054655824061))));
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_16 = (max((max((var_6 > var_2), (max(24132, var_2)))), (arr_4 [i_3] [i_2] [i_1])));
                            var_17 = (~((~(arr_13 [i_5] [i_3] [i_2] [i_3] [i_0]))));
                            var_18 = var_7;
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_16 [i_3] [i_3] [i_2] [i_3] [i_6] = (max((~var_3), (((~((max(128, (arr_13 [i_0] [i_3] [i_0] [i_0] [i_0])))))))));
                            var_19 = (min(var_19, (min((max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_0]), (arr_6 [i_2]))), (min((arr_13 [i_6] [i_2] [i_2] [i_2] [i_0]), (arr_13 [i_6] [i_2] [i_2] [i_2] [i_0])))))));
                            arr_17 [i_3] [i_3] [i_2] [i_1] [i_3] = ((2814044303 < (((~(arr_13 [i_0] [i_3] [i_0] [i_0] [i_0]))))));
                            var_20 = (min(var_20, (((((-1181889520 ? (1340658233 & 133) : (((min(var_9, -23575)))))) * ((((8517060904973601019 * 1) ? (((arr_6 [i_2]) + var_7)) : var_11))))))));
                            var_21 = (((((((min(var_10, 3562732240839239575))) ? ((min(60685, var_1))) : ((((arr_11 [i_0] [i_1] [i_1] [i_1]) == (arr_12 [i_3] [i_3] [i_3]))))))) ? (min(((max(-131072, 2776))), ((2814044303 ^ (arr_4 [i_0] [i_2] [i_6]))))) : ((min((((45512 < (arr_12 [i_0] [i_1] [i_3])))), ((var_5 ? 51422 : (arr_11 [i_0] [i_1] [i_2] [i_3]))))))));
                        }
                        arr_18 [i_3] = (min((min(((((arr_3 [i_3]) ? 1 : (arr_14 [i_3] [i_3] [i_1] [i_3] [i_0])))), (max(36031, var_5)))), (min(var_11, (max(var_4, 1))))));
                    }
                }
            }
        }
        var_22 = ((!(((-772095710 ? 50418 : var_8)))));
        var_23 |= ((~(min(((min(-27474, (arr_2 [i_0])))), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    var_24 = (max(var_24, (~var_7)));
    var_25 &= (max(((-(1474351528 / var_10))), var_4));
    #pragma endscop
}

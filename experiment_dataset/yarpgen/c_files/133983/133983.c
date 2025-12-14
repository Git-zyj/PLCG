/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!-1599324296282660471);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = 40;
                    arr_9 [i_0] [i_1] [i_2] [11] = -111;
                    var_17 = (min(var_17, ((min(var_6, (~var_7))))));
                    arr_10 [i_0] [i_2] &= ((!(arr_3 [i_2])));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_15 [i_3] = ((((26761984 * ((1 ? 6498149112954193464 : 40)))) << (-4268205311 - 26761975)));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 4; i_5 < 11;i_5 += 1)
            {
                {
                    arr_22 [i_4 + 4] = var_3;
                    var_18 = (min(var_18, ((-1599324296282660471 * (-1265912540878629899 | var_12)))));
                    arr_23 [i_5 - 1] [i_3] [i_3] [i_3] = ((((((((arr_13 [i_4 + 1] [i_3]) ? 17332835907548149932 : 56)) ^ (max(-89, 16556998970893695627))))) && (arr_6 [i_3] [i_5] [i_5])));
                    arr_24 [0] [i_4] [i_3] = 110;

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        var_19 = (!-80);
                        var_20 = (((~14392826925053714870) / (~var_4)));
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_21 ^= (+-4167);
                        arr_29 [i_7] [i_7] [i_5 - 4] [i_7] [i_7] [i_3] = 13379739318294845237;
                        arr_30 [i_4] [i_7] = ((~(8056 + 1)));
                        var_22 = 1;
                    }
                }
            }
        }
        arr_31 [i_3] = ((((~-8046) ? (var_14 ^ var_8) : (((1 & (arr_19 [i_3] [i_3])))))));
        arr_32 [i_3] = (((((+(((arr_26 [i_3] [i_3] [i_3] [13] [i_3] [i_3]) | var_15))))) ? 1 : (max(-8057, ((38405 ? (arr_21 [i_3] [i_3] [i_3]) : (arr_17 [i_3])))))));
    }
    #pragma endscop
}

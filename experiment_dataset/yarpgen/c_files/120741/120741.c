/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        arr_8 [2] [16] [i_1] [i_0] [1] [i_1] = (((arr_5 [i_0] [i_3 - 2]) >> (805247854 - 805247839)));
                        var_16 &= -805247855;
                        var_17 = (!144);
                    }
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((!(~var_11)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_5 - 1] = (arr_11 [i_5 - 1] [i_0] [i_5 - 1] [i_5]);
                                var_18 ^= (((((var_7 ? (arr_2 [0] [i_1] [i_0]) : var_2))) ? (arr_7 [i_5 - 1] [i_5] [18] [i_5 - 1] [i_5 - 1]) : ((805247854 ? (arr_13 [10] [i_1] [18] [8] [i_1]) : var_6))));
                                var_19 = (!var_2);
                                var_20 = ((-var_12 + (!var_8)));
                                var_21 ^= ((((((arr_15 [i_0] [i_1] [i_1] [i_2] [i_4] [i_0]) ? var_5 : (arr_12 [1] [i_2] [i_0])))) ? (~var_7) : ((122 >> (149 - 121)))));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_0] = (((1 * 92) ? -279994390 : ((((arr_14 [i_0] [i_0] [4] [1]) ? var_9 : var_8)))));
    }
    var_22 = (max(var_22, (((-63 ? 133 : (max(((-1305131405 ? var_14 : var_1)), 18014398508957696)))))));
    #pragma endscop
}

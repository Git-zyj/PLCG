/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((~(((!(((-700062230398351433 ? 5182701572841404587 : 0))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [1] [i_0] = ((!((min(((31982 ? 2393710454 : -11)), (((26537 ? 34140 : 41019))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] = ((((((((-67 ? 3164540809 : 1))) ? 1 : 7352))) | ((1 ? (((1 ? 1 : 1))) : ((1 ? 1 : 0))))));
                                var_17 &= 60009;
                                arr_15 [10] [i_0] [i_2] [i_0] [i_0] = (((((0 ? 1 : 1))) ? (((4294967295 > 1) ? (!3) : (max(1, 4294967295)))) : (max(((4294967295 ? 15966 : 20179473)), 181))));
                                var_18 -= (((max(1, 1)) ? ((1 ? (max(2557995875819130573, 1)) : (!4294967295))) : (((-(~6))))));
                                arr_16 [1] [1] [i_0] [1] [i_4] = ((-(1 / -2547091993)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((((~(!7648543643626199525)))) ? 115 : var_6));
    #pragma endscop
}

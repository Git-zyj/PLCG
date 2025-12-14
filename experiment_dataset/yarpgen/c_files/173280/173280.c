/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 -= (((max((arr_6 [i_0] [i_1] [i_1]), var_14)) == ((((1 / var_9) ? ((max(-29298, -22))) : (arr_0 [i_0] [i_0]))))));
                var_21 = min(((+(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_1]) : var_8)))), (min((arr_0 [i_0] [i_1]), 906069134)));
                var_22 += (((!(arr_0 [i_0] [i_1]))));
                var_23 = (((((-29302 | var_14) % (arr_6 [i_0] [i_0] [i_1]))) & (-29320 > 0)));
            }
        }
    }
    var_24 = (max((min(14289004417293510834, 1)), ((((1 ^ 16267201552138347696) < var_18)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_25 = (min(var_25, ((!((min(((max((arr_14 [i_4] [i_4] [i_4] [i_4]), (arr_9 [4])))), (min(var_1, var_7)))))))));
                    arr_15 [13] [i_3] [2] [i_2] = 2938339922;
                }
            }
        }
    }
    var_26 = ((4294967290 ? ((((1 ? 1 : 14289004417293510845)))) : ((((var_14 ? var_11 : var_4))))));
    #pragma endscop
}

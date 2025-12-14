/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0 - 1] = ((40 ? (~15873320778357501847) : (((1 ^ (arr_1 [i_0 + 2] [i_1]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [4] [i_2] = (0 ? 5 : (arr_11 [i_0 - 1] [i_3 - 1] [i_2]));
                                arr_14 [i_0] [i_2] [i_0 + 2] [i_1] [14] = max(15446294236314143910, ((min((arr_7 [i_2] [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3]), 35589))));
                                var_12 = (max(var_12, (((0 ? ((((25 & 27081) ? (max(2455, (arr_5 [13] [13] [1]))) : ((((arr_11 [i_1] [i_2] [i_1]) >> (var_8 - 25718))))))) : 14)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 -= 35589;
    var_14 -= (!((min(49325, (~0)))));
    var_15 = ((-var_5 ? (((((180840768 ? 38454 : var_2))) ? 28 : (-2907414837937253590 * 1))) : -10));
    var_16 = (((-var_11 >= -2465) <= (((9 ? var_7 : 2907414837937253590)))));
    #pragma endscop
}

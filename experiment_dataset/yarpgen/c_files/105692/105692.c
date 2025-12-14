/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [i_3] = (((arr_8 [i_0] [i_0] [i_2] [i_3]) ? (var_3 <= var_9) : (min((max((arr_10 [i_0] [i_0] [i_0] [i_3]), (arr_9 [i_3] [i_1] [1]))), (!22653)))));
                                var_16 = (min(-10526, ((-(arr_0 [11])))));
                            }
                        }
                    }
                }
                var_17 = (arr_8 [i_0] [15] [i_1] [i_1]);
            }
        }
    }
    var_18 = (max(var_18, ((((((((4603594623650714425 ? 48026 : 61947)) % 29065))) ? (((((var_6 ? var_0 : var_10))) ? 61947 : var_10)) : ((((max(var_11, 1177586258026854176))) ? var_13 : var_11)))))));
    #pragma endscop
}

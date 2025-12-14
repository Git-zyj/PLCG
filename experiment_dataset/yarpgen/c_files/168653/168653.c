/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((max(1, 159))), (--1)));
    var_17 = (!((max((!10), (max(var_1, 1989833299))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_18 = var_13;
                            var_19 = (max(299040919459834318, (((!((max(-76, 255))))))));
                            arr_11 [i_3] [i_0] [i_0] [i_0] = (min(1816508390010772490, 5996196210893308564));
                            var_20 = (min(-1, 3342622089));
                        }
                    }
                }
                var_21 = (max((~var_2), (!var_7)));
                var_22 = ((-((~(!-2104790828766572709)))));
            }
        }
    }
    #pragma endscop
}

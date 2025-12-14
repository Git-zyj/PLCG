/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_20 &= -64;
                            var_21 = ((!((max(1, 1136455051)))));
                        }
                    }
                }
                arr_12 [i_1] = (var_6 == var_16);
                arr_13 [i_0] [i_1] = (arr_0 [4]);
            }
        }
    }
    #pragma endscop
}

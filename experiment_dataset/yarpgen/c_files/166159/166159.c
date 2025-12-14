/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((34675 / 65535) | ((~(13436299134630778193 == var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (!var_11);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = var_8;
                                var_17 |= var_11;
                                var_18 = -5021867372420904231;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

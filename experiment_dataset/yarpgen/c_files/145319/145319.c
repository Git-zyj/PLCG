/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 = 1853;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_0, ((((32767 * -32760) >= (32753 % -32764))))));
                                var_12 = (max(-32767, (9683702623662479044 && -32764)));
                                var_13 = (((1948710772877161501 == -32757) != (max((-32767 - 1), ((var_1 ? (-32767 - 1) : 1948710772877161501))))));
                            }
                        }
                    }
                    var_14 = var_4;
                }
            }
        }
    }
    var_15 = (((max(2817917766064977607, ((max(4274933546, 32753))))) >= ((min(var_2, ((var_5 << (32767 - 32764))))))));
    #pragma endscop
}

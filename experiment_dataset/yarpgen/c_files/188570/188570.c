/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((((28672 >> (152 - 136))) >> (28672 - 28661)))));
    var_21 = var_10;
    var_22 = (((((var_7 << (var_15 - 20871)))) ? ((~((var_10 ? var_2 : 28672)))) : ((((-5676625661331841040 ? var_19 : 1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_23 = ((min((min(var_4, 0)), (~4261412864))));
                                var_24 = (max(var_7, ((((1 ? 0 : -8500))))));
                                var_25 = ((-((max(var_14, var_12)))));
                                var_26 = (((((-var_14 + (var_3 - var_10)))) ? var_5 : (((4261412864 ? 255 : 1)))));
                                var_27 = (((((var_8 ? var_18 : var_1)) << (((16289622147365225255 - var_15) - 9796042337838559620)))));
                            }
                        }
                    }
                    var_28 = (~118);
                }
            }
        }
    }
    #pragma endscop
}

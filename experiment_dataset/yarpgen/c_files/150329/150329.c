/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_10 = (((((max(var_3, var_5)) < (!204))) || -var_5));
                arr_6 [i_0] = var_4;
            }
        }
    }
    var_11 = (max(var_11, ((((((((min(var_9, 2942075897))) ? (12041470207936151960 / 3964657059) : var_7))) ? var_9 : (((((-12 ? var_8 : var_9))) ? var_3 : (var_7 <= 17263552013166309942))))))));
    var_12 = (((-((1183192060543241689 ? var_0 : -1)))));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                {
                    var_13 = (max(var_13, 14687219528428372170));
                    var_14 = (min(var_7, ((!(var_9 < var_7)))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_19 [i_2] [i_6] [i_4] [i_5] [i_6 + 1] = var_2;
                                var_15 = (max(var_15, 1183192060543241666));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

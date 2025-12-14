/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-var_6 - (((var_10 ? var_9 : 18))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_11 [i_0 + 2] [i_0 + 2] [i_3] [i_0 + 2] = 255;
                                var_14 += (min(10176, 0));
                                var_15 = ((min(1265600201, 6369766782803244344)));
                                var_16 = (~24307119435229890);
                            }
                        }
                    }
                    arr_12 [i_0] [6] = ((8970528370817162664 ? var_11 : ((var_12 ? (arr_9 [i_0] [i_1] [i_2] [i_2 - 3] [i_0 + 2]) : var_10))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((((-((66846720 ? var_9 : (arr_2 [i_2] [i_2] [i_6]))))) ^ var_1)))));
                                var_18 = (max(var_18, (((var_3 - ((~(-1073741824 * var_2))))))));
                                var_19 = (max(var_19, -6369766782803244345));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

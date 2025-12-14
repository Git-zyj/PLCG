/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_2 + var_15);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (1 ? ((var_9 << (1333285316 - 1333285316))) : ((2748134425 ? 1 : 1951662577664138674)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_9 [1] [i_1] [1] [i_3] [0] [i_1] = var_2;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_20 = (min(var_20, ((((var_0 && var_15) ? (var_16 > var_4) : (var_5 < var_2))))));
                            var_21 = (max(var_21, ((((((var_16 ? var_6 : var_9))) || (((var_0 ? var_8 : var_9))))))));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_22 = var_17;
                            arr_17 [i_0] [8] [i_0] [1] [i_0] = (((((1 ? 1 : (1 == 1951662577664138674)))) ? 1 : (((6291456 == (383907560275099848 || 99))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

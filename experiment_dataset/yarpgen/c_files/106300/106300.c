/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_12 = var_4;
                        arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((((arr_1 [i_1 - 2]) ? var_2 : ((161 ? 79 : 1239575137)))) <= (1239575140 <= 145));
                    }
                }
            }
        }
        var_13 |= 2013265920;
        var_14 = ((((((arr_5 [i_0] [i_0]) - (min(1, (arr_6 [i_0] [i_0] [i_0] [i_0])))))) ? (!var_9) : ((((min(var_8, (arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_5 [i_0] [i_0]) & (arr_9 [i_0]))) : var_0))));
    }
    var_15 = (((18430639264277398201 ? var_0 : (min(var_5, 4149393135987455289)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_11, (var_15 >= var_16)))) && -var_3));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 -= (arr_0 [i_0] [i_0]);
        var_22 = (min(var_22, ((min(((((max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))) ? 6849027309610924193 : (max((arr_1 [i_0]), 38563)))), ((((-1667123836 ? var_2 : var_2)))))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_23 = (arr_3 [i_1]);
        arr_4 [i_1] = (+(min((arr_3 [i_1]), (((arr_3 [i_1]) << (10245 - 10245))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_24 += var_10;
        var_25 = (max(1667123836, ((-(arr_2 [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_26 = 17160136368140023621;
                        var_27 -= var_10;
                        var_28 = (max(var_28, (arr_9 [i_5])));
                    }
                }
            }
        }
        var_29 = ((var_11 ? var_12 : ((((min((arr_8 [i_2] [i_2] [i_2]), var_17))) ? (arr_10 [i_2] [i_2] [i_2]) : (min((arr_13 [i_2] [i_2] [i_2] [i_2]), var_8))))));
        arr_16 [i_2] [i_2] = var_13;
    }
    #pragma endscop
}

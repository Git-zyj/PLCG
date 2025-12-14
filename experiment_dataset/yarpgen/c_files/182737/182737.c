/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((1 ? var_6 : var_1))) / (~4294967293)))) == 108));
    var_12 |= (max(((max(var_3, (var_5 && 1)))), (max(var_8, ((var_7 ? 4137339926 : 1))))));
    var_13 = var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = ((((var_10 / (((-(arr_0 [i_0] [i_0])))))) > 76));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = (103 ? ((((!(((var_0 ? var_10 : var_7))))))) : (((arr_9 [i_3 - 1] [i_3 - 2] [i_3 - 3] [i_3 - 3]) ? (arr_9 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 4]) : var_10)));
                        var_15 = (max(var_15, ((max(1, var_8)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

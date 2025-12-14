/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min((!var_0), (min(var_6, ((min(var_4, var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        var_12 = 255;
                        var_13 = (((arr_5 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3]) ? ((var_9 ? (min(var_6, var_1)) : ((max(var_8, 1347642828))))) : (((var_3 ? var_7 : ((min((arr_4 [i_3] [i_2] [i_0]), 1))))))));
                        var_14 = (max((arr_9 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3]), (((-(max(var_2, var_3)))))));
                    }
                    var_15 = ((~(arr_4 [11] [i_1] [i_1 - 1])));
                }
            }
        }
    }
    #pragma endscop
}

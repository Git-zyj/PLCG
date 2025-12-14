/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~0);
        arr_4 [i_0] = (((((arr_0 [i_0] [i_0]) << (((arr_2 [i_0]) - 69)))) ^ ((max(var_3, 145)))));
        var_13 = (min(var_13, (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (min((arr_9 [i_2] [i_1] [i_2] [i_2]), (min((arr_9 [i_0] [16] [i_1] [i_2]), (arr_9 [i_2] [i_1] [i_1] [i_0])))));
                    arr_11 [i_2] [i_1] [i_1] [i_1] = (min(((-(((arr_1 [i_0] [i_0]) ? (arr_8 [i_1] [i_1]) : 1)))), (arr_1 [i_2] [i_2])));
                    arr_12 [i_0] [i_1] [i_2] = (arr_1 [i_0] [i_0]);
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_15 [i_3] [i_3] &= ((((((max((arr_14 [i_3]), (arr_13 [i_3] [i_3])))) ? (!127) : (((arr_14 [3]) ? 1 : 125))))) ? ((max(((946470214 ? 820630096 : 246)), 127))) : ((+(max((arr_13 [i_3] [10]), 4294967281)))));
        arr_16 [i_3] [i_3] = max((min((arr_13 [i_3] [i_3]), 76)), (((!(arr_13 [i_3] [i_3])))));
        arr_17 [i_3] [i_3] = ((13 ? 255 : 2511543940));
    }
    var_15 = (!var_9);
    #pragma endscop
}

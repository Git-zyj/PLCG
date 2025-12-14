/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((((~-1013709794) < (-109 + 357718084)))) >> (((((var_15 + 357718098) + (max(1391585995, var_14)))) + 82254030)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] = 2296857904;
                    var_21 = (((((~(arr_7 [i_0])))) ? (((arr_0 [i_0] [i_0]) ? -5452010232824970451 : 84)) : (((~(arr_6 [i_1]))))));
                }
            }
        }
        var_22 = (((arr_6 [2]) ? 15961 : (((arr_5 [i_0] [10] [i_0] [i_0]) / -329917646))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_23 = (((((arr_10 [1]) | -1020427945))) ? 5452010232824970450 : 1);
        var_24 = ((!((!(arr_12 [14])))));
        var_25 = (arr_9 [i_3] [i_3]);
    }
    #pragma endscop
}

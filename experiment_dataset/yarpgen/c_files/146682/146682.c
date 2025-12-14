/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_15 = (max(var_15, (arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1])));
                        var_16 = ((127 ? (arr_7 [i_2 + 2] [i_0 + 1]) : ((255 ? var_3 : 101))));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_17 = (max(var_17, ((max((min((max(121, (arr_12 [i_4] [i_2 + 2] [i_1] [i_0]))), (~var_12))), var_10)))));
                        var_18 = (min(-8192, 59780));
                        var_19 = (((arr_10 [i_0] [2]) < (((((arr_0 [i_0]) == (arr_0 [i_0])))))));
                    }
                    var_20 = (max(((max((arr_9 [i_0 + 1] [i_1] [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 2]), 0))), (((((~(arr_9 [1] [13] [11] [i_1] [i_1] [i_2])))) ? ((var_1 ? 118 : (arr_5 [i_0] [i_1]))) : (arr_1 [i_2 + 2] [i_0 + 1])))));
                }
            }
        }
    }
    var_21 = (max(var_14, ((max(var_10, (min(var_1, var_7)))))));
    #pragma endscop
}

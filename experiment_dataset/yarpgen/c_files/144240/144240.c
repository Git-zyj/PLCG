/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(12232784634845181951, 33554431));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [14] = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] = ((((min((arr_6 [i_0] [i_3 + 1]), (arr_6 [i_0] [i_1])))) ? (arr_6 [i_1] [i_2]) : (((arr_6 [i_1] [i_3]) ? (arr_6 [i_0] [i_1]) : (arr_6 [i_2] [i_3 + 2])))));
                        var_17 = (max(((51774 ? 1448270795 : (-9223372036854775807 - 1))), (arr_9 [i_3 - 1] [i_2] [i_2] [i_3 + 1])));
                        var_18 = ((-((~(arr_3 [i_0])))));
                        var_19 = (((arr_5 [i_0] [i_1] [i_2] [i_3 + 2]) || (max((((arr_0 [i_0]) || var_10)), (((arr_1 [i_0]) != 0))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

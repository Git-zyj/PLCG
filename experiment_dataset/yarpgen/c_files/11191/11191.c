/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 1;
    var_14 = ((31 ? -1907420849 : 61));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 = -1907420849;
                            var_16 = 65523;
                            var_17 = (arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                            var_18 = ((((((arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]) ? (arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]) : (arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])))) ? ((((arr_4 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]) ? (arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))) : (-9223372036854775807 - 1)));
                        }
                    }
                }
                arr_10 [1] = 25528;
            }
        }
    }
    #pragma endscop
}

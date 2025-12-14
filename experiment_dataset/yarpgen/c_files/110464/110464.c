/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = 39313;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 += (min((min((((arr_7 [i_0] [7] [i_3]) ? (arr_4 [i_0]) : 39313)), (-121 < 1))), (min((((arr_2 [i_0] [i_1]) ? 26434 : 1)), (arr_6 [i_0] [i_0] [i_0])))));
                            arr_9 [i_0] [1] [1] [i_2] [i_3] = 58064;
                            arr_10 [i_0] [i_0] [4] [i_0] = ((-80 ? (((((1 ? (arr_1 [i_2] [11]) : -76))) ? (((arr_3 [i_0] [2] [1]) ? (arr_4 [i_0]) : 1)) : ((min(1, -105))))) : (max((((arr_8 [i_0] [i_1] [5] [i_2] [i_2] [i_3]) ? (arr_0 [i_0] [i_1]) : 49738)), (((arr_0 [5] [i_2]) ? 1 : -121))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

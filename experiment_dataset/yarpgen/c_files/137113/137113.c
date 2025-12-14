/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_2, var_1)) << (var_6 <= 16705))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (arr_1 [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 = ((((((min((arr_3 [i_0]), 1331537624)) ^ (arr_4 [i_0] [i_0])))) ? ((min(1, (arr_6 [i_0 + 1] [i_0 - 1])))) : ((-(arr_7 [i_0] [1])))));
                            arr_12 [i_2] [i_2] [i_2] [i_2] [i_2] = ((~587274617431374976) | (((min((arr_11 [i_0 - 2] [i_0 - 2] [i_0] [i_0 - 2]), 32)))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = (min(((((max(var_3, (arr_0 [i_3])))) ? -144115188075855872 : 0)), var_7));
                            var_12 = (((arr_7 [i_2] [i_2]) ? (((((var_4 || -1632460646) || (((1198260757 ? var_3 : 4182643961))))))) : 0));
                        }
                    }
                }
                arr_14 [i_1] = (((((52426 ? 255 : 2878833455))) ? (((((102 ? 30442 : -98))) ? (var_7 || 3708884611) : (max(var_8, (arr_7 [i_0] [i_1]))))) : ((max(52430, -16706)))));
            }
        }
    }
    #pragma endscop
}

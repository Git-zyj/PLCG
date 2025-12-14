/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = ((((min(((353647236750156484 ? 126 : 1125899906842623)), 126))) ? (~var_4) : var_3));
    var_18 = ((-115 ? 74 : 111));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (max((max(var_9, (arr_1 [i_0 - 1]))), var_12));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] = (min((arr_8 [i_0 + 1] [4] [i_3 + 1] [i_3]), (arr_6 [i_0] [i_3] [i_3 - 1])));
                            arr_12 [4] [i_0] = ((-(((arr_10 [i_0] [i_0 + 2] [i_0 + 1] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                        }
                    }
                }
                var_19 = ((((arr_9 [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [i_0]) >> (((arr_9 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0 - 1]) - 146)))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 = (1424121303 % 1424121312);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 = ((1424121303 && (((-1424121303 ? (arr_7 [i_1] [14] [i_1 + 1]) : (arr_7 [i_1] [i_1] [i_1 + 3]))))));
                                var_15 = ((~((~(max(var_10, (arr_10 [i_0] [i_0] [8] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = var_7;
    #pragma endscop
}

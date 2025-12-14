/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -27;
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (min((((arr_4 [i_1 + 1] [i_1 - 1]) ? (226 || var_4) : (((arr_4 [i_1 + 1] [i_0]) ? var_8 : 10057)))), (arr_0 [i_0])));
                arr_6 [i_0] [i_1] = (~-1289);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 += -1289;
                            var_21 = (arr_9 [i_3] [i_3] [10] [i_3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

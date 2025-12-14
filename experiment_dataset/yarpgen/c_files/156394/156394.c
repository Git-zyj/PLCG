/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = (arr_4 [i_0] [i_1] [i_0] [i_0]);
                    var_13 |= ((((max(373567640, (~32587)))) ? (max((~52856), (arr_5 [i_2 - 1] [i_0]))) : ((~(~3508058507)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((!(((((((!(arr_8 [i_4]))))) * (arr_17 [i_7] [i_6] [i_3] [i_4] [i_3]))))));
                                var_14 ^= (((arr_17 [i_3] [i_4] [i_3] [i_6] [i_5]) ? (arr_6 [i_3]) : ((((min((arr_0 [3]), (arr_11 [i_6] [i_6])))) ? (~29) : (~1)))));
                                arr_23 [i_3] [i_5] [15] = (!24914);
                            }
                        }
                    }
                }
                var_15 = (!(arr_11 [19] [i_3]));
            }
        }
    }
    var_16 = var_10;
    var_17 = (max((max(var_1, (!var_0))), (~var_6)));
    var_18 = (((var_7 ? 268427264 : var_7)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122542
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
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_14 &= (max(((-1 ? ((-(arr_10 [i_4] [16] [i_3] [i_2] [i_1] [i_0]))) : (((max(12, 1)))))), -12));
                                var_15 = (min(var_15, (arr_8 [i_1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_16 [i_6 - 1] [i_2] [i_5] [i_2] [i_1] [i_0] |= ((-(arr_8 [i_0])));
                                arr_17 [i_0] [i_1] [i_1] [i_5] [i_6] |= ((((((!var_8) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : (!1)))) >= (max((((var_9 ? 8 : var_13))), (arr_10 [i_0] [i_1] [i_2] [i_5] [i_6] [i_2])))));
                                var_16 -= -115;
                            }
                        }
                    }
                    var_17 = (max(var_17, ((((((max(6971252708715603337, 12)))) ? (max(0, ((-6 ? 11475491364993948284 : -47)))) : 22490)))));
                    var_18 = (!52756);
                    arr_18 [i_0] [i_1] = max(859241256, 6971252708715603339);
                }
            }
        }
    }
    var_19 = ((((((var_0 ? 54 : var_6))) ? var_2 : -18446744073709551611)));
    var_20 = (max((((max(var_4, 0)) ^ (max(-6, -619212369)))), ((((max(7303583712467729204, -23695))) ? var_0 : ((-23693 ? -1844780474 : -19))))));
    var_21 = var_9;
    #pragma endscop
}

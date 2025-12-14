/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = 16130105860178878316;
                                arr_13 [i_0 + 1] [i_1] [i_2] [i_1] [i_1] = 1;
                            }
                        }
                    }
                }
                var_16 = ((14227360669255392753 ? ((max(3590484004, var_11))) : (((((22 >> (-23442 + 23489)))) ? (min(18446744073709551583, 18446744073709551583)) : 12))));
                arr_14 [i_1] = 1;
                var_17 = (min(var_17, -var_12));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [12] [i_1] &= var_14;
                            arr_20 [9] [i_1] = (max(-3373331403706988626, (var_9 != 140)));
                        }
                    }
                }
            }
        }
    }
    var_18 = (var_7 / var_1);
    #pragma endscop
}

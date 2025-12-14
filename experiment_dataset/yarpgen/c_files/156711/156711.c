/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((1 ? var_12 : 4575255871964551047)) & (127 ^ 25311))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_19 = ((((536870911 ? 4294967277 : -114)) & var_12));
                        var_20 = ((var_4 ? (((arr_11 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_2] [i_0 - 1]) ? -1 : -var_11)) : (((arr_4 [i_0 - 1]) ^ 42523))));
                        var_21 = (((((((max(27286, var_8))) ? (((2182252875 ? 40241 : (-32767 - 1)))) : var_14))) ? (((max(41, 255)))) : (max(var_1, var_5))));
                        var_22 = (min(((max(var_11, -349946464))), (max(0, var_9))));
                        var_23 = (125 < var_11);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_24 = ((((max(-127, var_3))) % 536870898));
                                var_25 = (((max((max(536870870, var_8)), 134)) - (((((var_9 ? var_14 : 252)))))));
                                var_26 &= 44;
                                var_27 = (max(var_27, (((var_15 >> (((max(var_10, var_5)) - 3316866650)))))));
                                var_28 = ((((((var_5 ? 1 : 536870870)))) && 28802));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((var_6 >> (-140001750053337652 + 140001750053337659))) | -1447476420));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 &= (((var_8 & 55515) != 32));
                var_18 = (((min(12136, var_7)) - (10020 & 0)));
                arr_6 [17] |= ((min(44463, 1)));
                var_19 = (min(var_19, ((min(219, 36028797018963712)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_20 = (min(var_20, ((min((max(9223372036854775807, var_0)), 2030)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_21 = 77;
                                var_22 -= var_10;
                                arr_21 [0] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, (((0 | 55533) != var_11))));
    #pragma endscop
}

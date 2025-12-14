/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -306696657725761129;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = (arr_8 [i_0] [i_1] [1] [i_3] [7]);
                                var_20 = (max(-2153275179302361724, (((max(73, 18446744073709551615)) * 2153275179302361722))));
                                var_21 = (min(var_21, var_7));
                                arr_11 [10] [i_1] [6] [i_3 - 3] [10] [i_1] = (13712303230784658 ? 511 : 98);
                            }
                        }
                    }
                }
                var_22 = 2199023253504;
            }
        }
    }
    var_23 = var_0;
    /* LoopNest 2 */
    for (int i_5 = 4; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 13;i_6 += 1)
        {
            {
                var_24 |= -6306110986344865074;
                var_25 = (max(var_25, ((var_17 || ((-94 || ((max(var_12, (arr_12 [i_5 - 3]))))))))));
            }
        }
    }
    #pragma endscop
}

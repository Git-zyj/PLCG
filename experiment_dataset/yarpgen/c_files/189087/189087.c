/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (-32767 - 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_21 = (((~32767) ? ((-(155 + 1))) : (((((var_14 / (arr_0 [i_1] [i_0])))) ? -72 : ((var_2 + (arr_3 [i_1])))))));
                arr_5 [i_0] [i_0] = (((min(((((-32767 - 1) ? (arr_3 [i_1]) : 2179734501))), (max(62659, 9007182074871808))))) ? -72 : 2205555681732678656);
                var_22 -= (max(65535, ((-(((arr_4 [i_0] [i_0] [i_0]) ? -2205555681732678657 : var_1))))));
                arr_6 [i_0] |= var_9;
            }
        }
    }
    var_23 = ((-(min((var_13 & 34902), ((var_0 ? 32758 : var_18))))));
    var_24 = -32766;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_25 = (max((arr_19 [i_2] [7] [i_2] [i_2] [i_2] [i_2]), ((((max((arr_21 [i_2] [7] [i_4] [i_5] [5]), (arr_0 [9] [1])))) ? ((min(var_1, -1))) : 3704422440345580038))));
                                arr_22 [i_2] [i_3] [i_4] [i_5] [3] = (((arr_21 [i_2] [i_2] [i_2] [i_5] [i_6]) <= -var_6));
                                var_26 += (max(((var_12 * (((arr_21 [9] [i_3] [i_3] [i_3] [i_3]) / -36)))), (arr_13 [i_6] [i_6])));
                            }
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_26 [i_7] = 17475;
                    arr_27 [i_2] [i_2] [i_3] [i_7] = (72 != 37);
                    arr_28 [i_2] [i_7] [i_7] = ((min((arr_20 [5] [i_3] [i_3] [i_7] [i_7]), 84)));
                }
            }
        }
    }
    #pragma endscop
}

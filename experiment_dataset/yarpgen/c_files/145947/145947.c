/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((-43 - 1827529370) + var_0)) + var_5);
    var_15 = 126;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (~(((-1 + 2147483647) >> (19107 - 19076))));
                    arr_6 [i_1] [i_2] [13] [i_1] = (min((((129 ^ 2467437922) ^ (~2547995761))), -127));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] = ((-127 | (127 * 45898)));
                                arr_14 [4] [i_1] = (((((!(1395008407870986206 < 250)))) & -810563042));
                            }
                        }
                    }
                    var_17 = -64;
                }
            }
        }
    }
    #pragma endscop
}

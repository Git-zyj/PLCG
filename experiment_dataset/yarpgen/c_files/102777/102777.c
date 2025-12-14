/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = 11;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] = 3;
                            var_17 = -31841;
                            arr_12 [i_0 + 2] [i_0] [i_1] [i_1] [i_2] [i_3] = ((((((((arr_0 [i_1]) + 9223372036854775807)) << (14649 - 14649))) ^ (((min(8086, 23)))))) >= ((((((65535 ? 50896 : 1))) ? ((min(1169477146, 96))) : (((arr_6 [i_3]) | 1315635836))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = var_10;
    var_19 = var_3;
    var_20 = (((23 | -6527205840969310170) ? (14654 + var_11) : (2044 / 14025243364585390448)));
    #pragma endscop
}

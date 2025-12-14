/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((1 ? 18446744073709551615 : -106));
    var_11 = (min(var_11, ((max(var_5, var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [6] |= ((((!(arr_1 [i_1 + 1])))));
                arr_5 [i_1] = (2110998938 + (min(0, (arr_0 [i_1 - 1] [i_1 + 1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_3] [i_3] [i_1] [i_3] = (min((arr_7 [i_0] [i_0] [i_0] [i_0]), (((!(arr_2 [i_0]))))));
                                var_12 = (max(var_12, 0));
                            }
                        }
                    }
                }
                var_13 -= ((((((min(var_3, 0))))) & 18446744073709551615));
            }
        }
    }
    var_14 &= ((!((!((max(var_8, var_9)))))));
    #pragma endscop
}

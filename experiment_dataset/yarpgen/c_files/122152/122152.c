/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_11 ? 18446744073709551615 : var_10));
    var_13 = ((~((var_0 * (min(0, 16383))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 = 18446744073709551601;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_15 = (18446744073709551607 ? var_10 : 13555151780747980392);
                                arr_12 [i_4] [i_3] [i_2 - 4] [i_1] = (((max((arr_6 [i_2 - 4] [i_1]), (arr_10 [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_3] [5] [i_2 - 4])))) || (arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]));
                            }
                        }
                    }
                    var_16 += ((-(min(13555151780747980392, 150))));
                }
            }
        }
    }
    #pragma endscop
}

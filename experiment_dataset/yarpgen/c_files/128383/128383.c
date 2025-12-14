/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_4] |= (arr_0 [i_0 + 1]);
                                var_14 = (max(2518028463, (((!(33092 ^ -4294967296))))));
                            }
                        }
                    }
                    arr_13 [6] [i_1] [i_0] = ((18446744073709551615 ? 58909 : 41));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_15 = ((arr_15 [i_0] [i_0] [i_6]) == -636866690);
                                var_16 = (max(var_16, (((((((((~(arr_2 [i_5])))) && (2147483624 - 1129951868)))) | (max(((-1498918456 ? 14336 : var_4)), (~var_0))))))));
                                arr_18 [i_6] [i_2] = -1686433658;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_2;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = (arr_3 [i_0]);
                    var_20 ^= (((((18446744073709551613 ? var_5 : (arr_7 [i_2] [i_0] [i_1 + 1] [i_0])))) ? (((((min((arr_8 [i_0] [i_1 + 1]), var_2))) && (arr_8 [i_0] [i_0])))) : (min((arr_7 [i_1 - 1] [i_1] [i_0] [i_0]), ((var_7 ? (arr_7 [i_0] [i_2] [i_0] [i_2]) : var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_3] [i_0] = (min((min((!3), 23)), (arr_0 [i_1 - 1] [i_2])));
                                var_21 = (arr_14 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_0] = (((18446744073709551613 ? 2147483647 : 108)));
                }
            }
        }
    }
    var_22 ^= var_18;
    #pragma endscop
}

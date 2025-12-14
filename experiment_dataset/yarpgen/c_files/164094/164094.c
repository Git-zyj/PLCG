/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_12 |= 1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 |= var_10;
                                var_14 += (min((!703), (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4 + 1] [i_3])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 7;i_6 += 1)
                    {
                        {
                            var_15 &= (((64832 < 32767) ? (((arr_17 [1]) ? (arr_14 [i_6 + 2] [i_6 + 1] [i_6 + 1] [7] [i_6 + 1] [i_6 - 1]) : (arr_5 [8] [i_5] [8]))) : (arr_7 [8] [i_5])));
                            var_16 -= (max((((((-(arr_12 [8] [8] [i_5])))) ? ((var_7 ? (arr_18 [i_0] [i_1 - 1] [i_6 - 1]) : 64827)) : (max(6502, 4294967294)))), (((!(arr_12 [4] [i_1 - 2] [i_1 - 3]))))));
                            var_17 = (min(var_17, (((-(arr_6 [i_1] [1] [i_1]))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, var_10));
    #pragma endscop
}

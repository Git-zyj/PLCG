/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = ((var_11 ? -102 : (max(102, (arr_7 [i_0] [i_1] [i_1] [i_2 + 2])))));
                    arr_10 [i_0] [i_1] [i_2] = (((((~(arr_9 [i_0] [i_1] [i_2] [i_2])))) == ((((((arr_8 [17] [i_0] [i_0]) & -11)) >> (((~var_10) + 34)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                var_17 = (max(var_17, -11));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_18 = ((!(((-102 ? (arr_6 [i_6] [i_6]) : (max(var_7, 11)))))));
                                arr_26 [i_3] [i_3] [9] [i_3] [9] = ((!((min(11, (arr_2 [i_3 - 1] [i_6]))))));
                                arr_27 [2] [2] [1] [2] [i_5] [2] [i_7] = (((arr_25 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 + 2]) ? ((max(var_10, (arr_25 [i_4] [i_4] [i_4] [2] [i_4 + 2])))) : ((0 / (-127 - 1)))));
                            }
                        }
                    }
                }
                arr_28 [i_3] [i_4] &= ((7457 ? 11 : 787241043599093739));
                arr_29 [i_3 + 3] [i_3 + 3] [i_4 + 1] = (1616 / 67553994410557440);
            }
        }
    }
    #pragma endscop
}

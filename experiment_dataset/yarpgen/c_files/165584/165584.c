/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = (min(((((arr_5 [i_1 + 1] [i_1 + 1] [i_0 - 2]) / 3492153670))), ((((max((arr_2 [i_2]), 475609610))) & ((536869888 + (arr_4 [1] [1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((((~475609622) ^ (((arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0 - 3]) ? 3819357692 : 475609610)))) << (475609613 - 475609607))))));
                                var_17 = (arr_3 [i_3] [i_2] [2]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_18 &= ((18446744073709551612 ? 2143289344 : 14977463677123227251));
                var_19 |= ((((645 ? 2293398760 : (arr_13 [i_5 + 1] [5] [i_5] [5] [i_5]))) / (((-(arr_6 [i_5] [i_5 - 1] [i_5] [i_6]))))));
            }
        }
    }
    var_20 = (min(var_20, (((((((148 << (var_11 - 438531894)))) ? 475609622 : (min(36028797018832896, 3819357661))))))));
    #pragma endscop
}

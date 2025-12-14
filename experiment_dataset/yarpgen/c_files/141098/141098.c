/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = (((arr_3 [i_1 - 1] [i_1 - 1]) ? (((arr_4 [i_0] [6] [i_0]) + 65535)) : ((1 ? (arr_0 [i_0] [i_1]) : (arr_1 [i_0])))));
                arr_5 [i_1] [i_1] = (max(((~(arr_2 [i_0]))), ((((var_3 | -30187) | (max(53, (arr_3 [i_1] [i_0]))))))));
                var_12 &= (min(((+(((arr_1 [i_0]) ? 4294967295 : (arr_4 [i_0] [i_1] [i_1]))))), (!6493818678882272008)));
                var_13 = (max((max((arr_0 [i_1 + 1] [i_1 + 3]), -89)), (max((arr_3 [i_1 + 2] [i_1]), 962484708))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_14 = (max(var_14, (arr_11 [i_5])));
                            var_15 = (max(10692592462582033300, (~7792)));
                            arr_17 [i_2] [3] [i_4] [i_4] = (arr_16 [i_2] [i_3] [i_4] [i_5] [i_5]);
                            var_16 = (1 % 65535);
                        }
                    }
                }
                var_17 = (max(var_17, -20424));
                arr_18 [i_3] = (((((arr_3 [i_3 + 2] [i_2 - 1]) ? (max(var_6, 1)) : (((max(var_3, 98)))))) > ((((((63488 ? 112 : var_4))) ? ((1 >> (var_1 + 8282126546662034306))) : ((421988111 ? 1845684510 : 1)))))));
            }
        }
    }
    #pragma endscop
}

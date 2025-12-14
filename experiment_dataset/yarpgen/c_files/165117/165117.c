/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = (max(((((1 ? 8858 : (arr_5 [i_2]))) >> (((~var_5) - 10927937087046189421)))), (((8858 ? (arr_6 [i_0] [i_0] [i_0 + 1] [i_0]) : ((min(6445, 8858))))))));
                    var_13 = arr_4 [i_0] [18] [1];
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 18;i_4 += 1)
        {
            {
                var_14 = 56678;
                var_15 = ((!(var_9 && var_4)));
                arr_16 [i_4] = (arr_10 [9] [i_4]);
                arr_17 [i_4] = (((((var_12 ? ((max(56655, var_0))) : (56678 / 8871)))) ? ((-var_6 + (arr_10 [i_4] [i_4]))) : var_7));
            }
        }
    }
    var_16 |= (var_11 <= var_6);
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_17 = (max((((56655 >> (236 - 228)))), ((59108 ? (arr_3 [i_5 - 1]) : var_7))));
                var_18 = (((((var_1 ? (max(13449712698962195508, 56655)) : (!0)))) ? (max((94 + 59090), ((max(6427, var_6))))) : ((((((arr_6 [i_6] [i_6] [i_6] [i_6]) && 3601046365)) && 1)))));

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_19 = (min(var_19, ((((((1343800639 & (arr_18 [i_5] [i_6])))) ? -var_1 : (max((arr_19 [8]), 2251799813685247)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 7;i_9 += 1)
                        {
                            {
                                var_20 = (max(((162 ? ((2875519251 ? var_12 : 0)) : ((min(var_1, 0))))), ((((var_4 < 2167730487134281639) <= 288230376151711743)))));
                                arr_28 [4] [i_5] = (max(var_8, ((min((-1812652303 < 94), (181 <= var_8))))));
                                var_21 = ((((max(2875519256, 255))) + var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 ^= (max((((var_10 && -2441536229743599959) >> (((~1) + 10)))), (((var_9 && var_1) ? (max(var_12, var_9)) : -1))));
    #pragma endscop
}
